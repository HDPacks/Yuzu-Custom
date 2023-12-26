/********************************************************************************
** Form generated from reading UI file 'configure_input.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_INPUT_H
#define UI_CONFIGURE_INPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureInput
{
public:
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget;
    QWidget *tabPlayer1;
    QWidget *tabPlayer2;
    QWidget *tabPlayer3;
    QWidget *tabPlayer4;
    QWidget *tabPlayer5;
    QWidget *tabPlayer6;
    QWidget *tabPlayer7;
    QWidget *tabPlayer8;
    QWidget *tabAdvanced;
    QWidget *consoleInputSettings;
    QHBoxLayout *buttonsBottomRightHorizontalLayout;
    QGroupBox *handheldGroup;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioDocked;
    QRadioButton *radioUndocked;
    QGroupBox *vibrationGroup;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *vibrationButton;
    QGroupBox *motionGroup;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *motionButton;
    QWidget *connectedControllers;
    QGridLayout *gridLayout_2;
    QCheckBox *checkboxPlayer2Connected;
    QLabel *label_2;
    QCheckBox *checkboxPlayer4Connected;
    QCheckBox *checkboxPlayer3Connected;
    QCheckBox *checkboxPlayer5Connected;
    QLabel *label;
    QCheckBox *checkboxPlayer7Connected;
    QCheckBox *checkboxPlayer6Connected;
    QCheckBox *checkboxPlayer1Connected;
    QCheckBox *checkboxPlayer8Connected;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonRestoreDefaults;
    QPushButton *buttonClearAll;

    void setupUi(QWidget *ConfigureInput)
    {
        if (ConfigureInput->objectName().isEmpty())
            ConfigureInput->setObjectName(QString::fromUtf8("ConfigureInput"));
        ConfigureInput->resize(680, 540);
        verticalLayout_5 = new QVBoxLayout(ConfigureInput);
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(3, 3, 3, 3);
        tabWidget = new QTabWidget(ConfigureInput);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabPlayer1 = new QWidget();
        tabPlayer1->setObjectName(QString::fromUtf8("tabPlayer1"));
        tabWidget->addTab(tabPlayer1, QString());
        tabPlayer2 = new QWidget();
        tabPlayer2->setObjectName(QString::fromUtf8("tabPlayer2"));
        tabWidget->addTab(tabPlayer2, QString());
        tabPlayer3 = new QWidget();
        tabPlayer3->setObjectName(QString::fromUtf8("tabPlayer3"));
        tabWidget->addTab(tabPlayer3, QString());
        tabPlayer4 = new QWidget();
        tabPlayer4->setObjectName(QString::fromUtf8("tabPlayer4"));
        tabWidget->addTab(tabPlayer4, QString());
        tabPlayer5 = new QWidget();
        tabPlayer5->setObjectName(QString::fromUtf8("tabPlayer5"));
        tabWidget->addTab(tabPlayer5, QString());
        tabPlayer6 = new QWidget();
        tabPlayer6->setObjectName(QString::fromUtf8("tabPlayer6"));
        tabWidget->addTab(tabPlayer6, QString());
        tabPlayer7 = new QWidget();
        tabPlayer7->setObjectName(QString::fromUtf8("tabPlayer7"));
        tabWidget->addTab(tabPlayer7, QString());
        tabPlayer8 = new QWidget();
        tabPlayer8->setObjectName(QString::fromUtf8("tabPlayer8"));
        tabWidget->addTab(tabPlayer8, QString());
        tabAdvanced = new QWidget();
        tabAdvanced->setObjectName(QString::fromUtf8("tabAdvanced"));
        tabWidget->addTab(tabAdvanced, QString());

        verticalLayout_5->addWidget(tabWidget);

        consoleInputSettings = new QWidget(ConfigureInput);
        consoleInputSettings->setObjectName(QString::fromUtf8("consoleInputSettings"));
        buttonsBottomRightHorizontalLayout = new QHBoxLayout(consoleInputSettings);
        buttonsBottomRightHorizontalLayout->setSpacing(3);
        buttonsBottomRightHorizontalLayout->setObjectName(QString::fromUtf8("buttonsBottomRightHorizontalLayout"));
        buttonsBottomRightHorizontalLayout->setContentsMargins(0, 3, 0, 0);
        handheldGroup = new QGroupBox(consoleInputSettings);
        handheldGroup->setObjectName(QString::fromUtf8("handheldGroup"));
        handheldGroup->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(handheldGroup);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(8, 6, 3, 6);
        radioDocked = new QRadioButton(handheldGroup);
        radioDocked->setObjectName(QString::fromUtf8("radioDocked"));
        radioDocked->setChecked(true);

        horizontalLayout->addWidget(radioDocked);

        radioUndocked = new QRadioButton(handheldGroup);
        radioUndocked->setObjectName(QString::fromUtf8("radioUndocked"));

        horizontalLayout->addWidget(radioUndocked);


        buttonsBottomRightHorizontalLayout->addWidget(handheldGroup, 0, Qt::AlignVCenter);

        vibrationGroup = new QGroupBox(consoleInputSettings);
        vibrationGroup->setObjectName(QString::fromUtf8("vibrationGroup"));
        vibrationGroup->setCheckable(true);
        horizontalLayout_2 = new QHBoxLayout(vibrationGroup);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(3, 3, 3, 3);
        vibrationButton = new QPushButton(vibrationGroup);
        vibrationButton->setObjectName(QString::fromUtf8("vibrationButton"));
        vibrationButton->setMinimumSize(QSize(68, 0));
        vibrationButton->setMaximumSize(QSize(68, 16777215));
        vibrationButton->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        horizontalLayout_2->addWidget(vibrationButton);


        buttonsBottomRightHorizontalLayout->addWidget(vibrationGroup);

        motionGroup = new QGroupBox(consoleInputSettings);
        motionGroup->setObjectName(QString::fromUtf8("motionGroup"));
        motionGroup->setCheckable(true);
        horizontalLayout_3 = new QHBoxLayout(motionGroup);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(3, 3, 3, 3);
        motionButton = new QPushButton(motionGroup);
        motionButton->setObjectName(QString::fromUtf8("motionButton"));
        motionButton->setMinimumSize(QSize(68, 0));
        motionButton->setMaximumSize(QSize(68, 16777215));
        motionButton->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        horizontalLayout_3->addWidget(motionButton);


        buttonsBottomRightHorizontalLayout->addWidget(motionGroup);

        connectedControllers = new QWidget(consoleInputSettings);
        connectedControllers->setObjectName(QString::fromUtf8("connectedControllers"));
        gridLayout_2 = new QGridLayout(connectedControllers);
        gridLayout_2->setSpacing(3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(5, 0, 0, 0);
        checkboxPlayer2Connected = new QCheckBox(connectedControllers);
        checkboxPlayer2Connected->setObjectName(QString::fromUtf8("checkboxPlayer2Connected"));

        gridLayout_2->addWidget(checkboxPlayer2Connected, 1, 2, 1, 1);

        label_2 = new QLabel(connectedControllers);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        checkboxPlayer4Connected = new QCheckBox(connectedControllers);
        checkboxPlayer4Connected->setObjectName(QString::fromUtf8("checkboxPlayer4Connected"));

        gridLayout_2->addWidget(checkboxPlayer4Connected, 1, 4, 1, 1);

        checkboxPlayer3Connected = new QCheckBox(connectedControllers);
        checkboxPlayer3Connected->setObjectName(QString::fromUtf8("checkboxPlayer3Connected"));

        gridLayout_2->addWidget(checkboxPlayer3Connected, 1, 3, 1, 1);

        checkboxPlayer5Connected = new QCheckBox(connectedControllers);
        checkboxPlayer5Connected->setObjectName(QString::fromUtf8("checkboxPlayer5Connected"));

        gridLayout_2->addWidget(checkboxPlayer5Connected, 1, 5, 1, 1);

        label = new QLabel(connectedControllers);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        checkboxPlayer7Connected = new QCheckBox(connectedControllers);
        checkboxPlayer7Connected->setObjectName(QString::fromUtf8("checkboxPlayer7Connected"));

        gridLayout_2->addWidget(checkboxPlayer7Connected, 1, 7, 1, 1);

        checkboxPlayer6Connected = new QCheckBox(connectedControllers);
        checkboxPlayer6Connected->setObjectName(QString::fromUtf8("checkboxPlayer6Connected"));

        gridLayout_2->addWidget(checkboxPlayer6Connected, 1, 6, 1, 1);

        checkboxPlayer1Connected = new QCheckBox(connectedControllers);
        checkboxPlayer1Connected->setObjectName(QString::fromUtf8("checkboxPlayer1Connected"));
        checkboxPlayer1Connected->setLayoutDirection(Qt::LeftToRight);
        checkboxPlayer1Connected->setChecked(true);

        gridLayout_2->addWidget(checkboxPlayer1Connected, 1, 1, 1, 1);

        checkboxPlayer8Connected = new QCheckBox(connectedControllers);
        checkboxPlayer8Connected->setObjectName(QString::fromUtf8("checkboxPlayer8Connected"));

        gridLayout_2->addWidget(checkboxPlayer8Connected, 1, 8, 1, 1);

        label_3 = new QLabel(connectedControllers);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 0, 2, 1, 1);

        label_4 = new QLabel(connectedControllers);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 3, 1, 1);

        label_5 = new QLabel(connectedControllers);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 0, 4, 1, 1);

        label_6 = new QLabel(connectedControllers);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_6, 0, 5, 1, 1);

        label_7 = new QLabel(connectedControllers);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_7, 0, 6, 1, 1);

        label_8 = new QLabel(connectedControllers);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 0, 7, 1, 1);

        label_9 = new QLabel(connectedControllers);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_9, 0, 8, 1, 1);

        label_10 = new QLabel(connectedControllers);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);


        buttonsBottomRightHorizontalLayout->addWidget(connectedControllers, 0, Qt::AlignVCenter);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonsBottomRightHorizontalLayout->addItem(horizontalSpacer);

        buttonRestoreDefaults = new QPushButton(consoleInputSettings);
        buttonRestoreDefaults->setObjectName(QString::fromUtf8("buttonRestoreDefaults"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonRestoreDefaults->sizePolicy().hasHeightForWidth());
        buttonRestoreDefaults->setSizePolicy(sizePolicy);
        buttonRestoreDefaults->setMinimumSize(QSize(68, 0));
        buttonRestoreDefaults->setMaximumSize(QSize(68, 16777215));
        buttonRestoreDefaults->setSizeIncrement(QSize(0, 0));
        buttonRestoreDefaults->setBaseSize(QSize(0, 0));
        buttonRestoreDefaults->setLayoutDirection(Qt::LeftToRight);
        buttonRestoreDefaults->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonsBottomRightHorizontalLayout->addWidget(buttonRestoreDefaults, 0, Qt::AlignBottom);

        buttonClearAll = new QPushButton(consoleInputSettings);
        buttonClearAll->setObjectName(QString::fromUtf8("buttonClearAll"));
        sizePolicy.setHeightForWidth(buttonClearAll->sizePolicy().hasHeightForWidth());
        buttonClearAll->setSizePolicy(sizePolicy);
        buttonClearAll->setMinimumSize(QSize(68, 0));
        buttonClearAll->setMaximumSize(QSize(68, 16777215));
        buttonClearAll->setSizeIncrement(QSize(0, 0));
        buttonClearAll->setBaseSize(QSize(0, 0));
        buttonClearAll->setLayoutDirection(Qt::LeftToRight);
        buttonClearAll->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonsBottomRightHorizontalLayout->addWidget(buttonClearAll, 0, Qt::AlignBottom);


        verticalLayout_5->addWidget(consoleInputSettings, 0, Qt::AlignVCenter);


        retranslateUi(ConfigureInput);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ConfigureInput);
    } // setupUi

    void retranslateUi(QWidget *ConfigureInput)
    {
        ConfigureInput->setWindowTitle(QCoreApplication::translate("ConfigureInput", "ConfigureInput", nullptr));
#if QT_CONFIG(accessibility)
        tabPlayer1->setAccessibleName(QCoreApplication::translate("ConfigureInput", "Player 1", nullptr));
#endif // QT_CONFIG(accessibility)
        tabWidget->setTabText(tabWidget->indexOf(tabPlayer1), QCoreApplication::translate("ConfigureInput", "Player 1", nullptr));
#if QT_CONFIG(accessibility)
        tabPlayer2->setAccessibleName(QCoreApplication::translate("ConfigureInput", "Player 2", nullptr));
#endif // QT_CONFIG(accessibility)
        tabWidget->setTabText(tabWidget->indexOf(tabPlayer2), QCoreApplication::translate("ConfigureInput", "Player 2", nullptr));
#if QT_CONFIG(accessibility)
        tabPlayer3->setAccessibleName(QCoreApplication::translate("ConfigureInput", "Player 3", nullptr));
#endif // QT_CONFIG(accessibility)
        tabWidget->setTabText(tabWidget->indexOf(tabPlayer3), QCoreApplication::translate("ConfigureInput", "Player 3", nullptr));
#if QT_CONFIG(accessibility)
        tabPlayer4->setAccessibleName(QCoreApplication::translate("ConfigureInput", "Player 4", nullptr));
#endif // QT_CONFIG(accessibility)
        tabWidget->setTabText(tabWidget->indexOf(tabPlayer4), QCoreApplication::translate("ConfigureInput", "Player 4", nullptr));
#if QT_CONFIG(accessibility)
        tabPlayer5->setAccessibleName(QCoreApplication::translate("ConfigureInput", "Player 5", nullptr));
#endif // QT_CONFIG(accessibility)
        tabWidget->setTabText(tabWidget->indexOf(tabPlayer5), QCoreApplication::translate("ConfigureInput", "Player 5", nullptr));
#if QT_CONFIG(accessibility)
        tabPlayer6->setAccessibleName(QCoreApplication::translate("ConfigureInput", "Player 6", nullptr));
#endif // QT_CONFIG(accessibility)
        tabWidget->setTabText(tabWidget->indexOf(tabPlayer6), QCoreApplication::translate("ConfigureInput", "Player 6", nullptr));
#if QT_CONFIG(accessibility)
        tabPlayer7->setAccessibleName(QCoreApplication::translate("ConfigureInput", "Player 7", nullptr));
#endif // QT_CONFIG(accessibility)
        tabWidget->setTabText(tabWidget->indexOf(tabPlayer7), QCoreApplication::translate("ConfigureInput", "Player 7", nullptr));
#if QT_CONFIG(accessibility)
        tabPlayer8->setAccessibleName(QCoreApplication::translate("ConfigureInput", "Player 8", nullptr));
#endif // QT_CONFIG(accessibility)
        tabWidget->setTabText(tabWidget->indexOf(tabPlayer8), QCoreApplication::translate("ConfigureInput", "Player 8", nullptr));
#if QT_CONFIG(accessibility)
        tabAdvanced->setAccessibleName(QCoreApplication::translate("ConfigureInput", "Advanced", nullptr));
#endif // QT_CONFIG(accessibility)
        tabWidget->setTabText(tabWidget->indexOf(tabAdvanced), QCoreApplication::translate("ConfigureInput", "Advanced", nullptr));
        handheldGroup->setTitle(QCoreApplication::translate("ConfigureInput", "Console Mode", nullptr));
        radioDocked->setText(QCoreApplication::translate("ConfigureInput", "Docked", nullptr));
        radioUndocked->setText(QCoreApplication::translate("ConfigureInput", "Handheld", nullptr));
        vibrationGroup->setTitle(QCoreApplication::translate("ConfigureInput", "Vibration", nullptr));
        vibrationButton->setText(QCoreApplication::translate("ConfigureInput", "Configure", nullptr));
        motionGroup->setTitle(QCoreApplication::translate("ConfigureInput", "Motion", nullptr));
        motionButton->setText(QCoreApplication::translate("ConfigureInput", "Configure", nullptr));
        checkboxPlayer2Connected->setText(QString());
        label_2->setText(QCoreApplication::translate("ConfigureInput", "Controllers", nullptr));
        checkboxPlayer4Connected->setText(QString());
        checkboxPlayer3Connected->setText(QString());
        checkboxPlayer5Connected->setText(QString());
        label->setText(QCoreApplication::translate("ConfigureInput", "1", nullptr));
        checkboxPlayer7Connected->setText(QString());
        checkboxPlayer6Connected->setText(QString());
        checkboxPlayer8Connected->setText(QString());
        label_3->setText(QCoreApplication::translate("ConfigureInput", "2", nullptr));
        label_4->setText(QCoreApplication::translate("ConfigureInput", "3", nullptr));
        label_5->setText(QCoreApplication::translate("ConfigureInput", "4", nullptr));
        label_6->setText(QCoreApplication::translate("ConfigureInput", "5", nullptr));
        label_7->setText(QCoreApplication::translate("ConfigureInput", "6", nullptr));
        label_8->setText(QCoreApplication::translate("ConfigureInput", "7", nullptr));
        label_9->setText(QCoreApplication::translate("ConfigureInput", "8", nullptr));
        label_10->setText(QCoreApplication::translate("ConfigureInput", "Connected", nullptr));
        buttonRestoreDefaults->setText(QCoreApplication::translate("ConfigureInput", "Defaults", nullptr));
        buttonClearAll->setText(QCoreApplication::translate("ConfigureInput", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureInput: public Ui_ConfigureInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_INPUT_H
