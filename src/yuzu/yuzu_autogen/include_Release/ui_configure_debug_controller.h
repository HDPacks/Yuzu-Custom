/********************************************************************************
** Form generated from reading UI file 'configure_debug_controller.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_DEBUG_CONTROLLER_H
#define UI_CONFIGURE_DEBUG_CONTROLLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigureDebugController
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *controllerLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *clear_all_button;
    QPushButton *restore_defaults_button;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigureDebugController)
    {
        if (ConfigureDebugController->objectName().isEmpty())
            ConfigureDebugController->setObjectName(QString::fromUtf8("ConfigureDebugController"));
        ConfigureDebugController->resize(780, 500);
        verticalLayout = new QVBoxLayout(ConfigureDebugController);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        controllerLayout = new QHBoxLayout();
        controllerLayout->setObjectName(QString::fromUtf8("controllerLayout"));

        verticalLayout->addLayout(controllerLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        clear_all_button = new QPushButton(ConfigureDebugController);
        clear_all_button->setObjectName(QString::fromUtf8("clear_all_button"));

        horizontalLayout->addWidget(clear_all_button);

        restore_defaults_button = new QPushButton(ConfigureDebugController);
        restore_defaults_button->setObjectName(QString::fromUtf8("restore_defaults_button"));

        horizontalLayout->addWidget(restore_defaults_button);

        buttonBox = new QDialogButtonBox(ConfigureDebugController);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ConfigureDebugController);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigureDebugController, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfigureDebugController, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConfigureDebugController);
    } // setupUi

    void retranslateUi(QDialog *ConfigureDebugController)
    {
        ConfigureDebugController->setWindowTitle(QCoreApplication::translate("ConfigureDebugController", "Configure Debug Controller", nullptr));
        clear_all_button->setText(QCoreApplication::translate("ConfigureDebugController", "Clear", nullptr));
        restore_defaults_button->setText(QCoreApplication::translate("ConfigureDebugController", "Defaults", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureDebugController: public Ui_ConfigureDebugController {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_DEBUG_CONTROLLER_H
