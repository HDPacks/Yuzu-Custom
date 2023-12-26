/********************************************************************************
** Form generated from reading UI file 'configure_cpu_debug.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_CPU_DEBUG_H
#define UI_CONFIGURE_CPU_DEBUG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureCpuDebug
{
public:
    QVBoxLayout *vboxLayout;
    QVBoxLayout *vboxLayout1;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout2;
    QLabel *label;
    QCheckBox *cpuopt_page_tables;
    QCheckBox *cpuopt_block_linking;
    QCheckBox *cpuopt_return_stack_buffer;
    QCheckBox *cpuopt_fast_dispatcher;
    QCheckBox *cpuopt_context_elimination;
    QCheckBox *cpuopt_const_prop;
    QCheckBox *cpuopt_misc_ir;
    QCheckBox *cpuopt_reduce_misalign_checks;
    QCheckBox *cpuopt_fastmem;
    QCheckBox *cpuopt_fastmem_exclusives;
    QCheckBox *cpuopt_recompile_exclusives;
    QCheckBox *cpuopt_ignore_memory_aborts;
    QSpacerItem *verticalSpacer;
    QLabel *label_disable_info;

    void setupUi(QWidget *ConfigureCpuDebug)
    {
        if (ConfigureCpuDebug->objectName().isEmpty())
            ConfigureCpuDebug->setObjectName(QString::fromUtf8("ConfigureCpuDebug"));
        ConfigureCpuDebug->resize(592, 503);
        vboxLayout = new QVBoxLayout(ConfigureCpuDebug);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        groupBox = new QGroupBox(ConfigureCpuDebug);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout2 = new QVBoxLayout(groupBox);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(false);

        vboxLayout2->addWidget(label);

        cpuopt_page_tables = new QCheckBox(groupBox);
        cpuopt_page_tables->setObjectName(QString::fromUtf8("cpuopt_page_tables"));

        vboxLayout2->addWidget(cpuopt_page_tables);

        cpuopt_block_linking = new QCheckBox(groupBox);
        cpuopt_block_linking->setObjectName(QString::fromUtf8("cpuopt_block_linking"));

        vboxLayout2->addWidget(cpuopt_block_linking);

        cpuopt_return_stack_buffer = new QCheckBox(groupBox);
        cpuopt_return_stack_buffer->setObjectName(QString::fromUtf8("cpuopt_return_stack_buffer"));

        vboxLayout2->addWidget(cpuopt_return_stack_buffer);

        cpuopt_fast_dispatcher = new QCheckBox(groupBox);
        cpuopt_fast_dispatcher->setObjectName(QString::fromUtf8("cpuopt_fast_dispatcher"));

        vboxLayout2->addWidget(cpuopt_fast_dispatcher);

        cpuopt_context_elimination = new QCheckBox(groupBox);
        cpuopt_context_elimination->setObjectName(QString::fromUtf8("cpuopt_context_elimination"));

        vboxLayout2->addWidget(cpuopt_context_elimination);

        cpuopt_const_prop = new QCheckBox(groupBox);
        cpuopt_const_prop->setObjectName(QString::fromUtf8("cpuopt_const_prop"));

        vboxLayout2->addWidget(cpuopt_const_prop);

        cpuopt_misc_ir = new QCheckBox(groupBox);
        cpuopt_misc_ir->setObjectName(QString::fromUtf8("cpuopt_misc_ir"));

        vboxLayout2->addWidget(cpuopt_misc_ir);

        cpuopt_reduce_misalign_checks = new QCheckBox(groupBox);
        cpuopt_reduce_misalign_checks->setObjectName(QString::fromUtf8("cpuopt_reduce_misalign_checks"));

        vboxLayout2->addWidget(cpuopt_reduce_misalign_checks);

        cpuopt_fastmem = new QCheckBox(groupBox);
        cpuopt_fastmem->setObjectName(QString::fromUtf8("cpuopt_fastmem"));

        vboxLayout2->addWidget(cpuopt_fastmem);

        cpuopt_fastmem_exclusives = new QCheckBox(groupBox);
        cpuopt_fastmem_exclusives->setObjectName(QString::fromUtf8("cpuopt_fastmem_exclusives"));

        vboxLayout2->addWidget(cpuopt_fastmem_exclusives);

        cpuopt_recompile_exclusives = new QCheckBox(groupBox);
        cpuopt_recompile_exclusives->setObjectName(QString::fromUtf8("cpuopt_recompile_exclusives"));

        vboxLayout2->addWidget(cpuopt_recompile_exclusives);

        cpuopt_ignore_memory_aborts = new QCheckBox(groupBox);
        cpuopt_ignore_memory_aborts->setObjectName(QString::fromUtf8("cpuopt_ignore_memory_aborts"));

        vboxLayout2->addWidget(cpuopt_ignore_memory_aborts);


        vboxLayout1->addWidget(groupBox);


        vboxLayout->addLayout(vboxLayout1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer);

        label_disable_info = new QLabel(ConfigureCpuDebug);
        label_disable_info->setObjectName(QString::fromUtf8("label_disable_info"));
        label_disable_info->setWordWrap(true);

        vboxLayout->addWidget(label_disable_info);


        retranslateUi(ConfigureCpuDebug);

        QMetaObject::connectSlotsByName(ConfigureCpuDebug);
    } // setupUi

    void retranslateUi(QWidget *ConfigureCpuDebug)
    {
        ConfigureCpuDebug->setWindowTitle(QCoreApplication::translate("ConfigureCpuDebug", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigureCpuDebug->setAccessibleName(QCoreApplication::translate("ConfigureCpuDebug", "CPU", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox->setTitle(QCoreApplication::translate("ConfigureCpuDebug", "Toggle CPU Optimizations", nullptr));
        label->setText(QCoreApplication::translate("ConfigureCpuDebug", "<html><head/><body><p><span style=\" font-weight:600;\">For debugging only.</span><br/>If you're not sure what these do, keep all of these enabled. <br/>These settings, when disabled, only take effect when CPU Debugging is enabled. </p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        cpuopt_page_tables->setToolTip(QCoreApplication::translate("ConfigureCpuDebug", "\n"
"            <div style=\"white-space: nowrap\">This optimization speeds up memory accesses by the guest program.</div>\n"
"            <div style=\"white-space: nowrap\">Enabling it inlines accesses to PageTable::pointers into emitted code.</div>\n"
"            <div style=\"white-space: nowrap\">Disabling this forces all memory accesses to go through the Memory::Read/Memory::Write functions.</div>\n"
"           ", nullptr));
#endif // QT_CONFIG(tooltip)
        cpuopt_page_tables->setText(QCoreApplication::translate("ConfigureCpuDebug", "Enable inline page tables", nullptr));
#if QT_CONFIG(tooltip)
        cpuopt_block_linking->setToolTip(QCoreApplication::translate("ConfigureCpuDebug", "\n"
"            <div>This optimization avoids dispatcher lookups by allowing emitted basic blocks to jump directly to other basic blocks if the destination PC is static.</div>\n"
"           ", nullptr));
#endif // QT_CONFIG(tooltip)
        cpuopt_block_linking->setText(QCoreApplication::translate("ConfigureCpuDebug", "Enable block linking", nullptr));
#if QT_CONFIG(tooltip)
        cpuopt_return_stack_buffer->setToolTip(QCoreApplication::translate("ConfigureCpuDebug", "\n"
"            <div>This optimization avoids dispatcher lookups by keeping track potential return addresses of BL instructions. This approximates what happens with a return stack buffer on a real CPU.</div>\n"
"           ", nullptr));
#endif // QT_CONFIG(tooltip)
        cpuopt_return_stack_buffer->setText(QCoreApplication::translate("ConfigureCpuDebug", "Enable return stack buffer", nullptr));
#if QT_CONFIG(tooltip)
        cpuopt_fast_dispatcher->setToolTip(QCoreApplication::translate("ConfigureCpuDebug", "\n"
"            <div>Enable a two-tiered dispatch system. A faster dispatcher written in assembly has a small MRU cache of jump destinations is used first. If that fails, dispatch falls back to the slower C++ dispatcher.</div>\n"
"           ", nullptr));
#endif // QT_CONFIG(tooltip)
        cpuopt_fast_dispatcher->setText(QCoreApplication::translate("ConfigureCpuDebug", "Enable fast dispatcher", nullptr));
#if QT_CONFIG(tooltip)
        cpuopt_context_elimination->setToolTip(QCoreApplication::translate("ConfigureCpuDebug", "\n"
"            <div>Enables an IR optimization that reduces unnecessary accesses to the CPU context structure.</div>\n"
"           ", nullptr));
#endif // QT_CONFIG(tooltip)
        cpuopt_context_elimination->setText(QCoreApplication::translate("ConfigureCpuDebug", "Enable context elimination", nullptr));
#if QT_CONFIG(tooltip)
        cpuopt_const_prop->setToolTip(QCoreApplication::translate("ConfigureCpuDebug", "\n"
"            <div>Enables IR optimizations that involve constant propagation.</div>\n"
"           ", nullptr));
#endif // QT_CONFIG(tooltip)
        cpuopt_const_prop->setText(QCoreApplication::translate("ConfigureCpuDebug", "Enable constant propagation", nullptr));
#if QT_CONFIG(tooltip)
        cpuopt_misc_ir->setToolTip(QCoreApplication::translate("ConfigureCpuDebug", "\n"
"            <div>Enables miscellaneous IR optimizations.</div>\n"
"           ", nullptr));
#endif // QT_CONFIG(tooltip)
        cpuopt_misc_ir->setText(QCoreApplication::translate("ConfigureCpuDebug", "Enable miscellaneous optimizations", nullptr));
#if QT_CONFIG(tooltip)
        cpuopt_reduce_misalign_checks->setToolTip(QCoreApplication::translate("ConfigureCpuDebug", "\n"
"            <div style=\"white-space: nowrap\">When enabled, a misalignment is only triggered when an access crosses a page boundary.</div>\n"
"            <div style=\"white-space: nowrap\">When disabled, a misalignment is triggered on all misaligned accesses.</div>\n"
"           ", nullptr));
#endif // QT_CONFIG(tooltip)
        cpuopt_reduce_misalign_checks->setText(QCoreApplication::translate("ConfigureCpuDebug", "Enable misalignment check reduction", nullptr));
#if QT_CONFIG(tooltip)
        cpuopt_fastmem->setToolTip(QCoreApplication::translate("ConfigureCpuDebug", "\n"
"            <div style=\"white-space: nowrap\">This optimization speeds up memory accesses by the guest program.</div>\n"
"            <div style=\"white-space: nowrap\">Enabling it causes guest memory reads/writes to be done directly into memory and make use of Host's MMU.</div>\n"
"            <div style=\"white-space: nowrap\">Disabling this forces all memory accesses to use Software MMU Emulation.</div>\n"
"           ", nullptr));
#endif // QT_CONFIG(tooltip)
        cpuopt_fastmem->setText(QCoreApplication::translate("ConfigureCpuDebug", "Enable Host MMU Emulation (general memory instructions)", nullptr));
#if QT_CONFIG(tooltip)
        cpuopt_fastmem_exclusives->setToolTip(QCoreApplication::translate("ConfigureCpuDebug", "\n"
"            <div style=\"white-space: nowrap\">This optimization speeds up exclusive memory accesses by the guest program.</div>\n"
"            <div style=\"white-space: nowrap\">Enabling it causes guest exclusive memory reads/writes to be done directly into memory and make use of Host's MMU.</div>\n"
"            <div style=\"white-space: nowrap\">Disabling this forces all exclusive memory accesses to use Software MMU Emulation.</div>\n"
"           ", nullptr));
#endif // QT_CONFIG(tooltip)
        cpuopt_fastmem_exclusives->setText(QCoreApplication::translate("ConfigureCpuDebug", "Enable Host MMU Emulation (exclusive memory instructions)", nullptr));
#if QT_CONFIG(tooltip)
        cpuopt_recompile_exclusives->setToolTip(QCoreApplication::translate("ConfigureCpuDebug", "\n"
"            <div style=\"white-space: nowrap\">This optimization speeds up exclusive memory accesses by the guest program.</div>\n"
"            <div style=\"white-space: nowrap\">Enabling it reduces the overhead of fastmem failure of exclusive memory accesses.</div>\n"
"           ", nullptr));
#endif // QT_CONFIG(tooltip)
        cpuopt_recompile_exclusives->setText(QCoreApplication::translate("ConfigureCpuDebug", "Enable recompilation of exclusive memory instructions", nullptr));
#if QT_CONFIG(tooltip)
        cpuopt_ignore_memory_aborts->setToolTip(QCoreApplication::translate("ConfigureCpuDebug", "\n"
"            <div style=\"white-space: nowrap\">This optimization speeds up memory accesses by allowing invalid memory accesses to succeed.</div>\n"
"            <div style=\"white-space: nowrap\">Enabling it reduces the overhead of all memory accesses and has no impact on programs that don't access invalid memory.</div>\n"
"           ", nullptr));
#endif // QT_CONFIG(tooltip)
        cpuopt_ignore_memory_aborts->setText(QCoreApplication::translate("ConfigureCpuDebug", "Enable fallbacks for invalid memory accesses", nullptr));
        label_disable_info->setText(QCoreApplication::translate("ConfigureCpuDebug", "CPU settings are available only when game is not running.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureCpuDebug: public Ui_ConfigureCpuDebug {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_CPU_DEBUG_H
