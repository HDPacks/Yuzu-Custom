/****************************************************************************
** Meta object code from reading C++ file 'state.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/curti/yuzu/src/yuzu/multiplayer/state.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'state.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MultiplayerState_t {
    QByteArrayData data[23];
    char stringdata0[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MultiplayerState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MultiplayerState_t qt_meta_stringdata_MultiplayerState = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MultiplayerState"
QT_MOC_LITERAL(1, 17, 19), // "NetworkStateChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 26), // "Network::RoomMember::State"
QT_MOC_LITERAL(4, 65, 12), // "NetworkError"
QT_MOC_LITERAL(5, 78, 26), // "Network::RoomMember::Error"
QT_MOC_LITERAL(6, 105, 14), // "AnnounceFailed"
QT_MOC_LITERAL(7, 120, 21), // "WebService::WebResult"
QT_MOC_LITERAL(8, 142, 10), // "SaveConfig"
QT_MOC_LITERAL(9, 153, 21), // "OnNetworkStateChanged"
QT_MOC_LITERAL(10, 175, 5), // "state"
QT_MOC_LITERAL(11, 181, 14), // "OnNetworkError"
QT_MOC_LITERAL(12, 196, 5), // "error"
QT_MOC_LITERAL(13, 202, 11), // "OnViewLobby"
QT_MOC_LITERAL(14, 214, 12), // "OnCreateRoom"
QT_MOC_LITERAL(15, 227, 11), // "OnCloseRoom"
QT_MOC_LITERAL(16, 239, 17), // "OnOpenNetworkRoom"
QT_MOC_LITERAL(17, 257, 21), // "OnDirectConnectToRoom"
QT_MOC_LITERAL(18, 279, 16), // "OnAnnounceFailed"
QT_MOC_LITERAL(19, 296, 12), // "OnSaveConfig"
QT_MOC_LITERAL(20, 309, 17), // "UpdateThemedIcons"
QT_MOC_LITERAL(21, 327, 16), // "ShowNotification"
QT_MOC_LITERAL(22, 344, 16) // "HideNotification"

    },
    "MultiplayerState\0NetworkStateChanged\0"
    "\0Network::RoomMember::State\0NetworkError\0"
    "Network::RoomMember::Error\0AnnounceFailed\0"
    "WebService::WebResult\0SaveConfig\0"
    "OnNetworkStateChanged\0state\0OnNetworkError\0"
    "error\0OnViewLobby\0OnCreateRoom\0"
    "OnCloseRoom\0OnOpenNetworkRoom\0"
    "OnDirectConnectToRoom\0OnAnnounceFailed\0"
    "OnSaveConfig\0UpdateThemedIcons\0"
    "ShowNotification\0HideNotification"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MultiplayerState[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    1,   97,    2, 0x06 /* Public */,
       6,    1,  100,    2, 0x06 /* Public */,
       8,    0,  103,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  104,    2, 0x0a /* Public */,
      11,    1,  107,    2, 0x0a /* Public */,
      13,    0,  110,    2, 0x0a /* Public */,
      14,    0,  111,    2, 0x0a /* Public */,
      15,    0,  112,    2, 0x0a /* Public */,
      16,    0,  113,    2, 0x0a /* Public */,
      17,    0,  114,    2, 0x0a /* Public */,
      18,    1,  115,    2, 0x0a /* Public */,
      19,    0,  118,    2, 0x0a /* Public */,
      20,    0,  119,    2, 0x0a /* Public */,
      21,    0,  120,    2, 0x0a /* Public */,
      22,    0,  121,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,   10,
    QMetaType::Void, 0x80000000 | 5,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MultiplayerState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MultiplayerState *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NetworkStateChanged((*reinterpret_cast< const Network::RoomMember::State(*)>(_a[1]))); break;
        case 1: _t->NetworkError((*reinterpret_cast< const Network::RoomMember::Error(*)>(_a[1]))); break;
        case 2: _t->AnnounceFailed((*reinterpret_cast< const WebService::WebResult(*)>(_a[1]))); break;
        case 3: _t->SaveConfig(); break;
        case 4: _t->OnNetworkStateChanged((*reinterpret_cast< const Network::RoomMember::State(*)>(_a[1]))); break;
        case 5: _t->OnNetworkError((*reinterpret_cast< const Network::RoomMember::Error(*)>(_a[1]))); break;
        case 6: _t->OnViewLobby(); break;
        case 7: _t->OnCreateRoom(); break;
        case 8: { bool _r = _t->OnCloseRoom();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->OnOpenNetworkRoom(); break;
        case 10: _t->OnDirectConnectToRoom(); break;
        case 11: _t->OnAnnounceFailed((*reinterpret_cast< const WebService::WebResult(*)>(_a[1]))); break;
        case 12: _t->OnSaveConfig(); break;
        case 13: _t->UpdateThemedIcons(); break;
        case 14: _t->ShowNotification(); break;
        case 15: _t->HideNotification(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WebService::WebResult >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WebService::WebResult >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MultiplayerState::*)(const Network::RoomMember::State & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiplayerState::NetworkStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MultiplayerState::*)(const Network::RoomMember::Error & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiplayerState::NetworkError)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MultiplayerState::*)(const WebService::WebResult & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiplayerState::AnnounceFailed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MultiplayerState::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MultiplayerState::SaveConfig)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MultiplayerState::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MultiplayerState.data,
    qt_meta_data_MultiplayerState,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MultiplayerState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultiplayerState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MultiplayerState.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MultiplayerState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void MultiplayerState::NetworkStateChanged(const Network::RoomMember::State & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MultiplayerState::NetworkError(const Network::RoomMember::Error & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MultiplayerState::AnnounceFailed(const WebService::WebResult & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MultiplayerState::SaveConfig()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
