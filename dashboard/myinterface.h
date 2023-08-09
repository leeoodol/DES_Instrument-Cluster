#ifndef MYINTERFACE_H
#define MYINTERFACE_H

#include <QObject>
#include <QDBusInterface>
#include <QDBusConnection>
#include <QDBusMessage>
#include <QDBusReply>
#include <QRandomGenerator>
#include <QTimer>
#include <QDebug>

#define DBUSNAME "com.example.dbusService"
#define DBUSPATH "/com/example/dbusService"

class MyInterface : public QObject
{
    Q_OBJECT

public:
    explicit MyInterface(QObject *parent = nullptr);

    Q_PROPERTY(double speed READ getSpeed WRITE setSpeed NOTIFY speedChanged);
    Q_PROPERTY(double fuel READ getFuel WRITE setFuel NOTIFY fuelChanged);

    double getSpeed() const;
    double getFuel() const;

public slots:
    void setSpeed(qreal speed);
    void setFuel(qreal fuel);
    void fetchSpeed();

signals:
    void speedChanged(qreal speed);
    void fuelChanged(qreal fuel);

private:
    QDBusConnection m_bus;
    QDBusInterface* m_interface;
    qreal m_speed;
    qreal m_fuel;
};

#endif // MYINTERFACE_H
