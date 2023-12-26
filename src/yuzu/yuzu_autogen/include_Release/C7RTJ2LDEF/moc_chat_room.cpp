/****************************************************************************
** Meta object code from reading C++ file 'chat_room.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/curti/yuzu/src/yuzu/multiplayer/chat_room.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chat_room.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatRoom_t {
    QByteArrayData data[18];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatRoom_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatRoom_t qt_meta_stringdata_ChatRoom = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ChatRoom"
QT_MOC_LITERAL(1, 9, 12), // "ChatReceived"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 18), // "Network::ChatEntry"
QT_MOC_LITERAL(4, 42, 21), // "StatusMessageReceived"
QT_MOC_LITERAL(5, 64, 27), // "Network::StatusMessageEntry"
QT_MOC_LITERAL(6, 92, 10), // "UserPinged"
QT_MOC_LITERAL(7, 103, 12), // "OnRoomUpdate"
QT_MOC_LITERAL(8, 116, 24), // "Network::RoomInformation"
QT_MOC_LITERAL(9, 141, 4), // "info"
QT_MOC_LITERAL(10, 146, 13), // "OnChatReceive"
QT_MOC_LITERAL(11, 160, 22), // "OnStatusMessageReceive"
QT_MOC_LITERAL(12, 183, 10), // "OnSendChat"
QT_MOC_LITERAL(13, 194, 17), // "OnChatTextChanged"
QT_MOC_LITERAL(14, 212, 16), // "PopupContextMenu"
QT_MOC_LITERAL(15, 229, 13), // "menu_location"
QT_MOC_LITERAL(16, 243, 7), // "Disable"
QT_MOC_LITERAL(17, 251, 6) // "Enable"

    },
    "ChatRoom\0ChatReceived\0\0Network::ChatEntry\0"
    "StatusMessageReceived\0Network::StatusMessageEntry\0"
    "UserPinged\0OnRoomUpdate\0"
    "Network::RoomInformation\0info\0"
    "OnChatReceive\0OnStatusMessageReceive\0"
    "OnSendChat\0OnChatTextChanged\0"
    "PopupContextMenu\0menu_location\0Disable\0"
    "Enable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatRoom[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       6,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   76,    2, 0x0a /* Public */,
      10,    1,   79,    2, 0x0a /* Public */,
      11,    1,   82,    2, 0x0a /* Public */,
      12,    0,   85,    2, 0x0a /* Public */,
      13,    0,   86,    2, 0x0a /* Public */,
      14,    1,   87,    2, 0x0a /* Public */,
      16,    0,   90,    2, 0x0a /* Public */,
      17,    0,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ChatRoom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatRoom *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ChatReceived((*reinterpret_cast< const Network::ChatEntry(*)>(_a[1]))); break;
        case 1: _t->StatusMessageReceived((*reinterpret_cast< const Network::StatusMessageEntry(*)>(_a[1]))); break;
        case 2: _t->UserPinged(); break;
        case 3: _t->OnRoomUpdate((*reinterpret_cast< const Network::RoomInformation(*)>(_a[1]))); break;
        case 4: _t->OnChatReceive((*reinterpret_cast< const Network::ChatEntry(*)>(_a[1]))); break;
        case 5: _t->OnStatusMessageReceive((*reinterpret_cast< const Network::StatusMessageEntry(*)>(_a[1]))); break;
        case 6: _t->OnSendChat(); break;
        case 7: _t->OnChatTextChanged(); break;
        case 8: _t->PopupContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 9: _t->Disable(); break;
        case 10: _t->Enable(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Network::ChatEntry >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Network::StatusMessageEntry >(); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Network::ChatEntry >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Network::StatusMessageEntry >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChatRoom::*)(const Network::ChatEntry & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoom::ChatReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChatRoom::*)(const Network::StatusMessageEntry & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoom::StatusMessageReceived)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChatRoom::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChatRoom::UserPinged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChatRoom::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ChatRoom.data,
    qt_meta_data_ChatRoom,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChatRoom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatRoom::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatRoom.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ChatRoom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ChatRoom::ChatReceived(const Network::ChatEntry & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChatRoom::StatusMessageReceived(const Network::StatusMessageEntry & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChatRoom::UserPinged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
