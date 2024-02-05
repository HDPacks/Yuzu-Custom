/****************************************************************************
** Meta object code from reading C++ file 'qt_software_keyboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/curti/yuzu/src/yuzu/applets/qt_software_keyboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_software_keyboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtSoftwareKeyboardDialog_t {
    QByteArrayData data[15];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtSoftwareKeyboardDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtSoftwareKeyboardDialog_t qt_meta_stringdata_QtSoftwareKeyboardDialog = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QtSoftwareKeyboardDialog"
QT_MOC_LITERAL(1, 25, 16), // "SubmitNormalText"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 34), // "Service::AM::Frontend::SwkbdR..."
QT_MOC_LITERAL(4, 78, 6), // "result"
QT_MOC_LITERAL(5, 85, 14), // "std::u16string"
QT_MOC_LITERAL(6, 100, 14), // "submitted_text"
QT_MOC_LITERAL(7, 115, 9), // "confirmed"
QT_MOC_LITERAL(8, 125, 16), // "SubmitInlineText"
QT_MOC_LITERAL(9, 142, 37), // "Service::AM::Frontend::SwkbdR..."
QT_MOC_LITERAL(10, 180, 10), // "reply_type"
QT_MOC_LITERAL(11, 191, 3), // "s32"
QT_MOC_LITERAL(12, 195, 15), // "cursor_position"
QT_MOC_LITERAL(13, 211, 4), // "open"
QT_MOC_LITERAL(14, 216, 6) // "reject"

    },
    "QtSoftwareKeyboardDialog\0SubmitNormalText\0"
    "\0Service::AM::Frontend::SwkbdResult\0"
    "result\0std::u16string\0submitted_text\0"
    "confirmed\0SubmitInlineText\0"
    "Service::AM::Frontend::SwkbdReplyType\0"
    "reply_type\0s32\0cursor_position\0open\0"
    "reject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtSoftwareKeyboardDialog[] = {

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
       1,    3,   39,    2, 0x06 /* Public */,
       1,    2,   46,    2, 0x26 /* Public | MethodCloned */,
       8,    3,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   58,    2, 0x0a /* Public */,
      14,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Bool,    4,    6,    7,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 5, 0x80000000 | 11,   10,    6,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtSoftwareKeyboardDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtSoftwareKeyboardDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SubmitNormalText((*reinterpret_cast< Service::AM::Frontend::SwkbdResult(*)>(_a[1])),(*reinterpret_cast< std::u16string(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->SubmitNormalText((*reinterpret_cast< Service::AM::Frontend::SwkbdResult(*)>(_a[1])),(*reinterpret_cast< std::u16string(*)>(_a[2]))); break;
        case 2: _t->SubmitInlineText((*reinterpret_cast< Service::AM::Frontend::SwkbdReplyType(*)>(_a[1])),(*reinterpret_cast< std::u16string(*)>(_a[2])),(*reinterpret_cast< s32(*)>(_a[3]))); break;
        case 3: _t->open(); break;
        case 4: _t->reject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QtSoftwareKeyboardDialog::*)(Service::AM::Frontend::SwkbdResult , std::u16string , bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtSoftwareKeyboardDialog::SubmitNormalText)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QtSoftwareKeyboardDialog::*)(Service::AM::Frontend::SwkbdReplyType , std::u16string , s32 ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtSoftwareKeyboardDialog::SubmitInlineText)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtSoftwareKeyboardDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_QtSoftwareKeyboardDialog.data,
    qt_meta_data_QtSoftwareKeyboardDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtSoftwareKeyboardDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtSoftwareKeyboardDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtSoftwareKeyboardDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QtSoftwareKeyboardDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QtSoftwareKeyboardDialog::SubmitNormalText(Service::AM::Frontend::SwkbdResult _t1, std::u16string _t2, bool _t3)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(const_cast< QtSoftwareKeyboardDialog *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 2
void QtSoftwareKeyboardDialog::SubmitInlineText(Service::AM::Frontend::SwkbdReplyType _t1, std::u16string _t2, s32 _t3)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(const_cast< QtSoftwareKeyboardDialog *>(this), &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QtSoftwareKeyboard_t {
    QByteArrayData data[20];
    char stringdata0[500];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtSoftwareKeyboard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtSoftwareKeyboard_t qt_meta_stringdata_QtSoftwareKeyboard = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QtSoftwareKeyboard"
QT_MOC_LITERAL(1, 19, 28), // "MainWindowInitializeKeyboard"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 9), // "is_inline"
QT_MOC_LITERAL(4, 59, 44), // "Core::Frontend::KeyboardIniti..."
QT_MOC_LITERAL(5, 104, 21), // "initialize_parameters"
QT_MOC_LITERAL(6, 126, 28), // "MainWindowShowNormalKeyboard"
QT_MOC_LITERAL(7, 155, 29), // "MainWindowShowTextCheckDialog"
QT_MOC_LITERAL(8, 185, 43), // "Service::AM::Frontend::SwkbdT..."
QT_MOC_LITERAL(9, 229, 17), // "text_check_result"
QT_MOC_LITERAL(10, 247, 14), // "std::u16string"
QT_MOC_LITERAL(11, 262, 18), // "text_check_message"
QT_MOC_LITERAL(12, 281, 28), // "MainWindowShowInlineKeyboard"
QT_MOC_LITERAL(13, 310, 38), // "Core::Frontend::InlineAppearP..."
QT_MOC_LITERAL(14, 349, 17), // "appear_parameters"
QT_MOC_LITERAL(15, 367, 28), // "MainWindowHideInlineKeyboard"
QT_MOC_LITERAL(16, 396, 27), // "MainWindowInlineTextChanged"
QT_MOC_LITERAL(17, 424, 36), // "Core::Frontend::InlineTextPar..."
QT_MOC_LITERAL(18, 461, 15), // "text_parameters"
QT_MOC_LITERAL(19, 477, 22) // "MainWindowExitKeyboard"

    },
    "QtSoftwareKeyboard\0MainWindowInitializeKeyboard\0"
    "\0is_inline\0Core::Frontend::KeyboardInitializeParameters\0"
    "initialize_parameters\0"
    "MainWindowShowNormalKeyboard\0"
    "MainWindowShowTextCheckDialog\0"
    "Service::AM::Frontend::SwkbdTextCheckResult\0"
    "text_check_result\0std::u16string\0"
    "text_check_message\0MainWindowShowInlineKeyboard\0"
    "Core::Frontend::InlineAppearParameters\0"
    "appear_parameters\0MainWindowHideInlineKeyboard\0"
    "MainWindowInlineTextChanged\0"
    "Core::Frontend::InlineTextParameters\0"
    "text_parameters\0MainWindowExitKeyboard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtSoftwareKeyboard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       6,    0,   54,    2, 0x06 /* Public */,
       7,    2,   55,    2, 0x06 /* Public */,
      12,    1,   60,    2, 0x06 /* Public */,
      15,    0,   63,    2, 0x06 /* Public */,
      16,    1,   64,    2, 0x06 /* Public */,
      19,    0,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,

       0        // eod
};

void QtSoftwareKeyboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtSoftwareKeyboard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MainWindowInitializeKeyboard((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< Core::Frontend::KeyboardInitializeParameters(*)>(_a[2]))); break;
        case 1: _t->MainWindowShowNormalKeyboard(); break;
        case 2: _t->MainWindowShowTextCheckDialog((*reinterpret_cast< Service::AM::Frontend::SwkbdTextCheckResult(*)>(_a[1])),(*reinterpret_cast< std::u16string(*)>(_a[2]))); break;
        case 3: _t->MainWindowShowInlineKeyboard((*reinterpret_cast< Core::Frontend::InlineAppearParameters(*)>(_a[1]))); break;
        case 4: _t->MainWindowHideInlineKeyboard(); break;
        case 5: _t->MainWindowInlineTextChanged((*reinterpret_cast< Core::Frontend::InlineTextParameters(*)>(_a[1]))); break;
        case 6: _t->MainWindowExitKeyboard(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QtSoftwareKeyboard::*)(bool , Core::Frontend::KeyboardInitializeParameters ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtSoftwareKeyboard::MainWindowInitializeKeyboard)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QtSoftwareKeyboard::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtSoftwareKeyboard::MainWindowShowNormalKeyboard)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QtSoftwareKeyboard::*)(Service::AM::Frontend::SwkbdTextCheckResult , std::u16string ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtSoftwareKeyboard::MainWindowShowTextCheckDialog)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QtSoftwareKeyboard::*)(Core::Frontend::InlineAppearParameters ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtSoftwareKeyboard::MainWindowShowInlineKeyboard)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QtSoftwareKeyboard::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtSoftwareKeyboard::MainWindowHideInlineKeyboard)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QtSoftwareKeyboard::*)(Core::Frontend::InlineTextParameters ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtSoftwareKeyboard::MainWindowInlineTextChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QtSoftwareKeyboard::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtSoftwareKeyboard::MainWindowExitKeyboard)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtSoftwareKeyboard::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QtSoftwareKeyboard.data,
    qt_meta_data_QtSoftwareKeyboard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtSoftwareKeyboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtSoftwareKeyboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtSoftwareKeyboard.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Core::Frontend::SoftwareKeyboardApplet"))
        return static_cast< Core::Frontend::SoftwareKeyboardApplet*>(this);
    return QObject::qt_metacast(_clname);
}

int QtSoftwareKeyboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void QtSoftwareKeyboard::MainWindowInitializeKeyboard(bool _t1, Core::Frontend::KeyboardInitializeParameters _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< QtSoftwareKeyboard *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtSoftwareKeyboard::MainWindowShowNormalKeyboard()const
{
    QMetaObject::activate(const_cast< QtSoftwareKeyboard *>(this), &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QtSoftwareKeyboard::MainWindowShowTextCheckDialog(Service::AM::Frontend::SwkbdTextCheckResult _t1, std::u16string _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< QtSoftwareKeyboard *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtSoftwareKeyboard::MainWindowShowInlineKeyboard(Core::Frontend::InlineAppearParameters _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< QtSoftwareKeyboard *>(this), &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtSoftwareKeyboard::MainWindowHideInlineKeyboard()const
{
    QMetaObject::activate(const_cast< QtSoftwareKeyboard *>(this), &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QtSoftwareKeyboard::MainWindowInlineTextChanged(Core::Frontend::InlineTextParameters _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< QtSoftwareKeyboard *>(this), &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QtSoftwareKeyboard::MainWindowExitKeyboard()const
{
    QMetaObject::activate(const_cast< QtSoftwareKeyboard *>(this), &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
