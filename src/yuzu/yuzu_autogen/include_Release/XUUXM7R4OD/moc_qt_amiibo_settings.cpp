/****************************************************************************
** Meta object code from reading C++ file 'qt_amiibo_settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/curti/yuzu/src/yuzu/applets/qt_amiibo_settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_amiibo_settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtAmiiboSettingsDialog_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtAmiiboSettingsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtAmiiboSettingsDialog_t qt_meta_stringdata_QtAmiiboSettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 22) // "QtAmiiboSettingsDialog"

    },
    "QtAmiiboSettingsDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAmiiboSettingsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QtAmiiboSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QtAmiiboSettingsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_QtAmiiboSettingsDialog.data,
    qt_meta_data_QtAmiiboSettingsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtAmiiboSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAmiiboSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtAmiiboSettingsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QtAmiiboSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QtAmiiboSettings_t {
    QByteArrayData data[8];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtAmiiboSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtAmiiboSettings_t qt_meta_stringdata_QtAmiiboSettings = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QtAmiiboSettings"
QT_MOC_LITERAL(1, 17, 28), // "MainWindowShowAmiiboSettings"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 33), // "Core::Frontend::CabinetParame..."
QT_MOC_LITERAL(4, 81, 10), // "parameters"
QT_MOC_LITERAL(5, 92, 40), // "std::shared_ptr<Service::NFC:..."
QT_MOC_LITERAL(6, 133, 10), // "nfp_device"
QT_MOC_LITERAL(7, 144, 21) // "MainWindowRequestExit"

    },
    "QtAmiiboSettings\0MainWindowShowAmiiboSettings\0"
    "\0Core::Frontend::CabinetParameters\0"
    "parameters\0std::shared_ptr<Service::NFC::NfcDevice>\0"
    "nfp_device\0MainWindowRequestExit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAmiiboSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       7,    0,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,

       0        // eod
};

void QtAmiiboSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtAmiiboSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MainWindowShowAmiiboSettings((*reinterpret_cast< const Core::Frontend::CabinetParameters(*)>(_a[1])),(*reinterpret_cast< std::shared_ptr<Service::NFC::NfcDevice>(*)>(_a[2]))); break;
        case 1: _t->MainWindowRequestExit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QtAmiiboSettings::*)(const Core::Frontend::CabinetParameters & , std::shared_ptr<Service::NFC::NfcDevice> ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtAmiiboSettings::MainWindowShowAmiiboSettings)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QtAmiiboSettings::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtAmiiboSettings::MainWindowRequestExit)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtAmiiboSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QtAmiiboSettings.data,
    qt_meta_data_QtAmiiboSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtAmiiboSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAmiiboSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtAmiiboSettings.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Core::Frontend::CabinetApplet"))
        return static_cast< Core::Frontend::CabinetApplet*>(this);
    return QObject::qt_metacast(_clname);
}

int QtAmiiboSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QtAmiiboSettings::MainWindowShowAmiiboSettings(const Core::Frontend::CabinetParameters & _t1, std::shared_ptr<Service::NFC::NfcDevice> _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< QtAmiiboSettings *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtAmiiboSettings::MainWindowRequestExit()const
{
    QMetaObject::activate(const_cast< QtAmiiboSettings *>(this), &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
