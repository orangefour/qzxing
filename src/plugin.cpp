#include "plugin.h"
#include "QZXing.h"

#ifdef QZXING_MULTIMEDIA
  #include "QZXingFilter.h"
#endif //QZXING_MULTIMEDIA

#include <QQmlEngine>

void QZXingPlugin::registerTypes(const char* uri) {
  qmlRegisterType<QZXing>(uri, 2, 3, "QZXing");

#ifdef QZXING_MULTIMEDIA
  qmlRegisterType<QZXingFilter>(uri, 2, 3, "QZXingFilter");
#endif //QZXING_MULTIMEDIA
}
