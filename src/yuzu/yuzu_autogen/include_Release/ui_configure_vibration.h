/********************************************************************************
** Form generated from reading UI file 'configure_vibration.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_VIBRATION_H
#define UI_CONFIGURE_VIBRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureVibration
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label_1;
    QGroupBox *vibrationStrengthGroup;
    QVBoxLayout *verticalLayout_3;
    QWidget *player14Widget;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *vibrationGroupPlayer1;
    QHBoxLayout *horizontalLayout_8;
    QSpinBox *vibrationSpinPlayer1;
    QGroupBox *vibrationGroupPlayer2;
    QHBoxLayout *horizontalLayout_9;
    QSpinBox *vibrationSpinPlayer2;
    QGroupBox *vibrationGroupPlayer3;
    QHBoxLayout *horizontalLayout_10;
    QSpinBox *vibrationSpinPlayer3;
    QGroupBox *vibrationGroupPlayer4;
    QHBoxLayout *horizontalLayout_11;
    QSpinBox *vibrationSpinPlayer4;
    QWidget *player58Widget;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *vibrationGroupPlayer7;
    QHBoxLayout *horizontalLayout_14;
    QSpinBox *vibrationSpinPlayer7;
    QGroupBox *vibrationGroupPlayer8;
    QHBoxLayout *horizontalLayout_15;
    QSpinBox *vibrationSpinPlayer8;
    QGroupBox *vibrationGroupPlayer5;
    QHBoxLayout *horizontalLayout_12;
    QSpinBox *vibrationSpinPlayer5;
    QGroupBox *vibrationGroupPlayer6;
    QHBoxLayout *horizontalLayout_13;
    QSpinBox *vibrationSpinPlayer6;
    QGroupBox *vibrationSettingsGroup;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBoxAccurateVibration;
    QSpacerItem *spacerVibration;
    QDialogButtonBox *buttonBoxVibration;

    void setupUi(QDialog *ConfigureVibration)
    {
        if (ConfigureVibration->objectName().isEmpty())
            ConfigureVibration->setObjectName(QString::fromUtf8("ConfigureVibration"));
        ConfigureVibration->resize(364, 242);
        ConfigureVibration->setStyleSheet(QString::fromUtf8(""));
        vboxLayout = new QVBoxLayout(ConfigureVibration);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        label_1 = new QLabel(ConfigureVibration);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        vboxLayout->addWidget(label_1);

        vibrationStrengthGroup = new QGroupBox(ConfigureVibration);
        vibrationStrengthGroup->setObjectName(QString::fromUtf8("vibrationStrengthGroup"));
        verticalLayout_3 = new QVBoxLayout(vibrationStrengthGroup);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(9, 9, 9, 9);
        player14Widget = new QWidget(vibrationStrengthGroup);
        player14Widget->setObjectName(QString::fromUtf8("player14Widget"));
        horizontalLayout_4 = new QHBoxLayout(player14Widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        vibrationGroupPlayer1 = new QGroupBox(player14Widget);
        vibrationGroupPlayer1->setObjectName(QString::fromUtf8("vibrationGroupPlayer1"));
        vibrationGroupPlayer1->setCheckable(true);
        horizontalLayout_8 = new QHBoxLayout(vibrationGroupPlayer1);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(3, 3, 3, 3);
        vibrationSpinPlayer1 = new QSpinBox(vibrationGroupPlayer1);
        vibrationSpinPlayer1->setObjectName(QString::fromUtf8("vibrationSpinPlayer1"));
        vibrationSpinPlayer1->setMinimumSize(QSize(68, 21));
        vibrationSpinPlayer1->setMaximumSize(QSize(68, 16777215));
        vibrationSpinPlayer1->setMinimum(1);
        vibrationSpinPlayer1->setMaximum(150);
        vibrationSpinPlayer1->setValue(100);

        horizontalLayout_8->addWidget(vibrationSpinPlayer1);


        horizontalLayout_4->addWidget(vibrationGroupPlayer1);

        vibrationGroupPlayer2 = new QGroupBox(player14Widget);
        vibrationGroupPlayer2->setObjectName(QString::fromUtf8("vibrationGroupPlayer2"));
        vibrationGroupPlayer2->setCheckable(true);
        horizontalLayout_9 = new QHBoxLayout(vibrationGroupPlayer2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(3, 3, 3, 3);
        vibrationSpinPlayer2 = new QSpinBox(vibrationGroupPlayer2);
        vibrationSpinPlayer2->setObjectName(QString::fromUtf8("vibrationSpinPlayer2"));
        vibrationSpinPlayer2->setMinimumSize(QSize(68, 21));
        vibrationSpinPlayer2->setMaximumSize(QSize(68, 16777215));
        vibrationSpinPlayer2->setMinimum(1);
        vibrationSpinPlayer2->setMaximum(150);
        vibrationSpinPlayer2->setValue(100);

        horizontalLayout_9->addWidget(vibrationSpinPlayer2);


        horizontalLayout_4->addWidget(vibrationGroupPlayer2);

        vibrationGroupPlayer3 = new QGroupBox(player14Widget);
        vibrationGroupPlayer3->setObjectName(QString::fromUtf8("vibrationGroupPlayer3"));
        vibrationGroupPlayer3->setCheckable(true);
        horizontalLayout_10 = new QHBoxLayout(vibrationGroupPlayer3);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(3, 3, 3, 3);
        vibrationSpinPlayer3 = new QSpinBox(vibrationGroupPlayer3);
        vibrationSpinPlayer3->setObjectName(QString::fromUtf8("vibrationSpinPlayer3"));
        vibrationSpinPlayer3->setMinimumSize(QSize(68, 21));
        vibrationSpinPlayer3->setMaximumSize(QSize(68, 16777215));
        vibrationSpinPlayer3->setMinimum(1);
        vibrationSpinPlayer3->setMaximum(150);
        vibrationSpinPlayer3->setValue(100);

        horizontalLayout_10->addWidget(vibrationSpinPlayer3);


        horizontalLayout_4->addWidget(vibrationGroupPlayer3);

        vibrationGroupPlayer4 = new QGroupBox(player14Widget);
        vibrationGroupPlayer4->setObjectName(QString::fromUtf8("vibrationGroupPlayer4"));
        vibrationGroupPlayer4->setCheckable(true);
        horizontalLayout_11 = new QHBoxLayout(vibrationGroupPlayer4);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(3, 3, 3, 3);
        vibrationSpinPlayer4 = new QSpinBox(vibrationGroupPlayer4);
        vibrationSpinPlayer4->setObjectName(QString::fromUtf8("vibrationSpinPlayer4"));
        vibrationSpinPlayer4->setMinimumSize(QSize(68, 21));
        vibrationSpinPlayer4->setMaximumSize(QSize(68, 16777215));
        vibrationSpinPlayer4->setMinimum(1);
        vibrationSpinPlayer4->setMaximum(150);
        vibrationSpinPlayer4->setValue(100);

        horizontalLayout_11->addWidget(vibrationSpinPlayer4);


        horizontalLayout_4->addWidget(vibrationGroupPlayer4);


        verticalLayout_3->addWidget(player14Widget);

        player58Widget = new QWidget(vibrationStrengthGroup);
        player58Widget->setObjectName(QString::fromUtf8("player58Widget"));
        horizontalLayout_6 = new QHBoxLayout(player58Widget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        vibrationGroupPlayer7 = new QGroupBox(player58Widget);
        vibrationGroupPlayer7->setObjectName(QString::fromUtf8("vibrationGroupPlayer7"));
        vibrationGroupPlayer7->setCheckable(true);
        horizontalLayout_14 = new QHBoxLayout(vibrationGroupPlayer7);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(3, 3, 3, 3);
        vibrationSpinPlayer7 = new QSpinBox(vibrationGroupPlayer7);
        vibrationSpinPlayer7->setObjectName(QString::fromUtf8("vibrationSpinPlayer7"));
        vibrationSpinPlayer7->setMinimumSize(QSize(68, 21));
        vibrationSpinPlayer7->setMaximumSize(QSize(68, 16777215));
        vibrationSpinPlayer7->setMinimum(1);
        vibrationSpinPlayer7->setMaximum(150);
        vibrationSpinPlayer7->setValue(100);

        horizontalLayout_14->addWidget(vibrationSpinPlayer7);


        horizontalLayout_6->addWidget(vibrationGroupPlayer7);

        vibrationGroupPlayer8 = new QGroupBox(player58Widget);
        vibrationGroupPlayer8->setObjectName(QString::fromUtf8("vibrationGroupPlayer8"));
        vibrationGroupPlayer8->setCheckable(true);
        horizontalLayout_15 = new QHBoxLayout(vibrationGroupPlayer8);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(3, 3, 3, 3);
        vibrationSpinPlayer8 = new QSpinBox(vibrationGroupPlayer8);
        vibrationSpinPlayer8->setObjectName(QString::fromUtf8("vibrationSpinPlayer8"));
        vibrationSpinPlayer8->setMinimumSize(QSize(68, 21));
        vibrationSpinPlayer8->setMaximumSize(QSize(68, 16777215));
        vibrationSpinPlayer8->setMinimum(1);
        vibrationSpinPlayer8->setMaximum(150);
        vibrationSpinPlayer8->setValue(100);

        horizontalLayout_15->addWidget(vibrationSpinPlayer8);


        horizontalLayout_6->addWidget(vibrationGroupPlayer8);

        vibrationGroupPlayer5 = new QGroupBox(player58Widget);
        vibrationGroupPlayer5->setObjectName(QString::fromUtf8("vibrationGroupPlayer5"));
        vibrationGroupPlayer5->setCheckable(true);
        horizontalLayout_12 = new QHBoxLayout(vibrationGroupPlayer5);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(3, 3, 3, 3);
        vibrationSpinPlayer5 = new QSpinBox(vibrationGroupPlayer5);
        vibrationSpinPlayer5->setObjectName(QString::fromUtf8("vibrationSpinPlayer5"));
        vibrationSpinPlayer5->setMinimumSize(QSize(68, 21));
        vibrationSpinPlayer5->setMaximumSize(QSize(68, 16777215));
        vibrationSpinPlayer5->setMinimum(1);
        vibrationSpinPlayer5->setMaximum(150);
        vibrationSpinPlayer5->setValue(100);

        horizontalLayout_12->addWidget(vibrationSpinPlayer5);


        horizontalLayout_6->addWidget(vibrationGroupPlayer5);

        vibrationGroupPlayer6 = new QGroupBox(player58Widget);
        vibrationGroupPlayer6->setObjectName(QString::fromUtf8("vibrationGroupPlayer6"));
        vibrationGroupPlayer6->setCheckable(true);
        horizontalLayout_13 = new QHBoxLayout(vibrationGroupPlayer6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(3, 3, 3, 3);
        vibrationSpinPlayer6 = new QSpinBox(vibrationGroupPlayer6);
        vibrationSpinPlayer6->setObjectName(QString::fromUtf8("vibrationSpinPlayer6"));
        vibrationSpinPlayer6->setMinimumSize(QSize(68, 21));
        vibrationSpinPlayer6->setMaximumSize(QSize(68, 16777215));
        vibrationSpinPlayer6->setMinimum(1);
        vibrationSpinPlayer6->setMaximum(150);
        vibrationSpinPlayer6->setValue(100);

        horizontalLayout_13->addWidget(vibrationSpinPlayer6);


        horizontalLayout_6->addWidget(vibrationGroupPlayer6);


        verticalLayout_3->addWidget(player58Widget);


        vboxLayout->addWidget(vibrationStrengthGroup);

        vibrationSettingsGroup = new QGroupBox(ConfigureVibration);
        vibrationSettingsGroup->setObjectName(QString::fromUtf8("vibrationSettingsGroup"));
        verticalLayout = new QVBoxLayout(vibrationSettingsGroup);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBoxAccurateVibration = new QCheckBox(vibrationSettingsGroup);
        checkBoxAccurateVibration->setObjectName(QString::fromUtf8("checkBoxAccurateVibration"));

        verticalLayout->addWidget(checkBoxAccurateVibration);


        vboxLayout->addWidget(vibrationSettingsGroup);

        spacerVibration = new QSpacerItem(167, 55, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerVibration);

        buttonBoxVibration = new QDialogButtonBox(ConfigureVibration);
        buttonBoxVibration->setObjectName(QString::fromUtf8("buttonBoxVibration"));
        buttonBoxVibration->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBoxVibration);


        retranslateUi(ConfigureVibration);
        QObject::connect(buttonBoxVibration, SIGNAL(accepted()), ConfigureVibration, SLOT(accept()));
        QObject::connect(buttonBoxVibration, SIGNAL(rejected()), ConfigureVibration, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConfigureVibration);
    } // setupUi

    void retranslateUi(QDialog *ConfigureVibration)
    {
        ConfigureVibration->setWindowTitle(QCoreApplication::translate("ConfigureVibration", "Configure Vibration", nullptr));
        label_1->setText(QCoreApplication::translate("ConfigureVibration", "Press any controller button to vibrate the controller.", nullptr));
        vibrationStrengthGroup->setTitle(QCoreApplication::translate("ConfigureVibration", "Vibration", nullptr));
        vibrationGroupPlayer1->setTitle(QCoreApplication::translate("ConfigureVibration", "Player 1", nullptr));
        vibrationSpinPlayer1->setSuffix(QCoreApplication::translate("ConfigureVibration", "%", nullptr));
        vibrationGroupPlayer2->setTitle(QCoreApplication::translate("ConfigureVibration", "Player 2", nullptr));
        vibrationSpinPlayer2->setSuffix(QCoreApplication::translate("ConfigureVibration", "%", nullptr));
        vibrationGroupPlayer3->setTitle(QCoreApplication::translate("ConfigureVibration", "Player 3", nullptr));
        vibrationSpinPlayer3->setSuffix(QCoreApplication::translate("ConfigureVibration", "%", nullptr));
        vibrationGroupPlayer4->setTitle(QCoreApplication::translate("ConfigureVibration", "Player 4", nullptr));
        vibrationSpinPlayer4->setSuffix(QCoreApplication::translate("ConfigureVibration", "%", nullptr));
        vibrationGroupPlayer7->setTitle(QCoreApplication::translate("ConfigureVibration", "Player 5", nullptr));
        vibrationSpinPlayer7->setSuffix(QCoreApplication::translate("ConfigureVibration", "%", nullptr));
        vibrationGroupPlayer8->setTitle(QCoreApplication::translate("ConfigureVibration", "Player 6", nullptr));
        vibrationSpinPlayer8->setSuffix(QCoreApplication::translate("ConfigureVibration", "%", nullptr));
        vibrationGroupPlayer5->setTitle(QCoreApplication::translate("ConfigureVibration", "Player 7", nullptr));
        vibrationSpinPlayer5->setSuffix(QCoreApplication::translate("ConfigureVibration", "%", nullptr));
        vibrationGroupPlayer6->setTitle(QCoreApplication::translate("ConfigureVibration", "Player 8", nullptr));
        vibrationSpinPlayer6->setSuffix(QCoreApplication::translate("ConfigureVibration", "%", nullptr));
        vibrationSettingsGroup->setTitle(QCoreApplication::translate("ConfigureVibration", "Settings", nullptr));
        checkBoxAccurateVibration->setText(QCoreApplication::translate("ConfigureVibration", "Enable Accurate Vibration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureVibration: public Ui_ConfigureVibration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_VIBRATION_H
