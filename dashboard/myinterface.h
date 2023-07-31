#ifndef MYINTERFACE_H
#define MYINTERFACE_H

#include <QObject>
#include <QRandomGenerator>
#include <QTimer>
#include <QDebug>

class MyInterface : public QObject
{
    Q_OBJECT

public:
    explicit MyInterface(QObject *parent = nullptr);

    Q_PROPERTY(double speed READ getSpeed WRITE setSpeed NOTIFY speedChanged);

    double getSpeed();

public slots:
    void setSpeed(qreal speed);
    void increaseSpeed();

signals:
    void speedChanged(qreal speed);

private:
    qreal m_speed;
};

#endif // MYINTERFACE_H
