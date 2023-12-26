/********************************************************************************
** Form generated from reading UI file 'configure_debug.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_DEBUG_H
#define UI_CONFIGURE_DEBUG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureDebug
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_1;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QWidget *debug_widget;
    QVBoxLayout *verticalLayout;
    QCheckBox *toggle_gdbstub;
    QWidget *horizontalWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QSpinBox *gdbport_spinbox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_1;
    QPushButton *open_log_button;
    QWidget *logging_widget;
    QHBoxLayout *horizontalLayout_1;
    QLabel *label_1;
    QLineEdit *log_filter_edit;
    QCheckBox *extended_logging;
    QCheckBox *toggle_console;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *homebrew_args_edit;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QCheckBox *disable_loop_safety_checks;
    QCheckBox *dump_macros;
    QCheckBox *enable_nsight_aftermath;
    QCheckBox *dump_shaders;
    QCheckBox *enable_renderdoc_hotkey;
    QCheckBox *disable_macro_jit;
    QCheckBox *disable_macro_hle;
    QCheckBox *enable_graphics_debugging;
    QSpacerItem *verticalSpacer_5;
    QCheckBox *enable_shader_feedback;
    QCheckBox *disable_buffer_reorder;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_4;
    QCheckBox *perform_vulkan_check;
    QCheckBox *disable_web_applet;
    QCheckBox *enable_all_controllers;
    QCheckBox *use_auto_stub;
    QCheckBox *quest_flag;
    QCheckBox *enable_cpu_debugging;
    QCheckBox *use_debug_asserts;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_3;
    QCheckBox *fs_access_log;
    QCheckBox *dump_audio_commands;
    QCheckBox *reporting_services;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;

    void setupUi(QScrollArea *ConfigureDebug)
    {
        if (ConfigureDebug->objectName().isEmpty())
            ConfigureDebug->setObjectName(QString::fromUtf8("ConfigureDebug"));
        ConfigureDebug->resize(831, 760);
        ConfigureDebug->setWidgetResizable(true);
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 842, 741));
        verticalLayout_1 = new QVBoxLayout(widget);
        verticalLayout_1->setObjectName(QString::fromUtf8("verticalLayout_1"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        debug_widget = new QWidget(groupBox);
        debug_widget->setObjectName(QString::fromUtf8("debug_widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(debug_widget->sizePolicy().hasHeightForWidth());
        debug_widget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(debug_widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        toggle_gdbstub = new QCheckBox(debug_widget);
        toggle_gdbstub->setObjectName(QString::fromUtf8("toggle_gdbstub"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toggle_gdbstub->sizePolicy().hasHeightForWidth());
        toggle_gdbstub->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(toggle_gdbstub);

        horizontalWidget_3 = new QWidget(debug_widget);
        horizontalWidget_3->setObjectName(QString::fromUtf8("horizontalWidget_3"));
        sizePolicy1.setHeightForWidth(horizontalWidget_3->sizePolicy().hasHeightForWidth());
        horizontalWidget_3->setSizePolicy(sizePolicy1);
        horizontalLayout_3 = new QHBoxLayout(horizontalWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(horizontalWidget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(label_11);

        gdbport_spinbox = new QSpinBox(horizontalWidget_3);
        gdbport_spinbox->setObjectName(QString::fromUtf8("gdbport_spinbox"));
        sizePolicy1.setHeightForWidth(gdbport_spinbox->sizePolicy().hasHeightForWidth());
        gdbport_spinbox->setSizePolicy(sizePolicy1);
        gdbport_spinbox->setMinimum(1024);
        gdbport_spinbox->setMaximum(65535);

        horizontalLayout_3->addWidget(gdbport_spinbox);


        verticalLayout->addWidget(horizontalWidget_3);


        verticalLayout_3->addWidget(debug_widget);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(widget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy4);
        gridLayout_1 = new QGridLayout(groupBox_2);
        gridLayout_1->setObjectName(QString::fromUtf8("gridLayout_1"));
        open_log_button = new QPushButton(groupBox_2);
        open_log_button->setObjectName(QString::fromUtf8("open_log_button"));

        gridLayout_1->addWidget(open_log_button, 1, 1, 1, 1);

        logging_widget = new QWidget(groupBox_2);
        logging_widget->setObjectName(QString::fromUtf8("logging_widget"));
        sizePolicy1.setHeightForWidth(logging_widget->sizePolicy().hasHeightForWidth());
        logging_widget->setSizePolicy(sizePolicy1);
        horizontalLayout_1 = new QHBoxLayout(logging_widget);
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        horizontalLayout_1->setContentsMargins(0, 0, 0, 0);
        label_1 = new QLabel(logging_widget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        sizePolicy.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy);

        horizontalLayout_1->addWidget(label_1);

        log_filter_edit = new QLineEdit(logging_widget);
        log_filter_edit->setObjectName(QString::fromUtf8("log_filter_edit"));

        horizontalLayout_1->addWidget(log_filter_edit);


        gridLayout_1->addWidget(logging_widget, 0, 0, 1, 2);

        extended_logging = new QCheckBox(groupBox_2);
        extended_logging->setObjectName(QString::fromUtf8("extended_logging"));
        extended_logging->setEnabled(true);

        gridLayout_1->addWidget(extended_logging, 2, 0, 1, 1);

        toggle_console = new QCheckBox(groupBox_2);
        toggle_console->setObjectName(QString::fromUtf8("toggle_console"));

        gridLayout_1->addWidget(toggle_console, 1, 0, 1, 1);


        horizontalLayout->addWidget(groupBox_2);


        verticalLayout_1->addLayout(horizontalLayout);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_5 = new QVBoxLayout(groupBox_3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        homebrew_args_edit = new QLineEdit(groupBox_3);
        homebrew_args_edit->setObjectName(QString::fromUtf8("homebrew_args_edit"));

        horizontalLayout_4->addWidget(homebrew_args_edit);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_1->addWidget(groupBox_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox_4 = new QGroupBox(widget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        disable_loop_safety_checks = new QCheckBox(groupBox_4);
        disable_loop_safety_checks->setObjectName(QString::fromUtf8("disable_loop_safety_checks"));

        gridLayout_2->addWidget(disable_loop_safety_checks, 4, 0, 1, 1);

        dump_macros = new QCheckBox(groupBox_4);
        dump_macros->setObjectName(QString::fromUtf8("dump_macros"));
        dump_macros->setEnabled(true);

        gridLayout_2->addWidget(dump_macros, 8, 0, 1, 1);

        enable_nsight_aftermath = new QCheckBox(groupBox_4);
        enable_nsight_aftermath->setObjectName(QString::fromUtf8("enable_nsight_aftermath"));

        gridLayout_2->addWidget(enable_nsight_aftermath, 3, 0, 1, 1);

        dump_shaders = new QCheckBox(groupBox_4);
        dump_shaders->setObjectName(QString::fromUtf8("dump_shaders"));
        dump_shaders->setEnabled(true);

        gridLayout_2->addWidget(dump_shaders, 6, 0, 1, 1);

        enable_renderdoc_hotkey = new QCheckBox(groupBox_4);
        enable_renderdoc_hotkey->setObjectName(QString::fromUtf8("enable_renderdoc_hotkey"));

        gridLayout_2->addWidget(enable_renderdoc_hotkey, 1, 0, 1, 1);

        disable_macro_jit = new QCheckBox(groupBox_4);
        disable_macro_jit->setObjectName(QString::fromUtf8("disable_macro_jit"));
        disable_macro_jit->setEnabled(true);

        gridLayout_2->addWidget(disable_macro_jit, 7, 0, 1, 1);

        disable_macro_hle = new QCheckBox(groupBox_4);
        disable_macro_hle->setObjectName(QString::fromUtf8("disable_macro_hle"));
        disable_macro_hle->setEnabled(true);

        gridLayout_2->addWidget(disable_macro_hle, 9, 0, 1, 1);

        enable_graphics_debugging = new QCheckBox(groupBox_4);
        enable_graphics_debugging->setObjectName(QString::fromUtf8("enable_graphics_debugging"));
        enable_graphics_debugging->setEnabled(true);

        gridLayout_2->addWidget(enable_graphics_debugging, 0, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer_5, 10, 0, 1, 1);

        enable_shader_feedback = new QCheckBox(groupBox_4);
        enable_shader_feedback->setObjectName(QString::fromUtf8("enable_shader_feedback"));

        gridLayout_2->addWidget(enable_shader_feedback, 2, 0, 1, 1);

        disable_buffer_reorder = new QCheckBox(groupBox_4);
        disable_buffer_reorder->setObjectName(QString::fromUtf8("disable_buffer_reorder"));

        gridLayout_2->addWidget(disable_buffer_reorder, 5, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_4);

        groupBox_6 = new QGroupBox(widget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_4 = new QGridLayout(groupBox_6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        perform_vulkan_check = new QCheckBox(groupBox_6);
        perform_vulkan_check->setObjectName(QString::fromUtf8("perform_vulkan_check"));

        gridLayout_4->addWidget(perform_vulkan_check, 3, 0, 1, 1);

        disable_web_applet = new QCheckBox(groupBox_6);
        disable_web_applet->setObjectName(QString::fromUtf8("disable_web_applet"));

        gridLayout_4->addWidget(disable_web_applet, 4, 0, 1, 1);

        enable_all_controllers = new QCheckBox(groupBox_6);
        enable_all_controllers->setObjectName(QString::fromUtf8("enable_all_controllers"));

        gridLayout_4->addWidget(enable_all_controllers, 5, 0, 1, 1);

        use_auto_stub = new QCheckBox(groupBox_6);
        use_auto_stub->setObjectName(QString::fromUtf8("use_auto_stub"));

        gridLayout_4->addWidget(use_auto_stub, 6, 0, 1, 1);

        quest_flag = new QCheckBox(groupBox_6);
        quest_flag->setObjectName(QString::fromUtf8("quest_flag"));

        gridLayout_4->addWidget(quest_flag, 0, 0, 1, 1);

        enable_cpu_debugging = new QCheckBox(groupBox_6);
        enable_cpu_debugging->setObjectName(QString::fromUtf8("enable_cpu_debugging"));

        gridLayout_4->addWidget(enable_cpu_debugging, 1, 0, 1, 1);

        use_debug_asserts = new QCheckBox(groupBox_6);
        use_debug_asserts->setObjectName(QString::fromUtf8("use_debug_asserts"));

        gridLayout_4->addWidget(use_debug_asserts, 2, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_4, 7, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_6);

        groupBox_5 = new QGroupBox(widget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_3 = new QGridLayout(groupBox_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        fs_access_log = new QCheckBox(groupBox_5);
        fs_access_log->setObjectName(QString::fromUtf8("fs_access_log"));

        gridLayout_3->addWidget(fs_access_log, 0, 0, 1, 1);

        dump_audio_commands = new QCheckBox(groupBox_5);
        dump_audio_commands->setObjectName(QString::fromUtf8("dump_audio_commands"));

        gridLayout_3->addWidget(dump_audio_commands, 3, 0, 1, 1);

        reporting_services = new QCheckBox(groupBox_5);
        reporting_services->setObjectName(QString::fromUtf8("reporting_services"));

        gridLayout_3->addWidget(reporting_services, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 5, 0, 1, 1);


        horizontalLayout_2->addWidget(groupBox_5);


        verticalLayout_1->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_1->addItem(verticalSpacer);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy4.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy4);
        QFont font;
        font.setItalic(true);
        label_5->setFont(font);
        label_5->setIndent(20);

        verticalLayout_1->addWidget(label_5);

        ConfigureDebug->setWidget(widget);
        QWidget::setTabOrder(log_filter_edit, toggle_console);
        QWidget::setTabOrder(toggle_console, extended_logging);
        QWidget::setTabOrder(extended_logging, open_log_button);
        QWidget::setTabOrder(open_log_button, homebrew_args_edit);
        QWidget::setTabOrder(homebrew_args_edit, enable_graphics_debugging);
        QWidget::setTabOrder(enable_graphics_debugging, enable_shader_feedback);
        QWidget::setTabOrder(enable_shader_feedback, enable_nsight_aftermath);
        QWidget::setTabOrder(enable_nsight_aftermath, fs_access_log);
        QWidget::setTabOrder(fs_access_log, reporting_services);
        QWidget::setTabOrder(reporting_services, quest_flag);
        QWidget::setTabOrder(quest_flag, enable_cpu_debugging);
        QWidget::setTabOrder(enable_cpu_debugging, use_debug_asserts);

        retranslateUi(ConfigureDebug);

        QMetaObject::connectSlotsByName(ConfigureDebug);
    } // setupUi

    void retranslateUi(QScrollArea *ConfigureDebug)
    {
        groupBox->setTitle(QCoreApplication::translate("ConfigureDebug", "Debugger", nullptr));
        toggle_gdbstub->setText(QCoreApplication::translate("ConfigureDebug", "Enable GDB Stub", nullptr));
        label_11->setText(QCoreApplication::translate("ConfigureDebug", "Port:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ConfigureDebug", "Logging", nullptr));
        open_log_button->setText(QCoreApplication::translate("ConfigureDebug", "Open Log Location", nullptr));
        label_1->setText(QCoreApplication::translate("ConfigureDebug", "Global Log Filter", nullptr));
#if QT_CONFIG(tooltip)
        extended_logging->setToolTip(QCoreApplication::translate("ConfigureDebug", "When checked, the max size of the log increases from 100 MB to 1 GB", nullptr));
#endif // QT_CONFIG(tooltip)
        extended_logging->setText(QCoreApplication::translate("ConfigureDebug", "Enable Extended Logging**", nullptr));
        toggle_console->setText(QCoreApplication::translate("ConfigureDebug", "Show Log in Console", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ConfigureDebug", "Homebrew", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigureDebug", "Arguments String", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ConfigureDebug", "Graphics", nullptr));
#if QT_CONFIG(tooltip)
        disable_loop_safety_checks->setToolTip(QCoreApplication::translate("ConfigureDebug", "When checked, it executes shaders without loop logic changes", nullptr));
#endif // QT_CONFIG(tooltip)
        disable_loop_safety_checks->setText(QCoreApplication::translate("ConfigureDebug", "Disable Loop safety checks", nullptr));
#if QT_CONFIG(tooltip)
        dump_macros->setToolTip(QCoreApplication::translate("ConfigureDebug", "When checked, it will dump all the macro programs of the GPU", nullptr));
#endif // QT_CONFIG(tooltip)
        dump_macros->setText(QCoreApplication::translate("ConfigureDebug", "Dump Maxwell Macros", nullptr));
#if QT_CONFIG(tooltip)
        enable_nsight_aftermath->setToolTip(QCoreApplication::translate("ConfigureDebug", "When checked, it enables Nsight Aftermath crash dumps", nullptr));
#endif // QT_CONFIG(tooltip)
        enable_nsight_aftermath->setText(QCoreApplication::translate("ConfigureDebug", "Enable Nsight Aftermath", nullptr));
#if QT_CONFIG(tooltip)
        dump_shaders->setToolTip(QCoreApplication::translate("ConfigureDebug", "When checked, it will dump all the original assembler shaders from the disk shader cache or game as found", nullptr));
#endif // QT_CONFIG(tooltip)
        dump_shaders->setText(QCoreApplication::translate("ConfigureDebug", "Dump Game Shaders", nullptr));
        enable_renderdoc_hotkey->setText(QCoreApplication::translate("ConfigureDebug", "Enable Renderdoc Hotkey", nullptr));
#if QT_CONFIG(tooltip)
        disable_macro_jit->setToolTip(QCoreApplication::translate("ConfigureDebug", "When checked, it disables the macro Just In Time compiler. Enabling this makes games run slower", nullptr));
#endif // QT_CONFIG(tooltip)
        disable_macro_jit->setText(QCoreApplication::translate("ConfigureDebug", "Disable Macro JIT", nullptr));
#if QT_CONFIG(tooltip)
        disable_macro_hle->setToolTip(QCoreApplication::translate("ConfigureDebug", "When checked, it disables the macro HLE functions. Enabling this makes games run slower", nullptr));
#endif // QT_CONFIG(tooltip)
        disable_macro_hle->setText(QCoreApplication::translate("ConfigureDebug", "Disable Macro HLE", nullptr));
#if QT_CONFIG(tooltip)
        enable_graphics_debugging->setToolTip(QCoreApplication::translate("ConfigureDebug", "When checked, the graphics API enters a slower debugging mode", nullptr));
#endif // QT_CONFIG(tooltip)
        enable_graphics_debugging->setText(QCoreApplication::translate("ConfigureDebug", "Enable Graphics Debugging", nullptr));
#if QT_CONFIG(tooltip)
        enable_shader_feedback->setToolTip(QCoreApplication::translate("ConfigureDebug", "When checked, yuzu will log statistics about the compiled pipeline cache", nullptr));
#endif // QT_CONFIG(tooltip)
        enable_shader_feedback->setText(QCoreApplication::translate("ConfigureDebug", "Enable Shader Feedback", nullptr));
#if QT_CONFIG(tooltip)
        disable_buffer_reorder->setToolTip(QCoreApplication::translate("ConfigureDebug", "<html><head/><body><p>When checked, disables reordering of mapped memory uploads which allows to associate uploads with specific draws. May reduce performance in some cases.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        disable_buffer_reorder->setText(QCoreApplication::translate("ConfigureDebug", "Disable Buffer Reorder", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("ConfigureDebug", "Advanced", nullptr));
#if QT_CONFIG(tooltip)
        perform_vulkan_check->setToolTip(QCoreApplication::translate("ConfigureDebug", "Enables yuzu to check for a working Vulkan environment when the program starts up. Disable this if this is causing issues with external programs seeing yuzu.", nullptr));
#endif // QT_CONFIG(tooltip)
        perform_vulkan_check->setText(QCoreApplication::translate("ConfigureDebug", "Perform Startup Vulkan Check", nullptr));
        disable_web_applet->setText(QCoreApplication::translate("ConfigureDebug", "Disable Web Applet", nullptr));
        enable_all_controllers->setText(QCoreApplication::translate("ConfigureDebug", "Enable All Controller Types", nullptr));
        use_auto_stub->setText(QCoreApplication::translate("ConfigureDebug", "Enable Auto-Stub**", nullptr));
        quest_flag->setText(QCoreApplication::translate("ConfigureDebug", "Kiosk (Quest) Mode", nullptr));
        enable_cpu_debugging->setText(QCoreApplication::translate("ConfigureDebug", "Enable CPU Debugging", nullptr));
        use_debug_asserts->setText(QCoreApplication::translate("ConfigureDebug", "Enable Debug Asserts", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("ConfigureDebug", "Debugging", nullptr));
        fs_access_log->setText(QCoreApplication::translate("ConfigureDebug", "Enable FS Access Log", nullptr));
#if QT_CONFIG(tooltip)
        dump_audio_commands->setToolTip(QCoreApplication::translate("ConfigureDebug", "Enable this to output the latest generated audio command list to the console. Only affects games using the audio renderer.", nullptr));
#endif // QT_CONFIG(tooltip)
        dump_audio_commands->setText(QCoreApplication::translate("ConfigureDebug", "Dump Audio Commands To Console**", nullptr));
        reporting_services->setText(QCoreApplication::translate("ConfigureDebug", "Enable Verbose Reporting Services**", nullptr));
        label_5->setText(QCoreApplication::translate("ConfigureDebug", "**This will be reset automatically when yuzu closes.", nullptr));
        (void)ConfigureDebug;
    } // retranslateUi

};

namespace Ui {
    class ConfigureDebug: public Ui_ConfigureDebug {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_DEBUG_H
