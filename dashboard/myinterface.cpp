#include "MyInterface.h"

MyInterface::MyInterface(QObject *parent) : QObject(parent), m_speed(0.0) {
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MyInterface::increaseSpeed);
    timer->start(1000);  // increase speed every second
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

void MyInterface::increaseSpeed()
{
    if (m_speed >= 200)
        setSpeed(10);
    else
        setSpeed(m_speed + 10);
}

qreal MyInterface::getSpeed()
{
    return m_speed;
}
