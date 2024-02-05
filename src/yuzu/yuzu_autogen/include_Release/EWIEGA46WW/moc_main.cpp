/****************************************************************************
** Meta object code from reading C++ file 'main.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/curti/yuzu/src/yuzu/main.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VolumeButton_t {
    QByteArrayData data[4];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VolumeButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VolumeButton_t qt_meta_stringdata_VolumeButton = {
    {
QT_MOC_LITERAL(0, 0, 12), // "VolumeButton"
QT_MOC_LITERAL(1, 13, 13), // "VolumeChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15) // "ResetMultiplier"

    },
    "VolumeButton\0VolumeChanged\0\0ResetMultiplier"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VolumeButton[] = {

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

void VolumeButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VolumeButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->VolumeChanged(); break;
        case 1: _t->ResetMultiplier(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VolumeButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VolumeButton::VolumeChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject VolumeButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_VolumeButton.data,
    qt_meta_data_VolumeButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VolumeButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VolumeButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VolumeButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int VolumeButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
void VolumeButton::VolumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_GMainWindow_t {
    QByteArrayData data[176];
    char stringdata0[3339];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GMainWindow_t qt_meta_stringdata_GMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GMainWindow"
QT_MOC_LITERAL(1, 12, 17), // "EmulationStarting"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10), // "EmuThread*"
QT_MOC_LITERAL(4, 42, 10), // "emu_thread"
QT_MOC_LITERAL(5, 53, 17), // "EmulationStopping"
QT_MOC_LITERAL(6, 71, 17), // "UpdateThemedIcons"
QT_MOC_LITERAL(7, 89, 21), // "UpdateInstallProgress"
QT_MOC_LITERAL(8, 111, 22), // "AmiiboSettingsFinished"
QT_MOC_LITERAL(9, 134, 10), // "is_success"
QT_MOC_LITERAL(10, 145, 11), // "std::string"
QT_MOC_LITERAL(11, 157, 4), // "name"
QT_MOC_LITERAL(12, 162, 37), // "ControllerSelectorReconfigure..."
QT_MOC_LITERAL(13, 200, 20), // "ErrorDisplayFinished"
QT_MOC_LITERAL(14, 221, 32), // "ProfileSelectorFinishedSelection"
QT_MOC_LITERAL(15, 254, 27), // "std::optional<Common::UUID>"
QT_MOC_LITERAL(16, 282, 4), // "uuid"
QT_MOC_LITERAL(17, 287, 32), // "SoftwareKeyboardSubmitNormalText"
QT_MOC_LITERAL(18, 320, 34), // "Service::AM::Frontend::SwkbdR..."
QT_MOC_LITERAL(19, 355, 6), // "result"
QT_MOC_LITERAL(20, 362, 14), // "std::u16string"
QT_MOC_LITERAL(21, 377, 14), // "submitted_text"
QT_MOC_LITERAL(22, 392, 9), // "confirmed"
QT_MOC_LITERAL(23, 402, 32), // "SoftwareKeyboardSubmitInlineText"
QT_MOC_LITERAL(24, 435, 37), // "Service::AM::Frontend::SwkbdR..."
QT_MOC_LITERAL(25, 473, 10), // "reply_type"
QT_MOC_LITERAL(26, 484, 3), // "s32"
QT_MOC_LITERAL(27, 488, 15), // "cursor_position"
QT_MOC_LITERAL(28, 504, 29), // "WebBrowserExtractOfflineRomFS"
QT_MOC_LITERAL(29, 534, 16), // "WebBrowserClosed"
QT_MOC_LITERAL(30, 551, 36), // "Service::AM::Frontend::WebExi..."
QT_MOC_LITERAL(31, 588, 11), // "exit_reason"
QT_MOC_LITERAL(32, 600, 8), // "last_url"
QT_MOC_LITERAL(33, 609, 12), // "SigInterrupt"
QT_MOC_LITERAL(34, 622, 14), // "OnLoadComplete"
QT_MOC_LITERAL(35, 637, 16), // "OnExecuteProgram"
QT_MOC_LITERAL(36, 654, 11), // "std::size_t"
QT_MOC_LITERAL(37, 666, 13), // "program_index"
QT_MOC_LITERAL(38, 680, 6), // "OnExit"
QT_MOC_LITERAL(39, 687, 12), // "OnSaveConfig"
QT_MOC_LITERAL(40, 700, 24), // "AmiiboSettingsShowDialog"
QT_MOC_LITERAL(41, 725, 33), // "Core::Frontend::CabinetParame..."
QT_MOC_LITERAL(42, 759, 10), // "parameters"
QT_MOC_LITERAL(43, 770, 40), // "std::shared_ptr<Service::NFC:..."
QT_MOC_LITERAL(44, 811, 10), // "nfp_device"
QT_MOC_LITERAL(45, 822, 25), // "AmiiboSettingsRequestExit"
QT_MOC_LITERAL(46, 848, 40), // "ControllerSelectorReconfigure..."
QT_MOC_LITERAL(47, 889, 36), // "Core::Frontend::ControllerPar..."
QT_MOC_LITERAL(48, 926, 29), // "ControllerSelectorRequestExit"
QT_MOC_LITERAL(49, 956, 26), // "SoftwareKeyboardInitialize"
QT_MOC_LITERAL(50, 983, 9), // "is_inline"
QT_MOC_LITERAL(51, 993, 44), // "Core::Frontend::KeyboardIniti..."
QT_MOC_LITERAL(52, 1038, 21), // "initialize_parameters"
QT_MOC_LITERAL(53, 1060, 26), // "SoftwareKeyboardShowNormal"
QT_MOC_LITERAL(54, 1087, 29), // "SoftwareKeyboardShowTextCheck"
QT_MOC_LITERAL(55, 1117, 43), // "Service::AM::Frontend::SwkbdT..."
QT_MOC_LITERAL(56, 1161, 17), // "text_check_result"
QT_MOC_LITERAL(57, 1179, 18), // "text_check_message"
QT_MOC_LITERAL(58, 1198, 26), // "SoftwareKeyboardShowInline"
QT_MOC_LITERAL(59, 1225, 38), // "Core::Frontend::InlineAppearP..."
QT_MOC_LITERAL(60, 1264, 17), // "appear_parameters"
QT_MOC_LITERAL(61, 1282, 26), // "SoftwareKeyboardHideInline"
QT_MOC_LITERAL(62, 1309, 33), // "SoftwareKeyboardInlineTextCha..."
QT_MOC_LITERAL(63, 1343, 36), // "Core::Frontend::InlineTextPar..."
QT_MOC_LITERAL(64, 1380, 15), // "text_parameters"
QT_MOC_LITERAL(65, 1396, 20), // "SoftwareKeyboardExit"
QT_MOC_LITERAL(66, 1417, 24), // "ErrorDisplayDisplayError"
QT_MOC_LITERAL(67, 1442, 10), // "error_code"
QT_MOC_LITERAL(68, 1453, 10), // "error_text"
QT_MOC_LITERAL(69, 1464, 23), // "ErrorDisplayRequestExit"
QT_MOC_LITERAL(70, 1488, 28), // "ProfileSelectorSelectProfile"
QT_MOC_LITERAL(71, 1517, 39), // "Core::Frontend::ProfileSelect..."
QT_MOC_LITERAL(72, 1557, 26), // "ProfileSelectorRequestExit"
QT_MOC_LITERAL(73, 1584, 21), // "WebBrowserOpenWebPage"
QT_MOC_LITERAL(74, 1606, 8), // "main_url"
QT_MOC_LITERAL(75, 1615, 15), // "additional_args"
QT_MOC_LITERAL(76, 1631, 8), // "is_local"
QT_MOC_LITERAL(77, 1640, 21), // "WebBrowserRequestExit"
QT_MOC_LITERAL(78, 1662, 22), // "OnAppFocusStateChanged"
QT_MOC_LITERAL(79, 1685, 20), // "Qt::ApplicationState"
QT_MOC_LITERAL(80, 1706, 5), // "state"
QT_MOC_LITERAL(81, 1712, 17), // "OnTasStateChanged"
QT_MOC_LITERAL(82, 1730, 11), // "OnStartGame"
QT_MOC_LITERAL(83, 1742, 13), // "OnRestartGame"
QT_MOC_LITERAL(84, 1756, 11), // "OnPauseGame"
QT_MOC_LITERAL(85, 1768, 19), // "OnPauseContinueGame"
QT_MOC_LITERAL(86, 1788, 10), // "OnStopGame"
QT_MOC_LITERAL(87, 1799, 17), // "OnPrepareForSleep"
QT_MOC_LITERAL(88, 1817, 13), // "prepare_sleep"
QT_MOC_LITERAL(89, 1831, 25), // "OnMenuReportCompatibility"
QT_MOC_LITERAL(90, 1857, 14), // "OnOpenModsPage"
QT_MOC_LITERAL(91, 1872, 21), // "OnOpenQuickstartGuide"
QT_MOC_LITERAL(92, 1894, 9), // "OnOpenFAQ"
QT_MOC_LITERAL(93, 1904, 18), // "OnGameListLoadFile"
QT_MOC_LITERAL(94, 1923, 9), // "game_path"
QT_MOC_LITERAL(95, 1933, 3), // "u64"
QT_MOC_LITERAL(96, 1937, 10), // "program_id"
QT_MOC_LITERAL(97, 1948, 20), // "OnGameListOpenFolder"
QT_MOC_LITERAL(98, 1969, 18), // "GameListOpenTarget"
QT_MOC_LITERAL(99, 1988, 6), // "target"
QT_MOC_LITERAL(100, 1995, 33), // "OnTransferableShaderCacheOpen..."
QT_MOC_LITERAL(101, 2029, 30), // "OnGameListRemoveInstalledEntry"
QT_MOC_LITERAL(102, 2060, 18), // "InstalledEntryType"
QT_MOC_LITERAL(103, 2079, 4), // "type"
QT_MOC_LITERAL(104, 2084, 20), // "OnGameListRemoveFile"
QT_MOC_LITERAL(105, 2105, 20), // "GameListRemoveTarget"
QT_MOC_LITERAL(106, 2126, 28), // "OnGameListRemovePlayTimeData"
QT_MOC_LITERAL(107, 2155, 19), // "OnGameListDumpRomFS"
QT_MOC_LITERAL(108, 2175, 15), // "DumpRomFSTarget"
QT_MOC_LITERAL(109, 2191, 25), // "OnGameListVerifyIntegrity"
QT_MOC_LITERAL(110, 2217, 17), // "OnGameListCopyTID"
QT_MOC_LITERAL(111, 2235, 31), // "OnGameListNavigateToGamedbEntry"
QT_MOC_LITERAL(112, 2267, 17), // "CompatibilityList"
QT_MOC_LITERAL(113, 2285, 18), // "compatibility_list"
QT_MOC_LITERAL(114, 2304, 24), // "OnGameListCreateShortcut"
QT_MOC_LITERAL(115, 2329, 22), // "GameListShortcutTarget"
QT_MOC_LITERAL(116, 2352, 23), // "OnGameListOpenDirectory"
QT_MOC_LITERAL(117, 2376, 9), // "directory"
QT_MOC_LITERAL(118, 2386, 22), // "OnGameListAddDirectory"
QT_MOC_LITERAL(119, 2409, 18), // "OnGameListShowList"
QT_MOC_LITERAL(120, 2428, 4), // "show"
QT_MOC_LITERAL(121, 2433, 31), // "OnGameListOpenPerGameProperties"
QT_MOC_LITERAL(122, 2465, 4), // "file"
QT_MOC_LITERAL(123, 2470, 14), // "OnMenuLoadFile"
QT_MOC_LITERAL(124, 2485, 16), // "OnMenuLoadFolder"
QT_MOC_LITERAL(125, 2502, 24), // "IncrementInstallProgress"
QT_MOC_LITERAL(126, 2527, 19), // "OnMenuInstallToNAND"
QT_MOC_LITERAL(127, 2547, 16), // "OnMenuRecentFile"
QT_MOC_LITERAL(128, 2564, 11), // "OnConfigure"
QT_MOC_LITERAL(129, 2576, 14), // "OnConfigureTas"
QT_MOC_LITERAL(130, 2591, 16), // "OnDecreaseVolume"
QT_MOC_LITERAL(131, 2608, 16), // "OnIncreaseVolume"
QT_MOC_LITERAL(132, 2625, 6), // "OnMute"
QT_MOC_LITERAL(133, 2632, 14), // "OnTasStartStop"
QT_MOC_LITERAL(134, 2647, 11), // "OnTasRecord"
QT_MOC_LITERAL(135, 2659, 10), // "OnTasReset"
QT_MOC_LITERAL(136, 2670, 19), // "OnToggleGraphicsAPI"
QT_MOC_LITERAL(137, 2690, 18), // "OnToggleDockedMode"
QT_MOC_LITERAL(138, 2709, 19), // "OnToggleGpuAccuracy"
QT_MOC_LITERAL(139, 2729, 22), // "OnToggleAdaptingFilter"
QT_MOC_LITERAL(140, 2752, 18), // "OnConfigurePerGame"
QT_MOC_LITERAL(141, 2771, 12), // "OnLoadAmiibo"
QT_MOC_LITERAL(142, 2784, 16), // "OnOpenYuzuFolder"
QT_MOC_LITERAL(143, 2801, 25), // "OnVerifyInstalledContents"
QT_MOC_LITERAL(144, 2827, 7), // "OnAbout"
QT_MOC_LITERAL(145, 2835, 17), // "OnToggleFilterBar"
QT_MOC_LITERAL(146, 2853, 17), // "OnToggleStatusBar"
QT_MOC_LITERAL(147, 2871, 18), // "OnDisplayTitleBars"
QT_MOC_LITERAL(148, 2890, 17), // "InitializeHotkeys"
QT_MOC_LITERAL(149, 2908, 16), // "ToggleFullscreen"
QT_MOC_LITERAL(150, 2925, 24), // "UsingExclusiveFullscreen"
QT_MOC_LITERAL(151, 2950, 14), // "ShowFullscreen"
QT_MOC_LITERAL(152, 2965, 14), // "HideFullscreen"
QT_MOC_LITERAL(153, 2980, 16), // "ToggleWindowMode"
QT_MOC_LITERAL(154, 2997, 15), // "ResetWindowSize"
QT_MOC_LITERAL(155, 3013, 3), // "u32"
QT_MOC_LITERAL(156, 3017, 5), // "width"
QT_MOC_LITERAL(157, 3023, 6), // "height"
QT_MOC_LITERAL(158, 3030, 18), // "ResetWindowSize720"
QT_MOC_LITERAL(159, 3049, 18), // "ResetWindowSize900"
QT_MOC_LITERAL(160, 3068, 19), // "ResetWindowSize1080"
QT_MOC_LITERAL(161, 3088, 7), // "OnAlbum"
QT_MOC_LITERAL(162, 3096, 9), // "OnCabinet"
QT_MOC_LITERAL(163, 3106, 25), // "Service::NFP::CabinetMode"
QT_MOC_LITERAL(164, 3132, 4), // "mode"
QT_MOC_LITERAL(165, 3137, 9), // "OnMiiEdit"
QT_MOC_LITERAL(166, 3147, 20), // "OnOpenControllerMenu"
QT_MOC_LITERAL(167, 3168, 19), // "OnCaptureScreenshot"
QT_MOC_LITERAL(168, 3188, 25), // "OnCheckFirmwareDecryption"
QT_MOC_LITERAL(169, 3214, 17), // "OnLanguageChanged"
QT_MOC_LITERAL(170, 3232, 6), // "locale"
QT_MOC_LITERAL(171, 3239, 15), // "OnMouseActivity"
QT_MOC_LITERAL(172, 3255, 15), // "OnShutdownBegin"
QT_MOC_LITERAL(173, 3271, 21), // "OnShutdownBeginDialog"
QT_MOC_LITERAL(174, 3293, 18), // "OnEmulationStopped"
QT_MOC_LITERAL(175, 3312, 26) // "OnEmulationStopTimeExpired"

    },
    "GMainWindow\0EmulationStarting\0\0"
    "EmuThread*\0emu_thread\0EmulationStopping\0"
    "UpdateThemedIcons\0UpdateInstallProgress\0"
    "AmiiboSettingsFinished\0is_success\0"
    "std::string\0name\0ControllerSelectorReconfigureFinished\0"
    "ErrorDisplayFinished\0"
    "ProfileSelectorFinishedSelection\0"
    "std::optional<Common::UUID>\0uuid\0"
    "SoftwareKeyboardSubmitNormalText\0"
    "Service::AM::Frontend::SwkbdResult\0"
    "result\0std::u16string\0submitted_text\0"
    "confirmed\0SoftwareKeyboardSubmitInlineText\0"
    "Service::AM::Frontend::SwkbdReplyType\0"
    "reply_type\0s32\0cursor_position\0"
    "WebBrowserExtractOfflineRomFS\0"
    "WebBrowserClosed\0Service::AM::Frontend::WebExitReason\0"
    "exit_reason\0last_url\0SigInterrupt\0"
    "OnLoadComplete\0OnExecuteProgram\0"
    "std::size_t\0program_index\0OnExit\0"
    "OnSaveConfig\0AmiiboSettingsShowDialog\0"
    "Core::Frontend::CabinetParameters\0"
    "parameters\0std::shared_ptr<Service::NFC::NfcDevice>\0"
    "nfp_device\0AmiiboSettingsRequestExit\0"
    "ControllerSelectorReconfigureControllers\0"
    "Core::Frontend::ControllerParameters\0"
    "ControllerSelectorRequestExit\0"
    "SoftwareKeyboardInitialize\0is_inline\0"
    "Core::Frontend::KeyboardInitializeParameters\0"
    "initialize_parameters\0SoftwareKeyboardShowNormal\0"
    "SoftwareKeyboardShowTextCheck\0"
    "Service::AM::Frontend::SwkbdTextCheckResult\0"
    "text_check_result\0text_check_message\0"
    "SoftwareKeyboardShowInline\0"
    "Core::Frontend::InlineAppearParameters\0"
    "appear_parameters\0SoftwareKeyboardHideInline\0"
    "SoftwareKeyboardInlineTextChanged\0"
    "Core::Frontend::InlineTextParameters\0"
    "text_parameters\0SoftwareKeyboardExit\0"
    "ErrorDisplayDisplayError\0error_code\0"
    "error_text\0ErrorDisplayRequestExit\0"
    "ProfileSelectorSelectProfile\0"
    "Core::Frontend::ProfileSelectParameters\0"
    "ProfileSelectorRequestExit\0"
    "WebBrowserOpenWebPage\0main_url\0"
    "additional_args\0is_local\0WebBrowserRequestExit\0"
    "OnAppFocusStateChanged\0Qt::ApplicationState\0"
    "state\0OnTasStateChanged\0OnStartGame\0"
    "OnRestartGame\0OnPauseGame\0OnPauseContinueGame\0"
    "OnStopGame\0OnPrepareForSleep\0prepare_sleep\0"
    "OnMenuReportCompatibility\0OnOpenModsPage\0"
    "OnOpenQuickstartGuide\0OnOpenFAQ\0"
    "OnGameListLoadFile\0game_path\0u64\0"
    "program_id\0OnGameListOpenFolder\0"
    "GameListOpenTarget\0target\0"
    "OnTransferableShaderCacheOpenFile\0"
    "OnGameListRemoveInstalledEntry\0"
    "InstalledEntryType\0type\0OnGameListRemoveFile\0"
    "GameListRemoveTarget\0OnGameListRemovePlayTimeData\0"
    "OnGameListDumpRomFS\0DumpRomFSTarget\0"
    "OnGameListVerifyIntegrity\0OnGameListCopyTID\0"
    "OnGameListNavigateToGamedbEntry\0"
    "CompatibilityList\0compatibility_list\0"
    "OnGameListCreateShortcut\0"
    "GameListShortcutTarget\0OnGameListOpenDirectory\0"
    "directory\0OnGameListAddDirectory\0"
    "OnGameListShowList\0show\0"
    "OnGameListOpenPerGameProperties\0file\0"
    "OnMenuLoadFile\0OnMenuLoadFolder\0"
    "IncrementInstallProgress\0OnMenuInstallToNAND\0"
    "OnMenuRecentFile\0OnConfigure\0"
    "OnConfigureTas\0OnDecreaseVolume\0"
    "OnIncreaseVolume\0OnMute\0OnTasStartStop\0"
    "OnTasRecord\0OnTasReset\0OnToggleGraphicsAPI\0"
    "OnToggleDockedMode\0OnToggleGpuAccuracy\0"
    "OnToggleAdaptingFilter\0OnConfigurePerGame\0"
    "OnLoadAmiibo\0OnOpenYuzuFolder\0"
    "OnVerifyInstalledContents\0OnAbout\0"
    "OnToggleFilterBar\0OnToggleStatusBar\0"
    "OnDisplayTitleBars\0InitializeHotkeys\0"
    "ToggleFullscreen\0UsingExclusiveFullscreen\0"
    "ShowFullscreen\0HideFullscreen\0"
    "ToggleWindowMode\0ResetWindowSize\0u32\0"
    "width\0height\0ResetWindowSize720\0"
    "ResetWindowSize900\0ResetWindowSize1080\0"
    "OnAlbum\0OnCabinet\0Service::NFP::CabinetMode\0"
    "mode\0OnMiiEdit\0OnOpenControllerMenu\0"
    "OnCaptureScreenshot\0OnCheckFirmwareDecryption\0"
    "OnLanguageChanged\0locale\0OnMouseActivity\0"
    "OnShutdownBegin\0OnShutdownBeginDialog\0"
    "OnEmulationStopped\0OnEmulationStopTimeExpired"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
     108,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  554,    2, 0x06 /* Public */,
       5,    0,  557,    2, 0x06 /* Public */,
       6,    0,  558,    2, 0x06 /* Public */,
       7,    0,  559,    2, 0x06 /* Public */,
       8,    2,  560,    2, 0x06 /* Public */,
      12,    1,  565,    2, 0x06 /* Public */,
      13,    0,  568,    2, 0x06 /* Public */,
      14,    1,  569,    2, 0x06 /* Public */,
      17,    3,  572,    2, 0x06 /* Public */,
      23,    3,  579,    2, 0x06 /* Public */,
      28,    0,  586,    2, 0x06 /* Public */,
      29,    2,  587,    2, 0x06 /* Public */,
      33,    0,  592,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      34,    0,  593,    2, 0x0a /* Public */,
      35,    1,  594,    2, 0x0a /* Public */,
      38,    0,  597,    2, 0x0a /* Public */,
      39,    0,  598,    2, 0x0a /* Public */,
      40,    2,  599,    2, 0x0a /* Public */,
      45,    0,  604,    2, 0x0a /* Public */,
      46,    1,  605,    2, 0x0a /* Public */,
      48,    0,  608,    2, 0x0a /* Public */,
      49,    2,  609,    2, 0x0a /* Public */,
      53,    0,  614,    2, 0x0a /* Public */,
      54,    2,  615,    2, 0x0a /* Public */,
      58,    1,  620,    2, 0x0a /* Public */,
      61,    0,  623,    2, 0x0a /* Public */,
      62,    1,  624,    2, 0x0a /* Public */,
      65,    0,  627,    2, 0x0a /* Public */,
      66,    2,  628,    2, 0x0a /* Public */,
      69,    0,  633,    2, 0x0a /* Public */,
      70,    1,  634,    2, 0x0a /* Public */,
      72,    0,  637,    2, 0x0a /* Public */,
      73,    3,  638,    2, 0x0a /* Public */,
      77,    0,  645,    2, 0x0a /* Public */,
      78,    1,  646,    2, 0x0a /* Public */,
      81,    0,  649,    2, 0x0a /* Public */,
      82,    0,  650,    2, 0x08 /* Private */,
      83,    0,  651,    2, 0x08 /* Private */,
      84,    0,  652,    2, 0x08 /* Private */,
      85,    0,  653,    2, 0x08 /* Private */,
      86,    0,  654,    2, 0x08 /* Private */,
      87,    1,  655,    2, 0x08 /* Private */,
      89,    0,  658,    2, 0x08 /* Private */,
      90,    0,  659,    2, 0x08 /* Private */,
      91,    0,  660,    2, 0x08 /* Private */,
      92,    0,  661,    2, 0x08 /* Private */,
      93,    2,  662,    2, 0x08 /* Private */,
      97,    3,  667,    2, 0x08 /* Private */,
     100,    1,  674,    2, 0x08 /* Private */,
     101,    2,  677,    2, 0x08 /* Private */,
     104,    3,  682,    2, 0x08 /* Private */,
     106,    1,  689,    2, 0x08 /* Private */,
     107,    3,  692,    2, 0x08 /* Private */,
     109,    1,  699,    2, 0x08 /* Private */,
     110,    1,  702,    2, 0x08 /* Private */,
     111,    2,  705,    2, 0x08 /* Private */,
     114,    3,  710,    2, 0x08 /* Private */,
     116,    1,  717,    2, 0x08 /* Private */,
     118,    0,  720,    2, 0x08 /* Private */,
     119,    1,  721,    2, 0x08 /* Private */,
     121,    1,  724,    2, 0x08 /* Private */,
     123,    0,  727,    2, 0x08 /* Private */,
     124,    0,  728,    2, 0x08 /* Private */,
     125,    0,  729,    2, 0x08 /* Private */,
     126,    0,  730,    2, 0x08 /* Private */,
     127,    0,  731,    2, 0x08 /* Private */,
     128,    0,  732,    2, 0x08 /* Private */,
     129,    0,  733,    2, 0x08 /* Private */,
     130,    0,  734,    2, 0x08 /* Private */,
     131,    0,  735,    2, 0x08 /* Private */,
     132,    0,  736,    2, 0x08 /* Private */,
     133,    0,  737,    2, 0x08 /* Private */,
     134,    0,  738,    2, 0x08 /* Private */,
     135,    0,  739,    2, 0x08 /* Private */,
     136,    0,  740,    2, 0x08 /* Private */,
     137,    0,  741,    2, 0x08 /* Private */,
     138,    0,  742,    2, 0x08 /* Private */,
     139,    0,  743,    2, 0x08 /* Private */,
     140,    0,  744,    2, 0x08 /* Private */,
     141,    0,  745,    2, 0x08 /* Private */,
     142,    0,  746,    2, 0x08 /* Private */,
     143,    0,  747,    2, 0x08 /* Private */,
     144,    0,  748,    2, 0x08 /* Private */,
     145,    0,  749,    2, 0x08 /* Private */,
     146,    0,  750,    2, 0x08 /* Private */,
     147,    1,  751,    2, 0x08 /* Private */,
     148,    0,  754,    2, 0x08 /* Private */,
     149,    0,  755,    2, 0x08 /* Private */,
     150,    0,  756,    2, 0x08 /* Private */,
     151,    0,  757,    2, 0x08 /* Private */,
     152,    0,  758,    2, 0x08 /* Private */,
     153,    0,  759,    2, 0x08 /* Private */,
     154,    2,  760,    2, 0x08 /* Private */,
     158,    0,  765,    2, 0x08 /* Private */,
     159,    0,  766,    2, 0x08 /* Private */,
     160,    0,  767,    2, 0x08 /* Private */,
     161,    0,  768,    2, 0x08 /* Private */,
     162,    1,  769,    2, 0x08 /* Private */,
     165,    0,  772,    2, 0x08 /* Private */,
     166,    0,  773,    2, 0x08 /* Private */,
     167,    0,  774,    2, 0x08 /* Private */,
     168,    0,  775,    2, 0x08 /* Private */,
     169,    1,  776,    2, 0x08 /* Private */,
     171,    0,  779,    2, 0x08 /* Private */,
     172,    0,  780,    2, 0x08 /* Private */,
     173,    0,  781,    2, 0x08 /* Private */,
     174,    0,  782,    2, 0x08 /* Private */,
     175,    0,  783,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 10,    9,   11,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 20, QMetaType::Bool,   19,   21,   22,
    QMetaType::Void, 0x80000000 | 24, 0x80000000 | 20, 0x80000000 | 26,   25,   21,   27,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30, 0x80000000 | 10,   31,   32,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 36,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 41, 0x80000000 | 43,   42,   44,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 47,   42,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 51,   50,   52,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 55, 0x80000000 | 20,   56,   57,
    QMetaType::Void, 0x80000000 | 59,   60,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 63,   64,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   67,   68,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 71,   42,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10, QMetaType::Bool,   74,   75,   76,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 79,   80,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   88,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 95,   94,   96,
    QMetaType::Void, 0x80000000 | 95, 0x80000000 | 98, 0x80000000 | 10,   96,   99,   94,
    QMetaType::Void, 0x80000000 | 95,   96,
    QMetaType::Void, 0x80000000 | 95, 0x80000000 | 102,   96,  103,
    QMetaType::Void, 0x80000000 | 95, 0x80000000 | 105, 0x80000000 | 10,   96,   99,   94,
    QMetaType::Void, 0x80000000 | 95,   96,
    QMetaType::Void, 0x80000000 | 95, 0x80000000 | 10, 0x80000000 | 108,   96,   94,   99,
    QMetaType::Void, 0x80000000 | 10,   94,
    QMetaType::Void, 0x80000000 | 95,   96,
    QMetaType::Void, 0x80000000 | 95, 0x80000000 | 112,   96,  113,
    QMetaType::Void, 0x80000000 | 95, 0x80000000 | 10, 0x80000000 | 115,   96,   94,   99,
    QMetaType::Void, QMetaType::QString,  117,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  120,
    QMetaType::Void, 0x80000000 | 10,  122,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 155, 0x80000000 | 155,  156,  157,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 163,  164,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  170,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->EmulationStarting((*reinterpret_cast< EmuThread*(*)>(_a[1]))); break;
        case 1: _t->EmulationStopping(); break;
        case 2: _t->UpdateThemedIcons(); break;
        case 3: _t->UpdateInstallProgress(); break;
        case 4: _t->AmiiboSettingsFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2]))); break;
        case 5: _t->ControllerSelectorReconfigureFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->ErrorDisplayFinished(); break;
        case 7: _t->ProfileSelectorFinishedSelection((*reinterpret_cast< std::optional<Common::UUID>(*)>(_a[1]))); break;
        case 8: _t->SoftwareKeyboardSubmitNormalText((*reinterpret_cast< Service::AM::Frontend::SwkbdResult(*)>(_a[1])),(*reinterpret_cast< std::u16string(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 9: _t->SoftwareKeyboardSubmitInlineText((*reinterpret_cast< Service::AM::Frontend::SwkbdReplyType(*)>(_a[1])),(*reinterpret_cast< std::u16string(*)>(_a[2])),(*reinterpret_cast< s32(*)>(_a[3]))); break;
        case 10: _t->WebBrowserExtractOfflineRomFS(); break;
        case 11: _t->WebBrowserClosed((*reinterpret_cast< Service::AM::Frontend::WebExitReason(*)>(_a[1])),(*reinterpret_cast< std::string(*)>(_a[2]))); break;
        case 12: _t->SigInterrupt(); break;
        case 13: _t->OnLoadComplete(); break;
        case 14: _t->OnExecuteProgram((*reinterpret_cast< std::size_t(*)>(_a[1]))); break;
        case 15: _t->OnExit(); break;
        case 16: _t->OnSaveConfig(); break;
        case 17: _t->AmiiboSettingsShowDialog((*reinterpret_cast< const Core::Frontend::CabinetParameters(*)>(_a[1])),(*reinterpret_cast< std::shared_ptr<Service::NFC::NfcDevice>(*)>(_a[2]))); break;
        case 18: _t->AmiiboSettingsRequestExit(); break;
        case 19: _t->ControllerSelectorReconfigureControllers((*reinterpret_cast< const Core::Frontend::ControllerParameters(*)>(_a[1]))); break;
        case 20: _t->ControllerSelectorRequestExit(); break;
        case 21: _t->SoftwareKeyboardInitialize((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< Core::Frontend::KeyboardInitializeParameters(*)>(_a[2]))); break;
        case 22: _t->SoftwareKeyboardShowNormal(); break;
        case 23: _t->SoftwareKeyboardShowTextCheck((*reinterpret_cast< Service::AM::Frontend::SwkbdTextCheckResult(*)>(_a[1])),(*reinterpret_cast< std::u16string(*)>(_a[2]))); break;
        case 24: _t->SoftwareKeyboardShowInline((*reinterpret_cast< Core::Frontend::InlineAppearParameters(*)>(_a[1]))); break;
        case 25: _t->SoftwareKeyboardHideInline(); break;
        case 26: _t->SoftwareKeyboardInlineTextChanged((*reinterpret_cast< Core::Frontend::InlineTextParameters(*)>(_a[1]))); break;
        case 27: _t->SoftwareKeyboardExit(); break;
        case 28: _t->ErrorDisplayDisplayError((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 29: _t->ErrorDisplayRequestExit(); break;
        case 30: _t->ProfileSelectorSelectProfile((*reinterpret_cast< const Core::Frontend::ProfileSelectParameters(*)>(_a[1]))); break;
        case 31: _t->ProfileSelectorRequestExit(); break;
        case 32: _t->WebBrowserOpenWebPage((*reinterpret_cast< const std::string(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 33: _t->WebBrowserRequestExit(); break;
        case 34: _t->OnAppFocusStateChanged((*reinterpret_cast< Qt::ApplicationState(*)>(_a[1]))); break;
        case 35: _t->OnTasStateChanged(); break;
        case 36: _t->OnStartGame(); break;
        case 37: _t->OnRestartGame(); break;
        case 38: _t->OnPauseGame(); break;
        case 39: _t->OnPauseContinueGame(); break;
        case 40: _t->OnStopGame(); break;
        case 41: _t->OnPrepareForSleep((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->OnMenuReportCompatibility(); break;
        case 43: _t->OnOpenModsPage(); break;
        case 44: _t->OnOpenQuickstartGuide(); break;
        case 45: _t->OnOpenFAQ(); break;
        case 46: _t->OnGameListLoadFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< u64(*)>(_a[2]))); break;
        case 47: _t->OnGameListOpenFolder((*reinterpret_cast< u64(*)>(_a[1])),(*reinterpret_cast< GameListOpenTarget(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3]))); break;
        case 48: _t->OnTransferableShaderCacheOpenFile((*reinterpret_cast< u64(*)>(_a[1]))); break;
        case 49: _t->OnGameListRemoveInstalledEntry((*reinterpret_cast< u64(*)>(_a[1])),(*reinterpret_cast< InstalledEntryType(*)>(_a[2]))); break;
        case 50: _t->OnGameListRemoveFile((*reinterpret_cast< u64(*)>(_a[1])),(*reinterpret_cast< GameListRemoveTarget(*)>(_a[2])),(*reinterpret_cast< const std::string(*)>(_a[3]))); break;
        case 51: _t->OnGameListRemovePlayTimeData((*reinterpret_cast< u64(*)>(_a[1]))); break;
        case 52: _t->OnGameListDumpRomFS((*reinterpret_cast< u64(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< DumpRomFSTarget(*)>(_a[3]))); break;
        case 53: _t->OnGameListVerifyIntegrity((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 54: _t->OnGameListCopyTID((*reinterpret_cast< u64(*)>(_a[1]))); break;
        case 55: _t->OnGameListNavigateToGamedbEntry((*reinterpret_cast< u64(*)>(_a[1])),(*reinterpret_cast< const CompatibilityList(*)>(_a[2]))); break;
        case 56: _t->OnGameListCreateShortcut((*reinterpret_cast< u64(*)>(_a[1])),(*reinterpret_cast< const std::string(*)>(_a[2])),(*reinterpret_cast< GameListShortcutTarget(*)>(_a[3]))); break;
        case 57: _t->OnGameListOpenDirectory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 58: _t->OnGameListAddDirectory(); break;
        case 59: _t->OnGameListShowList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: _t->OnGameListOpenPerGameProperties((*reinterpret_cast< const std::string(*)>(_a[1]))); break;
        case 61: _t->OnMenuLoadFile(); break;
        case 62: _t->OnMenuLoadFolder(); break;
        case 63: _t->IncrementInstallProgress(); break;
        case 64: _t->OnMenuInstallToNAND(); break;
        case 65: _t->OnMenuRecentFile(); break;
        case 66: _t->OnConfigure(); break;
        case 67: _t->OnConfigureTas(); break;
        case 68: _t->OnDecreaseVolume(); break;
        case 69: _t->OnIncreaseVolume(); break;
        case 70: _t->OnMute(); break;
        case 71: _t->OnTasStartStop(); break;
        case 72: _t->OnTasRecord(); break;
        case 73: _t->OnTasReset(); break;
        case 74: _t->OnToggleGraphicsAPI(); break;
        case 75: _t->OnToggleDockedMode(); break;
        case 76: _t->OnToggleGpuAccuracy(); break;
        case 77: _t->OnToggleAdaptingFilter(); break;
        case 78: _t->OnConfigurePerGame(); break;
        case 79: _t->OnLoadAmiibo(); break;
        case 80: _t->OnOpenYuzuFolder(); break;
        case 81: _t->OnVerifyInstalledContents(); break;
        case 82: _t->OnAbout(); break;
        case 83: _t->OnToggleFilterBar(); break;
        case 84: _t->OnToggleStatusBar(); break;
        case 85: _t->OnDisplayTitleBars((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 86: _t->InitializeHotkeys(); break;
        case 87: _t->ToggleFullscreen(); break;
        case 88: { bool _r = _t->UsingExclusiveFullscreen();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 89: _t->ShowFullscreen(); break;
        case 90: _t->HideFullscreen(); break;
        case 91: _t->ToggleWindowMode(); break;
        case 92: _t->ResetWindowSize((*reinterpret_cast< u32(*)>(_a[1])),(*reinterpret_cast< u32(*)>(_a[2]))); break;
        case 93: _t->ResetWindowSize720(); break;
        case 94: _t->ResetWindowSize900(); break;
        case 95: _t->ResetWindowSize1080(); break;
        case 96: _t->OnAlbum(); break;
        case 97: _t->OnCabinet((*reinterpret_cast< Service::NFP::CabinetMode(*)>(_a[1]))); break;
        case 98: _t->OnMiiEdit(); break;
        case 99: _t->OnOpenControllerMenu(); break;
        case 100: _t->OnCaptureScreenshot(); break;
        case 101: _t->OnCheckFirmwareDecryption(); break;
        case 102: _t->OnLanguageChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 103: _t->OnMouseActivity(); break;
        case 104: { bool _r = _t->OnShutdownBegin();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 105: _t->OnShutdownBeginDialog(); break;
        case 106: _t->OnEmulationStopped(); break;
        case 107: _t->OnEmulationStopTimeExpired(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GMainWindow::*)(EmuThread * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GMainWindow::EmulationStarting)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GMainWindow::EmulationStopping)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GMainWindow::UpdateThemedIcons)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GMainWindow::UpdateInstallProgress)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GMainWindow::*)(bool , const std::string & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GMainWindow::AmiiboSettingsFinished)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GMainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GMainWindow::ControllerSelectorReconfigureFinished)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GMainWindow::ErrorDisplayFinished)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GMainWindow::*)(std::optional<Common::UUID> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GMainWindow::ProfileSelectorFinishedSelection)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (GMainWindow::*)(Service::AM::Frontend::SwkbdResult , std::u16string , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GMainWindow::SoftwareKeyboardSubmitNormalText)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (GMainWindow::*)(Service::AM::Frontend::SwkbdReplyType , std::u16string , s32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GMainWindow::SoftwareKeyboardSubmitInlineText)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (GMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GMainWindow::WebBrowserExtractOfflineRomFS)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (GMainWindow::*)(Service::AM::Frontend::WebExitReason , std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GMainWindow::WebBrowserClosed)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (GMainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GMainWindow::SigInterrupt)) {
                *result = 12;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_GMainWindow.data,
    qt_meta_data_GMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int GMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 108)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 108;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 108)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 108;
    }
    return _id;
}

// SIGNAL 0
void GMainWindow::EmulationStarting(EmuThread * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GMainWindow::EmulationStopping()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GMainWindow::UpdateThemedIcons()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GMainWindow::UpdateInstallProgress()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GMainWindow::AmiiboSettingsFinished(bool _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GMainWindow::ControllerSelectorReconfigureFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GMainWindow::ErrorDisplayFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void GMainWindow::ProfileSelectorFinishedSelection(std::optional<Common::UUID> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GMainWindow::SoftwareKeyboardSubmitNormalText(Service::AM::Frontend::SwkbdResult _t1, std::u16string _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GMainWindow::SoftwareKeyboardSubmitInlineText(Service::AM::Frontend::SwkbdReplyType _t1, std::u16string _t2, s32 _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void GMainWindow::WebBrowserExtractOfflineRomFS()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void GMainWindow::WebBrowserClosed(Service::AM::Frontend::WebExitReason _t1, std::string _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GMainWindow::SigInterrupt()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
