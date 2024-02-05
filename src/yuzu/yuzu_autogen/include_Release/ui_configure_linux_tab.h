/********************************************************************************
** Form generated from reading UI file 'configure_linux_tab.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_LINUX_TAB_H
#define UI_CONFIGURE_LINUX_TAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureLinuxTab
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *LinuxGroupBox;
    QVBoxLayout *LinuxVerticalLayout_1;
    QWidget *linux_widget;
    QVBoxLayout *LinuxVerticalLayout_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ConfigureLinuxTab)
    {
        if (ConfigureLinuxTab->objectName().isEmpty())
            ConfigureLinuxTab->setObjectName(QString::fromUtf8("ConfigureLinuxTab"));
        vboxLayout = new QVBoxLayout(ConfigureLinuxTab);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        LinuxGroupBox = new QGroupBox(ConfigureLinuxTab);
        LinuxGroupBox->setObjectName(QString::fromUtf8("LinuxGroupBox"));
        LinuxVerticalLayout_1 = new QVBoxLayout(LinuxGroupBox);
        LinuxVerticalLayout_1->setObjectName(QString::fromUtf8("LinuxVerticalLayout_1"));
        linux_widget = new QWidget(LinuxGroupBox);
        linux_widget->setObjectName(QString::fromUtf8("linux_widget"));
        LinuxVerticalLayout_2 = new QVBoxLayout(linux_widget);
        LinuxVerticalLayout_2->setObjectName(QString::fromUtf8("LinuxVerticalLayout_2"));
        LinuxVerticalLayout_2->setContentsMargins(0, 0, 0, 0);

        LinuxVerticalLayout_1->addWidget(linux_widget);


        vboxLayout->addWidget(LinuxGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer);


        retranslateUi(ConfigureLinuxTab);

        QMetaObject::connectSlotsByName(ConfigureLinuxTab);
    } // setupUi

    void retranslateUi(QWidget *ConfigureLinuxTab)
    {
#if QT_CONFIG(accessibility)
        ConfigureLinuxTab->setAccessibleName(QCoreApplication::translate("ConfigureLinuxTab", "Linux", nullptr));
#endif // QT_CONFIG(accessibility)
        LinuxGroupBox->setTitle(QCoreApplication::translate("ConfigureLinuxTab", "Linux", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureLinuxTab: public Ui_ConfigureLinuxTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_LINUX_TAB_H
