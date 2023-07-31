#ifndef DBUSINTERFACE_H
#define DBUSINTERFACE_H

#include <QObject>
#include <QDBusInterface>
#include <QDBusConnection>
#include <QDBusMessage>
#include <QDBusReply>
#include <QDebug>
#include <QRandomGenerator>
#include <QTimer>

class DBusInterface : public QObject
{
    Q_OBJECT

public:
    explicit DBusInterface(QObject *parent = nullptr);

    Q_PROPERTY(double speed READ getSpeed NOTIFY speedChanged);

    Q_INVOKABLE void setSpeed(double speed);

    double getSpeed();
    void print() const;

Q_SIGNALS:
    void speedChanged(double speed);

public slots:
    void updateSpeed(double speed);

private:
    QDBusInterface* m_interface;
    double m_speed;
};

#endif // DBUSINTERFACE_H
