/********************************************************************************
** Form generated from reading UI file 'configure_input_profile_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_INPUT_PROFILE_DIALOG_H
#define UI_CONFIGURE_INPUT_PROFILE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigureInputProfileDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *controllerLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *clear_all_button;
    QPushButton *restore_defaults_button;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigureInputProfileDialog)
    {
        if (ConfigureInputProfileDialog->objectName().isEmpty())
            ConfigureInputProfileDialog->setObjectName(QString::fromUtf8("ConfigureInputProfileDialog"));
        ConfigureInputProfileDialog->resize(70, 540);
        verticalLayout = new QVBoxLayout(ConfigureInputProfileDialog);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        controllerLayout = new QHBoxLayout();
        controllerLayout->setObjectName(QString::fromUtf8("controllerLayout"));

        verticalLayout->addLayout(controllerLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        clear_all_button = new QPushButton(ConfigureInputProfileDialog);
        clear_all_button->setObjectName(QString::fromUtf8("clear_all_button"));

        horizontalLayout->addWidget(clear_all_button);

        restore_defaults_button = new QPushButton(ConfigureInputProfileDialog);
        restore_defaults_button->setObjectName(QString::fromUtf8("restore_defaults_button"));

        horizontalLayout->addWidget(restore_defaults_button);

        buttonBox = new QDialogButtonBox(ConfigureInputProfileDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ConfigureInputProfileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigureInputProfileDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(ConfigureInputProfileDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigureInputProfileDialog)
    {
        ConfigureInputProfileDialog->setWindowTitle(QCoreApplication::translate("ConfigureInputProfileDialog", "Create Input Profile", nullptr));
        clear_all_button->setText(QCoreApplication::translate("ConfigureInputProfileDialog", "Clear", nullptr));
        restore_defaults_button->setText(QCoreApplication::translate("ConfigureInputProfileDialog", "Defaults", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureInputProfileDialog: public Ui_ConfigureInputProfileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_INPUT_PROFILE_DIALOG_H
