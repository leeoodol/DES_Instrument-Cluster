TEMPLATE = app
TARGET = dashboard
INCLUDEPATH += .
QT += quick dbus

SOURCES += \
    dbusinterface.cpp \
    main.cpp \
    myinterface.cpp

RESOURCES += \
    dashboard.qrc

OTHER_FILES += \
    qml/dashboard.qml \
    qml/DashboardGaugeStyle.qml \
    qml/IconGaugeStyle.qml \
    qml/TachometerStyle.qml \
    qml/TurnIndicator.qml \
    qml/ValueSource.qml

target.path = $$[QT_INSTALL_EXAMPLES]/quickcontrols/extras/dashboard
INSTALLS += target

HEADERS += \
    dbusinterface.h \
    myinterface.h
