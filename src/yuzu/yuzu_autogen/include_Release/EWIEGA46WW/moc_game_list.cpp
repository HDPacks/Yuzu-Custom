/****************************************************************************
** Meta object code from reading C++ file 'game_list.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/curti/yuzu/src/yuzu/game_list.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game_list.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameList_t {
    QByteArrayData data[49];
    char stringdata0[737];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameList_t qt_meta_stringdata_GameList = {
    {
QT_MOC_LITERAL(0, 0, 8), // "GameList"
QT_MOC_LITERAL(1, 9, 8), // "BootGame"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 9), // "game_path"
QT_MOC_LITERAL(4, 29, 3), // "u64"
QT_MOC_LITERAL(5, 33, 10), // "program_id"
QT_MOC_LITERAL(6, 44, 11), // "std::size_t"
QT_MOC_LITERAL(7, 56, 13), // "program_index"
QT_MOC_LITERAL(8, 70, 13), // "StartGameType"
QT_MOC_LITERAL(9, 84, 4), // "type"
QT_MOC_LITERAL(10, 89, 12), // "AmLaunchType"
QT_MOC_LITERAL(11, 102, 11), // "launch_type"
QT_MOC_LITERAL(12, 114, 10), // "GameChosen"
QT_MOC_LITERAL(13, 125, 8), // "title_id"
QT_MOC_LITERAL(14, 134, 19), // "OpenFolderRequested"
QT_MOC_LITERAL(15, 154, 18), // "GameListOpenTarget"
QT_MOC_LITERAL(16, 173, 6), // "target"
QT_MOC_LITERAL(17, 180, 11), // "std::string"
QT_MOC_LITERAL(18, 192, 36), // "OpenTransferableShaderCacheRe..."
QT_MOC_LITERAL(19, 229, 29), // "RemoveInstalledEntryRequested"
QT_MOC_LITERAL(20, 259, 18), // "InstalledEntryType"
QT_MOC_LITERAL(21, 278, 19), // "RemoveFileRequested"
QT_MOC_LITERAL(22, 298, 20), // "GameListRemoveTarget"
QT_MOC_LITERAL(23, 319, 23), // "RemovePlayTimeRequested"
QT_MOC_LITERAL(24, 343, 18), // "DumpRomFSRequested"
QT_MOC_LITERAL(25, 362, 15), // "DumpRomFSTarget"
QT_MOC_LITERAL(26, 378, 24), // "VerifyIntegrityRequested"
QT_MOC_LITERAL(27, 403, 16), // "CopyTIDRequested"
QT_MOC_LITERAL(28, 420, 14), // "CreateShortcut"
QT_MOC_LITERAL(29, 435, 22), // "GameListShortcutTarget"
QT_MOC_LITERAL(30, 458, 30), // "NavigateToGamedbEntryRequested"
QT_MOC_LITERAL(31, 489, 17), // "CompatibilityList"
QT_MOC_LITERAL(32, 507, 18), // "compatibility_list"
QT_MOC_LITERAL(33, 526, 27), // "OpenPerGameGeneralRequested"
QT_MOC_LITERAL(34, 554, 4), // "file"
QT_MOC_LITERAL(35, 559, 13), // "OpenDirectory"
QT_MOC_LITERAL(36, 573, 9), // "directory"
QT_MOC_LITERAL(37, 583, 12), // "AddDirectory"
QT_MOC_LITERAL(38, 596, 8), // "ShowList"
QT_MOC_LITERAL(39, 605, 4), // "show"
QT_MOC_LITERAL(40, 610, 19), // "PopulatingCompleted"
QT_MOC_LITERAL(41, 630, 10), // "SaveConfig"
QT_MOC_LITERAL(42, 641, 14), // "OnItemExpanded"
QT_MOC_LITERAL(43, 656, 11), // "QModelIndex"
QT_MOC_LITERAL(44, 668, 4), // "item"
QT_MOC_LITERAL(45, 673, 13), // "OnTextChanged"
QT_MOC_LITERAL(46, 687, 8), // "new_text"
QT_MOC_LITERAL(47, 696, 20), // "OnFilterCloseClicked"
QT_MOC_LITERAL(48, 717, 19) // "OnUpdateThemedIcons"

    },
    "GameList\0BootGame\0\0game_path\0u64\0"
    "program_id\0std::size_t\0program_index\0"
    "StartGameType\0type\0AmLaunchType\0"
    "launch_type\0GameChosen\0title_id\0"
    "OpenFolderRequested\0GameListOpenTarget\0"
    "target\0std::string\0"
    "OpenTransferableShaderCacheRequested\0"
    "RemoveInstalledEntryRequested\0"
    "InstalledEntryType\0RemoveFileRequested\0"
    "GameListRemoveTarget\0RemovePlayTimeRequested\0"
    "DumpRomFSRequested\0DumpRomFSTarget\0"
    "VerifyIntegrityRequested\0CopyTIDRequested\0"
    "CreateShortcut\0GameListShortcutTarget\0"
    "NavigateToGamedbEntryRequested\0"
    "CompatibilityList\0compatibility_list\0"
    "OpenPerGameGeneralRequested\0file\0"
    "OpenDirectory\0directory\0AddDirectory\0"
    "ShowList\0show\0PopulatingCompleted\0"
    "SaveConfig\0OnItemExpanded\0QModelIndex\0"
    "item\0OnTextChanged\0new_text\0"
    "OnFilterCloseClicked\0OnUpdateThemedIcons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,  129,    2, 0x06 /* Public */,
      12,    2,  140,    2, 0x06 /* Public */,
      12,    1,  145,    2, 0x26 /* Public | MethodCloned */,
      14,    3,  148,    2, 0x06 /* Public */,
      18,    1,  155,    2, 0x06 /* Public */,
      19,    2,  158,    2, 0x06 /* Public */,
      21,    3,  163,    2, 0x06 /* Public */,
      23,    1,  170,    2, 0x06 /* Public */,
      24,    3,  173,    2, 0x06 /* Public */,
      26,    1,  180,    2, 0x06 /* Public */,
      27,    1,  183,    2, 0x06 /* Public */,
      28,    3,  186,    2, 0x06 /* Public */,
      30,    2,  193,    2, 0x06 /* Public */,
      33,    1,  198,    2, 0x06 /* Public */,
      35,    1,  201,    2, 0x06 /* Public */,
      37,    0,  204,    2, 0x06 /* Public */,
      38,    1,  205,    2, 0x06 /* Public */,
      40,    0,  208,    2, 0x06 /* Public */,
      41,    0,  209,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      42,    1,  210,    2, 0x08 /* Private */,
      45,    1,  213,    2, 0x08 /* Private */,
      47,    0,  216,    2, 0x08 /* Private */,
      48,    0,  217,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, 0x80000000 | 6, 0x80000000 | 8, 0x80000000 | 10,    3,    5,    7,    9,   11,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,   13,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 15, 0x80000000 | 17,    5,   16,    3,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 20,    5,    9,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 22, 0x80000000 | 17,    5,   16,    3,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 17, 0x80000000 | 25,    5,    3,   16,
    QMetaType::Void, 0x80000000 | 17,    3,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 17, 0x80000000 | 29,    5,    3,   16,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 31,    5,   32,
    QMetaType::Void, 0x80000000 | 17,   34,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   39,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void, QMetaType::QString,   46,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GameList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->BootGame((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< u64(*)>(_a[2])),(*reinterpret_cast< std::size_t(*)>(_a[3])),(*reinterpret_cast< StartGameType(*)>(_a[4])),(*reinterpret_cast< AmLaunchType(*)>(_a[5]))); break;
        case 1: _t->GameChosen((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const u64(*)>(_a[2]))); break;
        case 2: _t->GameChosen((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->OpenFolderRequested((*reinterpret_cast< u64(*)>(_a[1])),(*reinterpret_cast< GameListOpenTarget(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3]))); break;
        case 4: _t->OpenTransferableShaderCacheRequested((*reinterpret_cast< u64(*)>(_a[1]))); break;
        case 5: _t->RemoveInstalledEntryRequested((*reinterpret_cast< u64(*)>(_a[1])),(*reinterpret_cast< InstalledEntryType(*)>(_a[2]))); break;
        case 6: _t->RemoveFileRequested((*reinterpret_cast< u64(*)>(_a[1])),(*reinterpret_cast< GameListRemoveTarget(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3]))); break;
        case 7: _t->RemovePlayTimeRequested((*reinterpret_cast< u64(*)>(_a[1]))); break;
        case 8: _t->DumpRomFSRequested((*reinterpret_cast< u64(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< DumpRomFSTarget(*)>(_a[3]))); break;
        case 9: _t->VerifyIntegrityRequested((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 10: _t->CopyTIDRequested((*reinterpret_cast< u64(*)>(_a[1]))); break;
        case 11: _t->CreateShortcut((*reinterpret_cast< u64(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< GameListShortcutTarget(*)>(_a[3]))); break;
        case 12: _t->NavigateToGamedbEntryRequested((*reinterpret_cast< u64(*)>(_a[1])),(*reinterpret_cast< const CompatibilityList(*)>(_a[2]))); break;
        case 13: _t->OpenPerGameGeneralRequested((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 14: _t->OpenDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->AddDirectory(); break;
        case 16: _t->ShowList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->PopulatingCompleted(); break;
        case 18: _t->SaveConfig(); break;
        case 19: _t->OnItemExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 20: _t->OnTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->OnFilterCloseClicked(); break;
        case 22: _t->OnUpdateThemedIcons(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameList::*)(const QString & , u64 , std::size_t , StartGameType , AmLaunchType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::BootGame)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GameList::*)(const QString & , const u64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::GameChosen)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GameList::*)(u64 , GameListOpenTarget , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::OpenFolderRequested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GameList::*)(u64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::OpenTransferableShaderCacheRequested)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GameList::*)(u64 , InstalledEntryType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::RemoveInstalledEntryRequested)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GameList::*)(u64 , GameListRemoveTarget , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::RemoveFileRequested)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GameList::*)(u64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::RemovePlayTimeRequested)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (GameList::*)(u64 , const std::string & , DumpRomFSTarget );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::DumpRomFSRequested)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (GameList::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::VerifyIntegrityRequested)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (GameList::*)(u64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::CopyTIDRequested)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (GameList::*)(u64 , const std::string & , GameListShortcutTarget );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::CreateShortcut)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (GameList::*)(u64 , const CompatibilityList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::NavigateToGamedbEntryRequested)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (GameList::*)(const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::OpenPerGameGeneralRequested)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (GameList::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::OpenDirectory)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (GameList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::AddDirectory)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (GameList::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::ShowList)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (GameList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::PopulatingCompleted)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (GameList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameList::SaveConfig)) {
                *result = 18;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GameList::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GameList.data,
    qt_meta_data_GameList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GameList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameList.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GameList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void GameList::BootGame(const QString & _t1, u64 _t2, std::size_t _t3, StartGameType _t4, AmLaunchType _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GameList::GameChosen(const QString & _t1, const u64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void GameList::OpenFolderRequested(u64 _t1, GameListOpenTarget _t2, const std::string & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GameList::OpenTransferableShaderCacheRequested(u64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GameList::RemoveInstalledEntryRequested(u64 _t1, InstalledEntryType _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GameList::RemoveFileRequested(u64 _t1, GameListRemoveTarget _t2, const std::string & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GameList::RemovePlayTimeRequested(u64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GameList::DumpRomFSRequested(u64 _t1, const std::string & _t2, DumpRomFSTarget _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GameList::VerifyIntegrityRequested(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GameList::CopyTIDRequested(u64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GameList::CreateShortcut(u64 _t1, const std::string & _t2, GameListShortcutTarget _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GameList::NavigateToGamedbEntryRequested(u64 _t1, const CompatibilityList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void GameList::OpenPerGameGeneralRequested(const std::string & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void GameList::OpenDirectory(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void GameList::AddDirectory()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void GameList::ShowList(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void GameList::PopulatingCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void GameList::SaveConfig()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}
struct qt_meta_stringdata_GameListPlaceholder_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameListPlaceholder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameListPlaceholder_t qt_meta_stringdata_GameListPlaceholder = {
    {
QT_MOC_LITERAL(0, 0, 19), // "GameListPlaceholder"
QT_MOC_LITERAL(1, 20, 12), // "AddDirectory"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 19) // "onUpdateThemedIcons"

    },
    "GameListPlaceholder\0AddDirectory\0\0"
    "onUpdateThemedIcons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameListPlaceholder[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void GameListPlaceholder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameListPlaceholder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AddDirectory(); break;
        case 1: _t->onUpdateThemedIcons(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameListPlaceholder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameListPlaceholder::AddDirectory)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject GameListPlaceholder::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GameListPlaceholder.data,
    qt_meta_data_GameListPlaceholder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GameListPlaceholder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameListPlaceholder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameListPlaceholder.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GameListPlaceholder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GameListPlaceholder::AddDirectory()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
