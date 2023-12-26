/****************************************************************************
** Meta object code from reading C++ file 'configure_input_player.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/curti/yuzu/src/yuzu/configuration/configure_input_player.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configure_input_player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConfigureInputPlayer_t {
    QByteArrayData data[10];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConfigureInputPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConfigureInputPlayer_t qt_meta_stringdata_ConfigureInputPlayer = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ConfigureInputPlayer"
QT_MOC_LITERAL(1, 21, 9), // "Connected"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "connected"
QT_MOC_LITERAL(4, 42, 20), // "HandheldStateChanged"
QT_MOC_LITERAL(5, 63, 11), // "is_handheld"
QT_MOC_LITERAL(6, 75, 19), // "RefreshInputDevices"
QT_MOC_LITERAL(7, 95, 20), // "RefreshInputProfiles"
QT_MOC_LITERAL(8, 116, 11), // "std::size_t"
QT_MOC_LITERAL(9, 128, 12) // "player_index"

    },
    "ConfigureInputPlayer\0Connected\0\0"
    "connected\0HandheldStateChanged\0"
    "is_handheld\0RefreshInputDevices\0"
    "RefreshInputProfiles\0std::size_t\0"
    "player_index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConfigureInputPlayer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    0,   40,    2, 0x06 /* Public */,
       7,    1,   41,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void ConfigureInputPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConfigureInputPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Connected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->HandheldStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->RefreshInputDevices(); break;
        case 3: _t->RefreshInputProfiles((*reinterpret_cast< std::size_t(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConfigureInputPlayer::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigureInputPlayer::Connected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConfigureInputPlayer::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigureInputPlayer::HandheldStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ConfigureInputPlayer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigureInputPlayer::RefreshInputDevices)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ConfigureInputPlayer::*)(std::size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigureInputPlayer::RefreshInputProfiles)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ConfigureInputPlayer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ConfigureInputPlayer.data,
    qt_meta_data_ConfigureInputPlayer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConfigureInputPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfigureInputPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigureInputPlayer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ConfigureInputPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ConfigureInputPlayer::Connected(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConfigureInputPlayer::HandheldStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ConfigureInputPlayer::RefreshInputDevices()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ConfigureInputPlayer::RefreshInputProfiles(std::size_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
