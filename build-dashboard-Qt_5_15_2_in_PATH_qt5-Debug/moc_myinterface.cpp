/****************************************************************************
** Meta object code from reading C++ file 'myinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../dashboard/myinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyInterface_t {
    QByteArrayData data[12];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyInterface_t qt_meta_stringdata_MyInterface = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MyInterface"
QT_MOC_LITERAL(1, 12, 12), // "speedChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "speed"
QT_MOC_LITERAL(4, 32, 11), // "fuelChanged"
QT_MOC_LITERAL(5, 44, 4), // "fuel"
QT_MOC_LITERAL(6, 49, 10), // "disChanged"
QT_MOC_LITERAL(7, 60, 3), // "dis"
QT_MOC_LITERAL(8, 64, 8), // "setSpeed"
QT_MOC_LITERAL(9, 73, 7), // "setFuel"
QT_MOC_LITERAL(10, 81, 6), // "setDis"
QT_MOC_LITERAL(11, 88, 10) // "fetchSpeed"

    },
    "MyInterface\0speedChanged\0\0speed\0"
    "fuelChanged\0fuel\0disChanged\0dis\0"
    "setSpeed\0setFuel\0setDis\0fetchSpeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   58,    2, 0x0a /* Public */,
       9,    1,   61,    2, 0x0a /* Public */,
      10,    1,   64,    2, 0x0a /* Public */,
      11,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QReal,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Double, 0x00495103,
       5, QMetaType::Double, 0x00495103,
       7, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void MyInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->speedChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->fuelChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->disChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->setSpeed((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->setFuel((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->setDis((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->fetchSpeed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyInterface::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyInterface::speedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyInterface::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyInterface::fuelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MyInterface::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyInterface::disChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MyInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getSpeed(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getFuel(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->getDis(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MyInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpeed(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setFuel(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setDis(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MyInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MyInterface.data,
    qt_meta_data_MyInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MyInterface::speedChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyInterface::fuelChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyInterface::disChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
