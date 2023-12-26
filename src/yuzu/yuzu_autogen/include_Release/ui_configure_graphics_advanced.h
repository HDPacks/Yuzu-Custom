/********************************************************************************
** Form generated from reading UI file 'configure_graphics_advanced.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_GRAPHICS_ADVANCED_H
#define UI_CONFIGURE_GRAPHICS_ADVANCED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureGraphicsAdvanced
{
public:
    QVBoxLayout *verticalLayout_1;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_1;
    QVBoxLayout *verticalLayout_3;
    QWidget *populate_target;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ConfigureGraphicsAdvanced)
    {
        if (ConfigureGraphicsAdvanced->objectName().isEmpty())
            ConfigureGraphicsAdvanced->setObjectName(QString::fromUtf8("ConfigureGraphicsAdvanced"));
        ConfigureGraphicsAdvanced->resize(404, 376);
        verticalLayout_1 = new QVBoxLayout(ConfigureGraphicsAdvanced);
        verticalLayout_1->setObjectName(QString::fromUtf8("verticalLayout_1"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_1 = new QGroupBox(ConfigureGraphicsAdvanced);
        groupBox_1->setObjectName(QString::fromUtf8("groupBox_1"));
        verticalLayout_3 = new QVBoxLayout(groupBox_1);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        populate_target = new QWidget(groupBox_1);
        populate_target->setObjectName(QString::fromUtf8("populate_target"));
        verticalLayout = new QVBoxLayout(populate_target);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout_3->addWidget(populate_target);


        verticalLayout_2->addWidget(groupBox_1);


        verticalLayout_1->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_1->addItem(verticalSpacer);


        retranslateUi(ConfigureGraphicsAdvanced);

        QMetaObject::connectSlotsByName(ConfigureGraphicsAdvanced);
    } // setupUi

    void retranslateUi(QWidget *ConfigureGraphicsAdvanced)
    {
        ConfigureGraphicsAdvanced->setWindowTitle(QCoreApplication::translate("ConfigureGraphicsAdvanced", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigureGraphicsAdvanced->setAccessibleName(QCoreApplication::translate("ConfigureGraphicsAdvanced", "Advanced", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox_1->setTitle(QCoreApplication::translate("ConfigureGraphicsAdvanced", "Advanced Graphics Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureGraphicsAdvanced: public Ui_ConfigureGraphicsAdvanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_GRAPHICS_ADVANCED_H
