#include "dbusinterface.h"

DBusInterface::DBusInterface(QObject *parent) :
    QObject(parent),
    m_speed(100)
{
    m_interface = new QDBusInterface("com.example.dbusService",
                                     "/com/example/dbusService",
                                     "com.example.dbusService",
                                     QDBusConnection::sessionBus(),
                                     this);
    if (m_interface->isValid()) {
        // Connect the DBus signal to our slot
        QDBusConnection::sessionBus().connect("com.example.dbusService",
                                              "/com/example/dbusService",
                                              "com.example.dbusService",
                                              "SpeedChanged",
                                              this,
                                              SLOT(updateSpeed(double)));
    }

}

void DBusInterface::print() const {
    QDBusMessage recv = m_interface->call("hello", "Raspberrypi");
    qDebug() << recv;
}

double DBusInterface::getSpeed() {
    int min = 1;
    int max = 100;
    m_speed = QRandomGenerator::global()->bounded(min, max + 1);
//    updateSpeed(newSpeed);
    qDebug() << m_speed;
    return m_speed;
}

void DBusInterface::setSpeed(double speed) {
    updateSpeed(speed);
}

void DBusInterface::updateSpeed(double speed) {
    if (m_speed != speed) {
        m_speed = speed;
        emit speedChanged(m_speed);
    }
}
