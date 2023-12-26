/****************************************************************************
** Meta object code from reading C++ file 'client_room.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/curti/yuzu/src/yuzu/multiplayer/client_room.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client_room.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientRoomWindow_t {
    QByteArrayData data[9];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientRoomWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientRoomWindow_t qt_meta_stringdata_ClientRoomWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ClientRoomWindow"
QT_MOC_LITERAL(1, 17, 22), // "RoomInformationChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 24), // "Network::RoomInformation"
QT_MOC_LITERAL(4, 66, 12), // "StateChanged"
QT_MOC_LITERAL(5, 79, 26), // "Network::RoomMember::State"
QT_MOC_LITERAL(6, 106, 16), // "ShowNotification"
QT_MOC_LITERAL(7, 123, 12), // "OnRoomUpdate"
QT_MOC_LITERAL(8, 136, 13) // "OnStateChange"

    },
    "ClientRoomWindow\0RoomInformationChanged\0"
    "\0Network::RoomInformation\0StateChanged\0"
    "Network::RoomMember::State\0ShowNotification\0"
    "OnRoomUpdate\0OnStateChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientRoomWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   46,    2, 0x0a /* Public */,
       8,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

       0        // eod
};

void ClientRoomWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientRoomWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RoomInformationChanged((*reinterpret_cast< const Network::RoomInformation(*)>(_a[1]))); break;
        case 1: _t->StateChanged((*reinterpret_cast< const Network::RoomMember::State(*)>(_a[1]))); break;
        case 2: _t->ShowNotification(); break;
        case 3: _t->OnRoomUpdate((*reinterpret_cast< const Network::RoomInformation(*)>(_a[1]))); break;
        case 4: _t->OnStateChange((*reinterpret_cast< const Network::RoomMember::State(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Network::RoomInformation >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Network::RoomMember::State >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Network::RoomInformation >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Network::RoomMember::State >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientRoomWindow::*)(const Network::RoomInformation & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientRoomWindow::RoomInformationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientRoomWindow::*)(const Network::RoomMember::State & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientRoomWindow::StateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientRoomWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClientRoomWindow::ShowNotification)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClientRoomWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ClientRoomWindow.data,
    qt_meta_data_ClientRoomWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClientRoomWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientRoomWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientRoomWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ClientRoomWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ClientRoomWindow::RoomInformationChanged(const Network::RoomInformation & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientRoomWindow::StateChanged(const Network::RoomMember::State & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClientRoomWindow::ShowNotification()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
