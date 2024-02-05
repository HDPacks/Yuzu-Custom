/********************************************************************************
** Form generated from reading UI file 'main.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Install_File_NAND;
    QAction *action_Load_File;
    QAction *action_Load_Folder;
    QAction *action_Exit;
    QAction *action_Pause;
    QAction *action_Stop;
    QAction *action_Verify_installed_contents;
    QAction *action_About;
    QAction *action_Single_Window_Mode;
    QAction *action_Configure;
    QAction *action_Display_Dock_Widget_Headers;
    QAction *action_Show_Filter_Bar;
    QAction *action_Show_Status_Bar;
    QAction *action_View_Lobby;
    QAction *action_Start_Room;
    QAction *action_Leave_Room;
    QAction *action_Connect_To_Room;
    QAction *action_Show_Room;
    QAction *action_Fullscreen;
    QAction *action_Restart;
    QAction *action_Load_Amiibo;
    QAction *action_Report_Compatibility;
    QAction *action_Open_Mods_Page;
    QAction *action_Open_Quickstart_Guide;
    QAction *action_Open_FAQ;
    QAction *action_Open_yuzu_Folder;
    QAction *action_Capture_Screenshot;
    QAction *action_Load_Album;
    QAction *action_Load_Cabinet_Nickname_Owner;
    QAction *action_Load_Cabinet_Eraser;
    QAction *action_Load_Cabinet_Restorer;
    QAction *action_Load_Cabinet_Formatter;
    QAction *action_Load_Mii_Edit;
    QAction *action_Configure_Tas;
    QAction *action_Configure_Current_Game;
    QAction *action_TAS_Start;
    QAction *action_TAS_Reset;
    QAction *action_TAS_Record;
    QAction *action_Open_Controller_Menu;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_recent_files;
    QMenu *menu_Emulation;
    QMenu *menu_View;
    QAction *action_Reset_Window_Size_720;
    QAction *action_Reset_Window_Size_900;
    QAction *action_Reset_Window_Size_1080;
    QMenu *menu_Reset_Window_Size;
    QMenu *menu_View_Debugging;
    QMenu *menu_Multiplayer;
    QMenu *menu_Tools;
    QMenu *menu_cabinet_applet;
    QMenu *menuTAS;
    QMenu *menu_Help;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 720);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/yuzu.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockNestingEnabled(true);
        action_Install_File_NAND = new QAction(MainWindow);
        action_Install_File_NAND->setObjectName(QString::fromUtf8("action_Install_File_NAND"));
        action_Install_File_NAND->setEnabled(true);
        action_Load_File = new QAction(MainWindow);
        action_Load_File->setObjectName(QString::fromUtf8("action_Load_File"));
        action_Load_Folder = new QAction(MainWindow);
        action_Load_Folder->setObjectName(QString::fromUtf8("action_Load_Folder"));
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QString::fromUtf8("action_Exit"));
        action_Pause = new QAction(MainWindow);
        action_Pause->setObjectName(QString::fromUtf8("action_Pause"));
        action_Pause->setEnabled(false);
        action_Stop = new QAction(MainWindow);
        action_Stop->setObjectName(QString::fromUtf8("action_Stop"));
        action_Stop->setEnabled(false);
        action_Verify_installed_contents = new QAction(MainWindow);
        action_Verify_installed_contents->setObjectName(QString::fromUtf8("action_Verify_installed_contents"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        action_Single_Window_Mode = new QAction(MainWindow);
        action_Single_Window_Mode->setObjectName(QString::fromUtf8("action_Single_Window_Mode"));
        action_Single_Window_Mode->setCheckable(true);
        action_Configure = new QAction(MainWindow);
        action_Configure->setObjectName(QString::fromUtf8("action_Configure"));
        action_Configure->setMenuRole(QAction::PreferencesRole);
        action_Display_Dock_Widget_Headers = new QAction(MainWindow);
        action_Display_Dock_Widget_Headers->setObjectName(QString::fromUtf8("action_Display_Dock_Widget_Headers"));
        action_Display_Dock_Widget_Headers->setCheckable(true);
        action_Show_Filter_Bar = new QAction(MainWindow);
        action_Show_Filter_Bar->setObjectName(QString::fromUtf8("action_Show_Filter_Bar"));
        action_Show_Filter_Bar->setCheckable(true);
        action_Show_Status_Bar = new QAction(MainWindow);
        action_Show_Status_Bar->setObjectName(QString::fromUtf8("action_Show_Status_Bar"));
        action_Show_Status_Bar->setCheckable(true);
        action_View_Lobby = new QAction(MainWindow);
        action_View_Lobby->setObjectName(QString::fromUtf8("action_View_Lobby"));
        action_View_Lobby->setEnabled(true);
        action_Start_Room = new QAction(MainWindow);
        action_Start_Room->setObjectName(QString::fromUtf8("action_Start_Room"));
        action_Start_Room->setEnabled(true);
        action_Leave_Room = new QAction(MainWindow);
        action_Leave_Room->setObjectName(QString::fromUtf8("action_Leave_Room"));
        action_Leave_Room->setEnabled(false);
        action_Connect_To_Room = new QAction(MainWindow);
        action_Connect_To_Room->setObjectName(QString::fromUtf8("action_Connect_To_Room"));
        action_Show_Room = new QAction(MainWindow);
        action_Show_Room->setObjectName(QString::fromUtf8("action_Show_Room"));
        action_Show_Room->setEnabled(false);
        action_Fullscreen = new QAction(MainWindow);
        action_Fullscreen->setObjectName(QString::fromUtf8("action_Fullscreen"));
        action_Fullscreen->setCheckable(true);
        action_Restart = new QAction(MainWindow);
        action_Restart->setObjectName(QString::fromUtf8("action_Restart"));
        action_Restart->setEnabled(false);
        action_Load_Amiibo = new QAction(MainWindow);
        action_Load_Amiibo->setObjectName(QString::fromUtf8("action_Load_Amiibo"));
        action_Load_Amiibo->setEnabled(false);
        action_Report_Compatibility = new QAction(MainWindow);
        action_Report_Compatibility->setObjectName(QString::fromUtf8("action_Report_Compatibility"));
        action_Report_Compatibility->setEnabled(false);
        action_Report_Compatibility->setVisible(false);
        action_Open_Mods_Page = new QAction(MainWindow);
        action_Open_Mods_Page->setObjectName(QString::fromUtf8("action_Open_Mods_Page"));
        action_Open_Quickstart_Guide = new QAction(MainWindow);
        action_Open_Quickstart_Guide->setObjectName(QString::fromUtf8("action_Open_Quickstart_Guide"));
        action_Open_FAQ = new QAction(MainWindow);
        action_Open_FAQ->setObjectName(QString::fromUtf8("action_Open_FAQ"));
        action_Open_yuzu_Folder = new QAction(MainWindow);
        action_Open_yuzu_Folder->setObjectName(QString::fromUtf8("action_Open_yuzu_Folder"));
        action_Capture_Screenshot = new QAction(MainWindow);
        action_Capture_Screenshot->setObjectName(QString::fromUtf8("action_Capture_Screenshot"));
        action_Capture_Screenshot->setEnabled(false);
        action_Load_Album = new QAction(MainWindow);
        action_Load_Album->setObjectName(QString::fromUtf8("action_Load_Album"));
        action_Load_Cabinet_Nickname_Owner = new QAction(MainWindow);
        action_Load_Cabinet_Nickname_Owner->setObjectName(QString::fromUtf8("action_Load_Cabinet_Nickname_Owner"));
        action_Load_Cabinet_Eraser = new QAction(MainWindow);
        action_Load_Cabinet_Eraser->setObjectName(QString::fromUtf8("action_Load_Cabinet_Eraser"));
        action_Load_Cabinet_Restorer = new QAction(MainWindow);
        action_Load_Cabinet_Restorer->setObjectName(QString::fromUtf8("action_Load_Cabinet_Restorer"));
        action_Load_Cabinet_Formatter = new QAction(MainWindow);
        action_Load_Cabinet_Formatter->setObjectName(QString::fromUtf8("action_Load_Cabinet_Formatter"));
        action_Load_Mii_Edit = new QAction(MainWindow);
        action_Load_Mii_Edit->setObjectName(QString::fromUtf8("action_Load_Mii_Edit"));
        action_Configure_Tas = new QAction(MainWindow);
        action_Configure_Tas->setObjectName(QString::fromUtf8("action_Configure_Tas"));
        action_Configure_Tas->setMenuRole(QAction::NoRole);
        action_Configure_Current_Game = new QAction(MainWindow);
        action_Configure_Current_Game->setObjectName(QString::fromUtf8("action_Configure_Current_Game"));
        action_Configure_Current_Game->setEnabled(false);
        action_Configure_Current_Game->setMenuRole(QAction::NoRole);
        action_TAS_Start = new QAction(MainWindow);
        action_TAS_Start->setObjectName(QString::fromUtf8("action_TAS_Start"));
        action_TAS_Start->setEnabled(false);
        action_TAS_Reset = new QAction(MainWindow);
        action_TAS_Reset->setObjectName(QString::fromUtf8("action_TAS_Reset"));
        action_TAS_Reset->setEnabled(false);
        action_TAS_Record = new QAction(MainWindow);
        action_TAS_Record->setObjectName(QString::fromUtf8("action_TAS_Record"));
        action_TAS_Record->setEnabled(false);
        action_Open_Controller_Menu = new QAction(MainWindow);
        action_Open_Controller_Menu->setObjectName(QString::fromUtf8("action_Open_Controller_Menu"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 21));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_recent_files = new QMenu(menu_File);
        menu_recent_files->setObjectName(QString::fromUtf8("menu_recent_files"));
        menu_Emulation = new QMenu(menubar);
        menu_Emulation->setObjectName(QString::fromUtf8("menu_Emulation"));
        menu_View = new QMenu(menubar);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        action_Reset_Window_Size_720 = new QAction(menu_View);
        action_Reset_Window_Size_720->setObjectName(QString::fromUtf8("action_Reset_Window_Size_720"));
        action_Reset_Window_Size_900 = new QAction(menu_View);
        action_Reset_Window_Size_900->setObjectName(QString::fromUtf8("action_Reset_Window_Size_900"));
        action_Reset_Window_Size_1080 = new QAction(menu_View);
        action_Reset_Window_Size_1080->setObjectName(QString::fromUtf8("action_Reset_Window_Size_1080"));
        menu_Reset_Window_Size = new QMenu(menu_View);
        menu_Reset_Window_Size->setObjectName(QString::fromUtf8("menu_Reset_Window_Size"));
        menu_View_Debugging = new QMenu(menu_View);
        menu_View_Debugging->setObjectName(QString::fromUtf8("menu_View_Debugging"));
        menu_Multiplayer = new QMenu(menubar);
        menu_Multiplayer->setObjectName(QString::fromUtf8("menu_Multiplayer"));
        menu_Multiplayer->setEnabled(true);
        menu_Tools = new QMenu(menubar);
        menu_Tools->setObjectName(QString::fromUtf8("menu_Tools"));
        menu_cabinet_applet = new QMenu(menu_Tools);
        menu_cabinet_applet->setObjectName(QString::fromUtf8("menu_cabinet_applet"));
        menuTAS = new QMenu(menu_Tools);
        menuTAS->setObjectName(QString::fromUtf8("menuTAS"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Emulation->menuAction());
        menubar->addAction(menu_View->menuAction());
        menubar->addAction(menu_Tools->menuAction());
        menubar->addAction(menu_Multiplayer->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menu_File->addAction(action_Install_File_NAND);
        menu_File->addSeparator();
        menu_File->addAction(action_Load_File);
        menu_File->addAction(action_Load_Folder);
        menu_File->addSeparator();
        menu_File->addAction(menu_recent_files->menuAction());
        menu_File->addSeparator();
        menu_File->addAction(action_Load_Amiibo);
        menu_File->addSeparator();
        menu_File->addAction(action_Open_yuzu_Folder);
        menu_File->addSeparator();
        menu_File->addAction(action_Exit);
        menu_Emulation->addAction(action_Pause);
        menu_Emulation->addAction(action_Stop);
        menu_Emulation->addAction(action_Restart);
        menu_Emulation->addSeparator();
        menu_Emulation->addAction(action_Configure);
        menu_Emulation->addAction(action_Configure_Current_Game);
        menu_View->addAction(action_Fullscreen);
        menu_View->addAction(action_Single_Window_Mode);
        menu_View->addAction(action_Display_Dock_Widget_Headers);
        menu_View->addAction(action_Show_Filter_Bar);
        menu_View->addAction(action_Show_Status_Bar);
        menu_View->addSeparator();
        menu_View->addAction(menu_Reset_Window_Size->menuAction());
        menu_View->addAction(menu_View_Debugging->menuAction());
        menu_Multiplayer->addAction(action_View_Lobby);
        menu_Multiplayer->addAction(action_Start_Room);
        menu_Multiplayer->addAction(action_Connect_To_Room);
        menu_Multiplayer->addSeparator();
        menu_Multiplayer->addAction(action_Show_Room);
        menu_Multiplayer->addAction(action_Leave_Room);
        menu_Tools->addAction(action_Verify_installed_contents);
        menu_Tools->addSeparator();
        menu_Tools->addAction(menu_cabinet_applet->menuAction());
        menu_Tools->addAction(action_Load_Album);
        menu_Tools->addAction(action_Load_Mii_Edit);
        menu_Tools->addAction(action_Open_Controller_Menu);
        menu_Tools->addSeparator();
        menu_Tools->addAction(action_Capture_Screenshot);
        menu_Tools->addAction(menuTAS->menuAction());
        menu_cabinet_applet->addAction(action_Load_Cabinet_Nickname_Owner);
        menu_cabinet_applet->addAction(action_Load_Cabinet_Eraser);
        menu_cabinet_applet->addAction(action_Load_Cabinet_Restorer);
        menu_cabinet_applet->addAction(action_Load_Cabinet_Formatter);
        menuTAS->addAction(action_TAS_Start);
        menuTAS->addAction(action_TAS_Record);
        menuTAS->addAction(action_TAS_Reset);
        menuTAS->addSeparator();
        menuTAS->addAction(action_Configure_Tas);
        menu_Help->addAction(action_Report_Compatibility);
        menu_Help->addAction(action_Open_Mods_Page);
        menu_Help->addAction(action_Open_Quickstart_Guide);
        menu_Help->addAction(action_Open_FAQ);
        menu_Help->addSeparator();
        menu_Help->addAction(action_About);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "yuzu", nullptr));
        action_Install_File_NAND->setText(QCoreApplication::translate("MainWindow", "&Install Files to NAND...", nullptr));
        action_Load_File->setText(QCoreApplication::translate("MainWindow", "L&oad File...", nullptr));
        action_Load_Folder->setText(QCoreApplication::translate("MainWindow", "Load &Folder...", nullptr));
        action_Exit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
        action_Pause->setText(QCoreApplication::translate("MainWindow", "&Pause", nullptr));
        action_Stop->setText(QCoreApplication::translate("MainWindow", "&Stop", nullptr));
        action_Verify_installed_contents->setText(QCoreApplication::translate("MainWindow", "&Verify Installed Contents", nullptr));
        action_About->setText(QCoreApplication::translate("MainWindow", "&About yuzu", nullptr));
        action_Single_Window_Mode->setText(QCoreApplication::translate("MainWindow", "Single &Window Mode", nullptr));
        action_Configure->setText(QCoreApplication::translate("MainWindow", "Con&figure...", nullptr));
        action_Display_Dock_Widget_Headers->setText(QCoreApplication::translate("MainWindow", "Display D&ock Widget Headers", nullptr));
        action_Show_Filter_Bar->setText(QCoreApplication::translate("MainWindow", "Show &Filter Bar", nullptr));
        action_Show_Status_Bar->setText(QCoreApplication::translate("MainWindow", "Show &Status Bar", nullptr));
        action_Show_Status_Bar->setIconText(QCoreApplication::translate("MainWindow", "Show Status Bar", nullptr));
        action_View_Lobby->setText(QCoreApplication::translate("MainWindow", "&Browse Public Game Lobby", nullptr));
        action_Start_Room->setText(QCoreApplication::translate("MainWindow", "&Create Room", nullptr));
        action_Leave_Room->setText(QCoreApplication::translate("MainWindow", "&Leave Room", nullptr));
        action_Connect_To_Room->setText(QCoreApplication::translate("MainWindow", "&Direct Connect to Room", nullptr));
        action_Show_Room->setText(QCoreApplication::translate("MainWindow", "&Show Current Room", nullptr));
        action_Fullscreen->setText(QCoreApplication::translate("MainWindow", "F&ullscreen", nullptr));
        action_Restart->setText(QCoreApplication::translate("MainWindow", "&Restart", nullptr));
        action_Load_Amiibo->setText(QCoreApplication::translate("MainWindow", "Load/Remove &Amiibo...", nullptr));
        action_Report_Compatibility->setText(QCoreApplication::translate("MainWindow", "&Report Compatibility", nullptr));
        action_Open_Mods_Page->setText(QCoreApplication::translate("MainWindow", "Open &Mods Page", nullptr));
        action_Open_Quickstart_Guide->setText(QCoreApplication::translate("MainWindow", "Open &Quickstart Guide", nullptr));
        action_Open_FAQ->setText(QCoreApplication::translate("MainWindow", "&FAQ", nullptr));
        action_Open_yuzu_Folder->setText(QCoreApplication::translate("MainWindow", "Open &yuzu Folder", nullptr));
        action_Capture_Screenshot->setText(QCoreApplication::translate("MainWindow", "&Capture Screenshot", nullptr));
        action_Load_Album->setText(QCoreApplication::translate("MainWindow", "Open &Album", nullptr));
        action_Load_Cabinet_Nickname_Owner->setText(QCoreApplication::translate("MainWindow", "&Set Nickname and Owner", nullptr));
        action_Load_Cabinet_Eraser->setText(QCoreApplication::translate("MainWindow", "&Delete Game Data", nullptr));
        action_Load_Cabinet_Restorer->setText(QCoreApplication::translate("MainWindow", "&Restore Amiibo", nullptr));
        action_Load_Cabinet_Formatter->setText(QCoreApplication::translate("MainWindow", "&Format Amiibo", nullptr));
        action_Load_Mii_Edit->setText(QCoreApplication::translate("MainWindow", "Open &Mii Editor", nullptr));
        action_Configure_Tas->setText(QCoreApplication::translate("MainWindow", "&Configure TAS...", nullptr));
        action_Configure_Current_Game->setText(QCoreApplication::translate("MainWindow", "Configure C&urrent Game...", nullptr));
        action_TAS_Start->setText(QCoreApplication::translate("MainWindow", "&Start", nullptr));
        action_TAS_Reset->setText(QCoreApplication::translate("MainWindow", "&Reset", nullptr));
        action_TAS_Record->setText(QCoreApplication::translate("MainWindow", "R&ecord", nullptr));
        action_Open_Controller_Menu->setText(QCoreApplication::translate("MainWindow", "Open &Controller Menu", nullptr));
        menu_File->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menu_recent_files->setTitle(QCoreApplication::translate("MainWindow", "&Recent Files", nullptr));
        menu_Emulation->setTitle(QCoreApplication::translate("MainWindow", "&Emulation", nullptr));
        menu_View->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        action_Reset_Window_Size_720->setText(QCoreApplication::translate("MainWindow", "Reset Window Size to &720p", nullptr));
        action_Reset_Window_Size_720->setIconText(QCoreApplication::translate("MainWindow", "Reset Window Size to 720p", nullptr));
        action_Reset_Window_Size_900->setText(QCoreApplication::translate("MainWindow", "Reset Window Size to &900p", nullptr));
        action_Reset_Window_Size_900->setIconText(QCoreApplication::translate("MainWindow", "Reset Window Size to 900p", nullptr));
        action_Reset_Window_Size_1080->setText(QCoreApplication::translate("MainWindow", "Reset Window Size to &1080p", nullptr));
        action_Reset_Window_Size_1080->setIconText(QCoreApplication::translate("MainWindow", "Reset Window Size to 1080p", nullptr));
        menu_Reset_Window_Size->setTitle(QCoreApplication::translate("MainWindow", "&Reset Window Size", nullptr));
        menu_View_Debugging->setTitle(QCoreApplication::translate("MainWindow", "&Debugging", nullptr));
        menu_Multiplayer->setTitle(QCoreApplication::translate("MainWindow", "&Multiplayer", nullptr));
        menu_Tools->setTitle(QCoreApplication::translate("MainWindow", "&Tools", nullptr));
        menu_cabinet_applet->setTitle(QCoreApplication::translate("MainWindow", "&Amiibo", nullptr));
        menuTAS->setTitle(QCoreApplication::translate("MainWindow", "&TAS", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_H
