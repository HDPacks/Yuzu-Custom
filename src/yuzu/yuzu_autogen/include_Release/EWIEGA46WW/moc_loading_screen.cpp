/****************************************************************************
** Meta object code from reading C++ file 'loading_screen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/curti/yuzu/src/yuzu/loading_screen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loading_screen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoadingScreen_t {
    QByteArrayData data[9];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoadingScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoadingScreen_t qt_meta_stringdata_LoadingScreen = {
    {
QT_MOC_LITERAL(0, 0, 13), // "LoadingScreen"
QT_MOC_LITERAL(1, 14, 12), // "LoadProgress"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 28), // "VideoCore::LoadCallbackStage"
QT_MOC_LITERAL(4, 57, 5), // "stage"
QT_MOC_LITERAL(5, 63, 11), // "std::size_t"
QT_MOC_LITERAL(6, 75, 5), // "value"
QT_MOC_LITERAL(7, 81, 5), // "total"
QT_MOC_LITERAL(8, 87, 6) // "Hidden"

    },
    "LoadingScreen\0LoadProgress\0\0"
    "VideoCore::LoadCallbackStage\0stage\0"
    "std::size_t\0value\0total\0Hidden"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoadingScreen[] = {

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
       8,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 5,    4,    6,    7,
    QMetaType::Void,

       0        // eod
};

void LoadingScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoadingScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LoadProgress((*reinterpret_cast< VideoCore::LoadCallbackStage(*)>(_a[1])),(*reinterpret_cast< std::size_t(*)>(_a[2])),(*reinterpret_cast< std::size_t(*)>(_a[3]))); break;
        case 1: _t->Hidden(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VideoCore::LoadCallbackStage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoadingScreen::*)(VideoCore::LoadCallbackStage , std::size_t , std::size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoadingScreen::LoadProgress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LoadingScreen::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoadingScreen::Hidden)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LoadingScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_LoadingScreen.data,
    qt_meta_data_LoadingScreen,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LoadingScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoadingScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoadingScreen.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LoadingScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void LoadingScreen::LoadProgress(VideoCore::LoadCallbackStage _t1, std::size_t _t2, std::size_t _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LoadingScreen::Hidden()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
