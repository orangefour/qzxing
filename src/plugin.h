#pragma once

#ifdef NO_QRC
#include <QQmlExtensionPlugin>
class QZXingPlugin : public QQmlExtensionPlugin {
  Q_OBJECT
  Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")
#else
class QZXingPlugin {
#endif

public:
  virtual void registerTypes(const char* uri);
};
