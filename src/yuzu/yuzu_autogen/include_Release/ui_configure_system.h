/********************************************************************************
** Form generated from reading UI file 'configure_system.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_SYSTEM_H
#define UI_CONFIGURE_SYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureSystem
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *group_system_settings;
    QVBoxLayout *verticalLayout_2;
    QWidget *system_widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_warn_invalid_locale;
    QGroupBox *coreGroup;
    QVBoxLayout *verticalLayout_6;
    QWidget *core_widget;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ConfigureSystem)
    {
        if (ConfigureSystem->objectName().isEmpty())
            ConfigureSystem->setObjectName(QString::fromUtf8("ConfigureSystem"));
        ConfigureSystem->resize(605, 483);
        horizontalLayout = new QHBoxLayout(ConfigureSystem);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        group_system_settings = new QGroupBox(ConfigureSystem);
        group_system_settings->setObjectName(QString::fromUtf8("group_system_settings"));
        verticalLayout_2 = new QVBoxLayout(group_system_settings);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        system_widget = new QWidget(group_system_settings);
        system_widget->setObjectName(QString::fromUtf8("system_widget"));
        verticalLayout_3 = new QVBoxLayout(system_widget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);

        verticalLayout_2->addWidget(system_widget);

        label_warn_invalid_locale = new QLabel(group_system_settings);
        label_warn_invalid_locale->setObjectName(QString::fromUtf8("label_warn_invalid_locale"));
        label_warn_invalid_locale->setWordWrap(true);

        verticalLayout_2->addWidget(label_warn_invalid_locale);


        verticalLayout->addWidget(group_system_settings);

        coreGroup = new QGroupBox(ConfigureSystem);
        coreGroup->setObjectName(QString::fromUtf8("coreGroup"));
        verticalLayout_6 = new QVBoxLayout(coreGroup);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        core_widget = new QWidget(coreGroup);
        core_widget->setObjectName(QString::fromUtf8("core_widget"));
        verticalLayout_5 = new QVBoxLayout(core_widget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);

        verticalLayout_6->addWidget(core_widget);


        verticalLayout->addWidget(coreGroup);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(ConfigureSystem);

        QMetaObject::connectSlotsByName(ConfigureSystem);
    } // setupUi

    void retranslateUi(QWidget *ConfigureSystem)
    {
        ConfigureSystem->setWindowTitle(QCoreApplication::translate("ConfigureSystem", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigureSystem->setAccessibleName(QCoreApplication::translate("ConfigureSystem", "System", nullptr));
#endif // QT_CONFIG(accessibility)
        group_system_settings->setTitle(QCoreApplication::translate("ConfigureSystem", "System", nullptr));
        label_warn_invalid_locale->setText(QString());
        coreGroup->setTitle(QCoreApplication::translate("ConfigureSystem", "Core", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureSystem: public Ui_ConfigureSystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_SYSTEM_H
