/****************************************************************************
** Meta object code from reading C++ file 'lobby.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/curti/yuzu/src/yuzu/multiplayer/lobby.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lobby.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Lobby_t {
    QByteArrayData data[10];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Lobby_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Lobby_t qt_meta_stringdata_Lobby = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Lobby"
QT_MOC_LITERAL(1, 6, 12), // "StateChanged"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 26), // "Network::RoomMember::State"
QT_MOC_LITERAL(4, 47, 10), // "SaveConfig"
QT_MOC_LITERAL(5, 58, 12), // "RefreshLobby"
QT_MOC_LITERAL(6, 71, 14), // "OnRefreshLobby"
QT_MOC_LITERAL(7, 86, 12), // "OnExpandRoom"
QT_MOC_LITERAL(8, 99, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 111, 10) // "OnJoinRoom"

    },
    "Lobby\0StateChanged\0\0Network::RoomMember::State\0"
    "SaveConfig\0RefreshLobby\0OnRefreshLobby\0"
    "OnExpandRoom\0QModelIndex\0OnJoinRoom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Lobby[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   48,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       9,    1,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

void Lobby::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Lobby *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StateChanged((*reinterpret_cast< const Network::RoomMember::State(*)>(_a[1]))); break;
        case 1: _t->SaveConfig(); break;
        case 2: _t->RefreshLobby(); break;
        case 3: _t->OnRefreshLobby(); break;
        case 4: _t->OnExpandRoom((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->OnJoinRoom((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Lobby::*)(const Network::RoomMember::State & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Lobby::StateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Lobby::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Lobby::SaveConfig)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Lobby::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Lobby.data,
    qt_meta_data_Lobby,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Lobby::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Lobby::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Lobby.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Lobby::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Lobby::StateChanged(const Network::RoomMember::State & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Lobby::SaveConfig()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_LobbyFilterProxyModel_t {
    QByteArrayData data[6];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LobbyFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LobbyFilterProxyModel_t qt_meta_stringdata_LobbyFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "LobbyFilterProxyModel"
QT_MOC_LITERAL(1, 22, 14), // "SetFilterOwned"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "SetFilterEmpty"
QT_MOC_LITERAL(4, 53, 13), // "SetFilterFull"
QT_MOC_LITERAL(5, 67, 15) // "SetFilterSearch"

    },
    "LobbyFilterProxyModel\0SetFilterOwned\0"
    "\0SetFilterEmpty\0SetFilterFull\0"
    "SetFilterSearch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LobbyFilterProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       3,    1,   37,    2, 0x0a /* Public */,
       4,    1,   40,    2, 0x0a /* Public */,
       5,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void LobbyFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LobbyFilterProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetFilterOwned((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->SetFilterEmpty((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->SetFilterFull((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->SetFilterSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LobbyFilterProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_LobbyFilterProxyModel.data,
    qt_meta_data_LobbyFilterProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LobbyFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LobbyFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LobbyFilterProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int LobbyFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
