/****************************************************************************
** Meta object code from reading C++ file 'configure_touch_from_button.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/curti/yuzu/src/yuzu/configuration/configure_touch_from_button.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configure_touch_from_button.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConfigureTouchFromButton_t {
    QByteArrayData data[26];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConfigureTouchFromButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConfigureTouchFromButton_t qt_meta_stringdata_ConfigureTouchFromButton = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ConfigureTouchFromButton"
QT_MOC_LITERAL(1, 25, 18), // "ApplyConfiguration"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 10), // "NewBinding"
QT_MOC_LITERAL(4, 56, 3), // "pos"
QT_MOC_LITERAL(5, 60, 16), // "SetActiveBinding"
QT_MOC_LITERAL(6, 77, 6), // "dot_id"
QT_MOC_LITERAL(7, 84, 14), // "SetCoordinates"
QT_MOC_LITERAL(8, 99, 10), // "NewMapping"
QT_MOC_LITERAL(9, 110, 13), // "DeleteMapping"
QT_MOC_LITERAL(10, 124, 13), // "RenameMapping"
QT_MOC_LITERAL(11, 138, 11), // "EditBinding"
QT_MOC_LITERAL(12, 150, 11), // "QModelIndex"
QT_MOC_LITERAL(13, 162, 2), // "qi"
QT_MOC_LITERAL(14, 165, 13), // "DeleteBinding"
QT_MOC_LITERAL(15, 179, 18), // "OnBindingSelection"
QT_MOC_LITERAL(16, 198, 14), // "QItemSelection"
QT_MOC_LITERAL(17, 213, 8), // "selected"
QT_MOC_LITERAL(18, 222, 10), // "deselected"
QT_MOC_LITERAL(19, 233, 16), // "OnBindingChanged"
QT_MOC_LITERAL(20, 250, 14), // "QStandardItem*"
QT_MOC_LITERAL(21, 265, 4), // "item"
QT_MOC_LITERAL(22, 270, 16), // "OnBindingDeleted"
QT_MOC_LITERAL(23, 287, 6), // "parent"
QT_MOC_LITERAL(24, 294, 5), // "first"
QT_MOC_LITERAL(25, 300, 4) // "last"

    },
    "ConfigureTouchFromButton\0ApplyConfiguration\0"
    "\0NewBinding\0pos\0SetActiveBinding\0"
    "dot_id\0SetCoordinates\0NewMapping\0"
    "DeleteMapping\0RenameMapping\0EditBinding\0"
    "QModelIndex\0qi\0DeleteBinding\0"
    "OnBindingSelection\0QItemSelection\0"
    "selected\0deselected\0OnBindingChanged\0"
    "QStandardItem*\0item\0OnBindingDeleted\0"
    "parent\0first\0last"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConfigureTouchFromButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    1,   75,    2, 0x0a /* Public */,
       5,    1,   78,    2, 0x0a /* Public */,
       7,    2,   81,    2, 0x0a /* Public */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    1,   89,    2, 0x08 /* Private */,
      14,    0,   92,    2, 0x08 /* Private */,
      15,    2,   93,    2, 0x08 /* Private */,
      19,    1,   98,    2, 0x08 /* Private */,
      22,    3,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QPoint,    6,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16,   17,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int, QMetaType::Int,   23,   24,   25,

       0        // eod
};

void ConfigureTouchFromButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConfigureTouchFromButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ApplyConfiguration(); break;
        case 1: _t->NewBinding((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->SetActiveBinding((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SetCoordinates((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 4: _t->NewMapping(); break;
        case 5: _t->DeleteMapping(); break;
        case 6: _t->RenameMapping(); break;
        case 7: _t->EditBinding((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->DeleteBinding(); break;
        case 9: _t->OnBindingSelection((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 10: _t->OnBindingChanged((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 11: _t->OnBindingDeleted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ConfigureTouchFromButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ConfigureTouchFromButton.data,
    qt_meta_data_ConfigureTouchFromButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConfigureTouchFromButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfigureTouchFromButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigureTouchFromButton.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ConfigureTouchFromButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
