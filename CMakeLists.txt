find_package(Qt5 COMPONENTS Core Multimedia Quick REQUIRED)

add_definitions(
  -DQZXING_LIBRARY
  -DDISABLE_LIBRARY_FEATURES
  -DZXING_ICONV_CONST
  -DNO_ICONV
)

file(GLOB_RECURSE SOURCES
  ${CMAKE_CURRENT_SOURCE_DIR}/src/zxing/zxing/*.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/src/zxing/bigint/*.cc
)

file(GLOB SOURCES2
  ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)

add_library(qzxing ${LIB_TYPE}
  ${SOURCES}
  ${SOURCES2}
)

target_compile_definitions(qzxing PUBLIC
  QZXING_QML
  QZXING_MULTIMEDIA
)

target_include_directories(qzxing PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/src
  ${CMAKE_CURRENT_SOURCE_DIR}/src/zxing
)

qt5_use_modules(qzxing Core Multimedia Quick)
