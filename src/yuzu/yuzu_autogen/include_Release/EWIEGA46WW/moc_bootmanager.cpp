/****************************************************************************
** Meta object code from reading C++ file 'bootmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/curti/yuzu/src/yuzu/bootmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bootmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EmuThread_t {
    QByteArrayData data[10];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EmuThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EmuThread_t qt_meta_stringdata_EmuThread = {
    {
QT_MOC_LITERAL(0, 0, 9), // "EmuThread"
QT_MOC_LITERAL(1, 10, 16), // "DebugModeEntered"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "DebugModeLeft"
QT_MOC_LITERAL(4, 42, 12), // "LoadProgress"
QT_MOC_LITERAL(5, 55, 28), // "VideoCore::LoadCallbackStage"
QT_MOC_LITERAL(6, 84, 5), // "stage"
QT_MOC_LITERAL(7, 90, 11), // "std::size_t"
QT_MOC_LITERAL(8, 102, 5), // "value"
QT_MOC_LITERAL(9, 108, 5) // "total"

    },
    "EmuThread\0DebugModeEntered\0\0DebugModeLeft\0"
    "LoadProgress\0VideoCore::LoadCallbackStage\0"
    "stage\0std::size_t\0value\0total"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EmuThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    3,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 7,    6,    8,    9,

       0        // eod
};

void EmuThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EmuThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DebugModeEntered(); break;
        case 1: _t->DebugModeLeft(); break;
        case 2: _t->LoadProgress((*reinterpret_cast< VideoCore::LoadCallbackStage(*)>(_a[1])),(*reinterpret_cast< std::size_t(*)>(_a[2])),(*reinterpret_cast< std::size_t(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EmuThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EmuThread::DebugModeEntered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EmuThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EmuThread::DebugModeLeft)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EmuThread::*)(VideoCore::LoadCallbackStage , std::size_t , std::size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EmuThread::LoadProgress)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EmuThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_EmuThread.data,
    qt_meta_data_EmuThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EmuThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmuThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EmuThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int EmuThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void EmuThread::DebugModeEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void EmuThread::DebugModeLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void EmuThread::LoadProgress(VideoCore::LoadCallbackStage _t1, std::size_t _t2, std::size_t _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_GRenderWindow_t {
    QByteArrayData data[15];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GRenderWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GRenderWindow_t qt_meta_stringdata_GRenderWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "GRenderWindow"
QT_MOC_LITERAL(1, 14, 6), // "Closed"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 19), // "FirstFrameDisplayed"
QT_MOC_LITERAL(4, 42, 20), // "ExecuteProgramSignal"
QT_MOC_LITERAL(5, 63, 11), // "std::size_t"
QT_MOC_LITERAL(6, 75, 13), // "program_index"
QT_MOC_LITERAL(7, 89, 10), // "ExitSignal"
QT_MOC_LITERAL(8, 100, 13), // "MouseActivity"
QT_MOC_LITERAL(9, 114, 23), // "TasPlaybackStateChanged"
QT_MOC_LITERAL(10, 138, 19), // "OnEmulationStarting"
QT_MOC_LITERAL(11, 158, 10), // "EmuThread*"
QT_MOC_LITERAL(12, 169, 11), // "emu_thread_"
QT_MOC_LITERAL(13, 181, 19), // "OnEmulationStopping"
QT_MOC_LITERAL(14, 201, 24) // "OnFramebufferSizeChanged"

    },
    "GRenderWindow\0Closed\0\0FirstFrameDisplayed\0"
    "ExecuteProgramSignal\0std::size_t\0"
    "program_index\0ExitSignal\0MouseActivity\0"
    "TasPlaybackStateChanged\0OnEmulationStarting\0"
    "EmuThread*\0emu_thread_\0OnEmulationStopping\0"
    "OnFramebufferSizeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GRenderWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    1,   61,    2, 0x06 /* Public */,
       7,    0,   64,    2, 0x06 /* Public */,
       8,    0,   65,    2, 0x06 /* Public */,
       9,    0,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   67,    2, 0x0a /* Public */,
      13,    0,   70,    2, 0x0a /* Public */,
      14,    0,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GRenderWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GRenderWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Closed(); break;
        case 1: _t->FirstFrameDisplayed(); break;
        case 2: _t->ExecuteProgramSignal((*reinterpret_cast< std::size_t(*)>(_a[1]))); break;
        case 3: _t->ExitSignal(); break;
        case 4: _t->MouseActivity(); break;
        case 5: _t->TasPlaybackStateChanged(); break;
        case 6: _t->OnEmulationStarting((*reinterpret_cast< EmuThread*(*)>(_a[1]))); break;
        case 7: _t->OnEmulationStopping(); break;
        case 8: _t->OnFramebufferSizeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EmuThread* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GRenderWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GRenderWindow::Closed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GRenderWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GRenderWindow::FirstFrameDisplayed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GRenderWindow::*)(std::size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GRenderWindow::ExecuteProgramSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GRenderWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GRenderWindow::ExitSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GRenderWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GRenderWindow::MouseActivity)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GRenderWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GRenderWindow::TasPlaybackStateChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GRenderWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GRenderWindow.data,
    qt_meta_data_GRenderWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GRenderWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GRenderWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GRenderWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Core::Frontend::EmuWindow"))
        return static_cast< Core::Frontend::EmuWindow*>(this);
    return QWidget::qt_metacast(_clname);
}

int GRenderWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void GRenderWindow::Closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GRenderWindow::FirstFrameDisplayed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GRenderWindow::ExecuteProgramSignal(std::size_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GRenderWindow::ExitSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GRenderWindow::MouseActivity()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void GRenderWindow::TasPlaybackStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
