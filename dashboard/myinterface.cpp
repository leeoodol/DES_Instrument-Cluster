#include "myinterface.h"

MyInterface::MyInterface(QObject *parent) :
    QObject(parent),
    m_bus(QDBusConnection::sessionBus()),
    m_speed(0.0),
    m_fuel(0.0),
    m_dis(0.0)
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

void MyInterface::setDis(qreal dis)
{
    // Add any additional logic you may need here.
    // For this example, we'll emit a signal to notify the speed change.
    if (m_dis == dis)
        return;

    m_dis = dis;
    emit disChanged(dis);
}

void MyInterface::fetchSpeed()
{
    // call the method and get the reply
    QDBusMessage reply = m_interface->call("get_rpm");
    QDBusMessage reply2 = m_interface->call("get_fuel");
    QDBusMessage reply3 = m_interface->call("get_dis");

    // check if the call was successful
    if(reply.type() == QDBusMessage::ErrorMessage) {
        qDebug() << "Error: " << qPrintable(reply.errorMessage());
        exit(1);
    }

    // get the return value
    QString message = reply.arguments().at(0).toString();
    QString message2 = reply2.arguments().at(0).toString();
    QString message3 = reply3.arguments().at(0).toString();
    qreal newSpeed = message.toDouble();
    qreal newFuel = message2.toDouble();
    qreal newDis = message3.toDouble();
    qDebug() << "speed: " << newSpeed;
    qDebug() << "rpm: " << newSpeed/35;
    setSpeed(newSpeed);
    qDebug() << "fuel: " << newFuel;
    qDebug() << "Distance: " << newDis;
    setFuel(newFuel);
    setDis(newDis);
}

qreal MyInterface::getSpeed() const
{
    return m_speed;
}

qreal MyInterface::getFuel() const
{
    return m_fuel;
}

qreal MyInterface::getDis() const
{
    return m_dis;
}
