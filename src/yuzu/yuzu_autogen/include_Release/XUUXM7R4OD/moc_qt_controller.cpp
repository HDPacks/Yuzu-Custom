/****************************************************************************
** Meta object code from reading C++ file 'qt_controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/curti/yuzu/src/yuzu/applets/qt_controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtControllerSelectorDialog_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtControllerSelectorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtControllerSelectorDialog_t qt_meta_stringdata_QtControllerSelectorDialog = {
    {
QT_MOC_LITERAL(0, 0, 26) // "QtControllerSelectorDialog"

    },
    "QtControllerSelectorDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtControllerSelectorDialog[] = {

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

void QtControllerSelectorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QtControllerSelectorDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_QtControllerSelectorDialog.data,
    qt_meta_data_QtControllerSelectorDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtControllerSelectorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtControllerSelectorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtControllerSelectorDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QtControllerSelectorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QtControllerSelector_t {
    QByteArrayData data[6];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtControllerSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtControllerSelector_t qt_meta_stringdata_QtControllerSelector = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QtControllerSelector"
QT_MOC_LITERAL(1, 21, 32), // "MainWindowReconfigureControllers"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 36), // "Core::Frontend::ControllerPar..."
QT_MOC_LITERAL(4, 92, 10), // "parameters"
QT_MOC_LITERAL(5, 103, 21) // "MainWindowRequestExit"

    },
    "QtControllerSelector\0"
    "MainWindowReconfigureControllers\0\0"
    "Core::Frontend::ControllerParameters\0"
    "parameters\0MainWindowRequestExit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtControllerSelector[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,
       5,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void QtControllerSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtControllerSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MainWindowReconfigureControllers((*reinterpret_cast< const Core::Frontend::ControllerParameters(*)>(_a[1]))); break;
        case 1: _t->MainWindowRequestExit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QtControllerSelector::*)(const Core::Frontend::ControllerParameters & ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtControllerSelector::MainWindowReconfigureControllers)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QtControllerSelector::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtControllerSelector::MainWindowRequestExit)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtControllerSelector::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QtControllerSelector.data,
    qt_meta_data_QtControllerSelector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtControllerSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtControllerSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtControllerSelector.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Core::Frontend::ControllerApplet"))
        return static_cast< Core::Frontend::ControllerApplet*>(this);
    return QObject::qt_metacast(_clname);
}

int QtControllerSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QtControllerSelector::MainWindowReconfigureControllers(const Core::Frontend::ControllerParameters & _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< QtControllerSelector *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtControllerSelector::MainWindowRequestExit()const
{
    QMetaObject::activate(const_cast< QtControllerSelector *>(this), &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
