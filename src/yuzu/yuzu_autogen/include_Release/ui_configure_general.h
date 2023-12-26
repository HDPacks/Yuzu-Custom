/********************************************************************************
** Form generated from reading UI file 'configure_general.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_GENERAL_H
#define UI_CONFIGURE_GENERAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureGeneral
{
public:
    QHBoxLayout *HorizontalLayout;
    QVBoxLayout *VerticalLayout;
    QGroupBox *GeneralGroupBox;
    QHBoxLayout *GeneralHorizontalLayout;
    QWidget *general_widget;
    QVBoxLayout *GeneralVerticalLayout;
    QGroupBox *LinuxGroupBox;
    QVBoxLayout *LinuxVerticalLayout_1;
    QWidget *linux_widget;
    QVBoxLayout *LinuxVerticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *layout_reset;
    QPushButton *button_reset_defaults;
    QSpacerItem *spacer_reset;

    void setupUi(QWidget *ConfigureGeneral)
    {
        if (ConfigureGeneral->objectName().isEmpty())
            ConfigureGeneral->setObjectName(QString::fromUtf8("ConfigureGeneral"));
        ConfigureGeneral->resize(744, 568);
        HorizontalLayout = new QHBoxLayout(ConfigureGeneral);
        HorizontalLayout->setObjectName(QString::fromUtf8("HorizontalLayout"));
        VerticalLayout = new QVBoxLayout();
        VerticalLayout->setObjectName(QString::fromUtf8("VerticalLayout"));
        GeneralGroupBox = new QGroupBox(ConfigureGeneral);
        GeneralGroupBox->setObjectName(QString::fromUtf8("GeneralGroupBox"));
        GeneralHorizontalLayout = new QHBoxLayout(GeneralGroupBox);
        GeneralHorizontalLayout->setObjectName(QString::fromUtf8("GeneralHorizontalLayout"));
        general_widget = new QWidget(GeneralGroupBox);
        general_widget->setObjectName(QString::fromUtf8("general_widget"));
        GeneralVerticalLayout = new QVBoxLayout(general_widget);
        GeneralVerticalLayout->setObjectName(QString::fromUtf8("GeneralVerticalLayout"));
        GeneralVerticalLayout->setContentsMargins(0, 0, 0, 0);

        GeneralHorizontalLayout->addWidget(general_widget);


        VerticalLayout->addWidget(GeneralGroupBox);

        LinuxGroupBox = new QGroupBox(ConfigureGeneral);
        LinuxGroupBox->setObjectName(QString::fromUtf8("LinuxGroupBox"));
        LinuxVerticalLayout_1 = new QVBoxLayout(LinuxGroupBox);
        LinuxVerticalLayout_1->setObjectName(QString::fromUtf8("LinuxVerticalLayout_1"));
        linux_widget = new QWidget(LinuxGroupBox);
        linux_widget->setObjectName(QString::fromUtf8("linux_widget"));
        LinuxVerticalLayout_2 = new QVBoxLayout(linux_widget);
        LinuxVerticalLayout_2->setObjectName(QString::fromUtf8("LinuxVerticalLayout_2"));
        LinuxVerticalLayout_2->setContentsMargins(0, 0, 0, 0);

        LinuxVerticalLayout_1->addWidget(linux_widget);


        VerticalLayout->addWidget(LinuxGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        VerticalLayout->addItem(verticalSpacer);

        layout_reset = new QHBoxLayout();
        layout_reset->setSpacing(6);
        layout_reset->setObjectName(QString::fromUtf8("layout_reset"));
        layout_reset->setContentsMargins(5, 5, 5, 5);
        button_reset_defaults = new QPushButton(ConfigureGeneral);
        button_reset_defaults->setObjectName(QString::fromUtf8("button_reset_defaults"));

        layout_reset->addWidget(button_reset_defaults);

        spacer_reset = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layout_reset->addItem(spacer_reset);


        VerticalLayout->addLayout(layout_reset);


        HorizontalLayout->addLayout(VerticalLayout);


        retranslateUi(ConfigureGeneral);

        QMetaObject::connectSlotsByName(ConfigureGeneral);
    } // setupUi

    void retranslateUi(QWidget *ConfigureGeneral)
    {
        ConfigureGeneral->setWindowTitle(QCoreApplication::translate("ConfigureGeneral", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigureGeneral->setAccessibleName(QCoreApplication::translate("ConfigureGeneral", "General", nullptr));
#endif // QT_CONFIG(accessibility)
        GeneralGroupBox->setTitle(QCoreApplication::translate("ConfigureGeneral", "General", nullptr));
        LinuxGroupBox->setTitle(QCoreApplication::translate("ConfigureGeneral", "Linux", nullptr));
        button_reset_defaults->setText(QCoreApplication::translate("ConfigureGeneral", "Reset All Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureGeneral: public Ui_ConfigureGeneral {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_GENERAL_H
