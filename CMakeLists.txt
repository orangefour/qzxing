find_package(Qt5 COMPONENTS Core Multimedia Quick REQUIRED)

file(GLOB_RECURSE SOURCES
  ${CMAKE_CURRENT_SOURCE_DIR}/src/zxing/zxing/*.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/src/zxing/bigint/*.cc
)

file(GLOB SOURCES2
  ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)

add_library(qzxing
  ${SOURCES}
  ${SOURCES2}
)

target_compile_definitions(qzxing PUBLIC
  QZXING_QML
  QZXING_MULTIMEDIA
  QZXING_LIBRARY
  DISABLE_LIBRARY_FEATURES
  ZXING_ICONV_CONST
  NO_ICONV
  ENABLE_DECODER_QR_CODE
  ENABLE_ENCODER_QR_CODE
  ENABLE_ENCODER_GENERIC
)

target_include_directories(qzxing PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/src
  ${CMAKE_CURRENT_SOURCE_DIR}/src/zxing
)

target_link_libraries(qzxing Qt::Core Qt::Multimedia Qt::Quick)
