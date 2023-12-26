/****************************************************************************
** Meta object code from reading C++ file 'qt_web_browser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/curti/yuzu/src/yuzu/applets/qt_web_browser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_web_browser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtWebBrowser_t {
    QByteArrayData data[8];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtWebBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtWebBrowser_t qt_meta_stringdata_QtWebBrowser = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QtWebBrowser"
QT_MOC_LITERAL(1, 13, 21), // "MainWindowOpenWebPage"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "std::string"
QT_MOC_LITERAL(4, 48, 8), // "main_url"
QT_MOC_LITERAL(5, 57, 15), // "additional_args"
QT_MOC_LITERAL(6, 73, 8), // "is_local"
QT_MOC_LITERAL(7, 82, 21) // "MainWindowRequestExit"

    },
    "QtWebBrowser\0MainWindowOpenWebPage\0\0"
    "std::string\0main_url\0additional_args\0"
    "is_local\0MainWindowRequestExit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtWebBrowser[] = {

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
       1,    3,   24,    2, 0x06 /* Public */,
       7,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Bool,    4,    5,    6,
    QMetaType::Void,

       0        // eod
};

void QtWebBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtWebBrowser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->MainWindowOpenWebPage((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->MainWindowRequestExit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QtWebBrowser::*)(const std::string & , const std::string & , bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtWebBrowser::MainWindowOpenWebPage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QtWebBrowser::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtWebBrowser::MainWindowRequestExit)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtWebBrowser::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QtWebBrowser.data,
    qt_meta_data_QtWebBrowser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtWebBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtWebBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtWebBrowser.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Core::Frontend::WebBrowserApplet"))
        return static_cast< Core::Frontend::WebBrowserApplet*>(this);
    return QObject::qt_metacast(_clname);
}

int QtWebBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QtWebBrowser::MainWindowOpenWebPage(const std::string & _t1, const std::string & _t2, bool _t3)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(const_cast< QtWebBrowser *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtWebBrowser::MainWindowRequestExit()const
{
    QMetaObject::activate(const_cast< QtWebBrowser *>(this), &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
