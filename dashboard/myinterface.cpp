#include "myinterface.h"

MyInterface::MyInterface(QObject *parent) :
    QObject(parent),
    m_bus(QDBusConnection::sessionBus()),
    m_speed(0.0),
    m_fuel(0.0)
{
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MyInterface::fetchSpeed);
    timer->start(100);  // increase speed every second

    m_interface = new QDBusInterface(DBUSNAME, DBUSPATH, DBUSNAME, m_bus);

    if(!m_interface->isValid()){
        qDebug() << "Interface not valid: " << qPrintable(m_interface->lastError().message());
        exit(1);
    }
}

void MyInterface::setSpeed(qreal speed)
{
    // Add any additional logic you may need here.
    // For this example, we'll emit a signal to notify the speed change.
    if (m_speed == speed)
        return;

    m_speed = speed;
    emit speedChanged(speed);
}

void MyInterface::setFuel(qreal fuel)
{
    // Add any additional logic you may need here.
    // For this example, we'll emit a signal to notify the speed change.
    if (m_fuel == fuel)
        return;

    m_fuel = fuel;
    emit fuelChanged(fuel);
}

void MyInterface::fetchSpeed()
{
    // call the method and get the reply
    QDBusMessage reply = m_interface->call("get_rpm");
    QDBusMessage reply2 = m_interface->call("get_fuel");

    // check if the call was successful
    if(reply.type() == QDBusMessage::ErrorMessage) {
        qDebug() << "Error: " << qPrintable(reply.errorMessage());
        exit(1);
    }

    // get the return value
    QString message = reply.arguments().at(0).toString();
    QString message2 = reply2.arguments().at(0).toString();
    qreal newSpeed = message.toDouble();
    qreal newFuel = message2.toDouble();
    qDebug() << "speed: " << newSpeed;
    setSpeed(newSpeed);
    qDebug() << "fuel: " << newFuel;
    setFuel(newFuel);
//    if (m_speed >= 200)
//        setSpeed(10);
//    else
//        setSpeed(m_speed + 10);
}

qreal MyInterface::getSpeed() const
{
    return m_speed;
}

qreal MyInterface::getFuel() const
{
    return m_fuel;
}
