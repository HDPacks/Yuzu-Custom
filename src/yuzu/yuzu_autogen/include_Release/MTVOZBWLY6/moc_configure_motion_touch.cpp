/****************************************************************************
** Meta object code from reading C++ file 'configure_motion_touch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/curti/yuzu/src/yuzu/configuration/configure_motion_touch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configure_motion_touch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CalibrationConfigurationDialog_t {
    QByteArrayData data[5];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalibrationConfigurationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalibrationConfigurationDialog_t qt_meta_stringdata_CalibrationConfigurationDialog = {
    {
QT_MOC_LITERAL(0, 0, 30), // "CalibrationConfigurationDialog"
QT_MOC_LITERAL(1, 31, 15), // "UpdateLabelText"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 4), // "text"
QT_MOC_LITERAL(4, 53, 16) // "UpdateButtonText"

    },
    "CalibrationConfigurationDialog\0"
    "UpdateLabelText\0\0text\0UpdateButtonText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalibrationConfigurationDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x00 /* Private */,
       4,    1,   27,    2, 0x00 /* Private */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void CalibrationConfigurationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CalibrationConfigurationDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UpdateLabelText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->UpdateButtonText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CalibrationConfigurationDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CalibrationConfigurationDialog.data,
    qt_meta_data_CalibrationConfigurationDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CalibrationConfigurationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalibrationConfigurationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CalibrationConfigurationDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CalibrationConfigurationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ConfigureMotionTouch_t {
    QByteArrayData data[10];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConfigureMotionTouch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConfigureMotionTouch_t qt_meta_stringdata_ConfigureMotionTouch = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ConfigureMotionTouch"
QT_MOC_LITERAL(1, 21, 18), // "ApplyConfiguration"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 14), // "OnUDPAddServer"
QT_MOC_LITERAL(4, 56, 17), // "OnUDPDeleteServer"
QT_MOC_LITERAL(5, 74, 17), // "OnCemuhookUDPTest"
QT_MOC_LITERAL(6, 92, 27), // "OnConfigureTouchCalibration"
QT_MOC_LITERAL(7, 120, 26), // "OnConfigureTouchFromButton"
QT_MOC_LITERAL(8, 147, 17), // "ShowUDPTestResult"
QT_MOC_LITERAL(9, 165, 6) // "result"

    },
    "ConfigureMotionTouch\0ApplyConfiguration\0"
    "\0OnUDPAddServer\0OnUDPDeleteServer\0"
    "OnCemuhookUDPTest\0OnConfigureTouchCalibration\0"
    "OnConfigureTouchFromButton\0ShowUDPTestResult\0"
    "result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConfigureMotionTouch[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       8,    1,   55,    2, 0x00 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    9,

       0        // eod
};

void ConfigureMotionTouch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConfigureMotionTouch *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ApplyConfiguration(); break;
        case 1: _t->OnUDPAddServer(); break;
        case 2: _t->OnUDPDeleteServer(); break;
        case 3: _t->OnCemuhookUDPTest(); break;
        case 4: _t->OnConfigureTouchCalibration(); break;
        case 5: _t->OnConfigureTouchFromButton(); break;
        case 6: _t->ShowUDPTestResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ConfigureMotionTouch::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ConfigureMotionTouch.data,
    qt_meta_data_ConfigureMotionTouch,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConfigureMotionTouch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfigureMotionTouch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigureMotionTouch.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ConfigureMotionTouch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
