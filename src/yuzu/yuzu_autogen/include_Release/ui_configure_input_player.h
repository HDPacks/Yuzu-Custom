/********************************************************************************
** Form generated from reading UI file 'configure_input_player.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_INPUT_PLAYER_H
#define UI_CONFIGURE_INPUT_PLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "yuzu/configuration/configure_input_player_widget.h"

QT_BEGIN_NAMESPACE

class Ui_ConfigureInputPlayer
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *main;
    QHBoxLayout *top;
    QGroupBox *groupConnectedController;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboControllerType;
    QGroupBox *devicesGroup;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *comboDevices;
    QGroupBox *profilesGroup;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboProfiles;
    QPushButton *buttonProfilesSave;
    QPushButton *buttonProfilesNew;
    QPushButton *buttonProfilesDelete;
    QFrame *bottom;
    QHBoxLayout *_2;
    QWidget *bottomLeft;
    QVBoxLayout *bottomLeftLayout;
    QGroupBox *LStick;
    QVBoxLayout *verticalLayout_3;
    QWidget *buttonLStickUpWidget;
    QHBoxLayout *horizontalLayout_20;
    QSpacerItem *horizontalSpacerLStickUpLeft;
    QGroupBox *buttonLStickUpGroup;
    QVBoxLayout *buttonLStickUpVerticalLayout;
    QPushButton *buttonLStickUp;
    QSpacerItem *horizontalSpacerLStickUpRight;
    QHBoxLayout *buttonLStickLeftRightHorizontaLayout;
    QGroupBox *buttonLStickLeftGroup;
    QVBoxLayout *buttonLStickLeftVerticalLayout;
    QPushButton *buttonLStickLeft;
    QGroupBox *buttonLStickRightGroup;
    QVBoxLayout *buttonLStickRightVerticalLayout;
    QPushButton *buttonLStickRight;
    QWidget *buttonLStickDownWidget;
    QHBoxLayout *horizontalLayout_22;
    QSpacerItem *horizontalSpacerLStickDownLeft;
    QGroupBox *buttonLStickDownGroup;
    QVBoxLayout *buttonLStickDownVerticalLayout;
    QPushButton *buttonLStickDown;
    QSpacerItem *horizontalSpacerLStickDownRight;
    QHBoxLayout *buttonLStickPressedModifierHorizontalLayout;
    QGroupBox *buttonLStickPressedGroup;
    QVBoxLayout *buttonLStickPressedVerticalLayout;
    QPushButton *buttonLStick;
    QGroupBox *buttonLStickModGroup;
    QVBoxLayout *buttonLStickModVerticalLayout;
    QPushButton *buttonLStickMod;
    QGroupBox *buttonLStickRangeGroup;
    QHBoxLayout *buttonLStickRangeGroupHorizontalLayout;
    QSpinBox *spinboxLStickRange;
    QVBoxLayout *sliderLStickDeadzoneModifierRangeVerticalLayout;
    QHBoxLayout *sliderLStickDeadzoneHorizontalLayout;
    QLabel *labelLStickDeadzone;
    QSlider *sliderLStickDeadzone;
    QHBoxLayout *sliderLStickModifierRangeHorizontalLayout;
    QLabel *labelLStickModifierRange;
    QSlider *sliderLStickModifierRange;
    QSpacerItem *verticalSpacerBottomLeft;
    QGroupBox *Dpad;
    QVBoxLayout *verticalLayout_5;
    QWidget *buttonDpadUpWidget;
    QHBoxLayout *horizontalLayout_23;
    QSpacerItem *horizontalSpacerDpadUpLeft;
    QGroupBox *buttonDpadUpGroup;
    QVBoxLayout *buttonDpadUpVerticalLayout;
    QPushButton *buttonDpadUp;
    QSpacerItem *horizontalSpacerDpadUpRight;
    QHBoxLayout *buttonDpadLeftRightHorizontalLayout;
    QGroupBox *buttonDpadLeftGroup;
    QVBoxLayout *buttonDpadLeftVerticalLayout;
    QPushButton *buttonDpadLeft;
    QGroupBox *buttonDpadRightGroup;
    QVBoxLayout *buttonDpadRightVerticalLayout;
    QPushButton *buttonDpadRight;
    QWidget *buttonDpadDownWidget;
    QHBoxLayout *horizontalLayout_24;
    QSpacerItem *horizontalSpacerDpadDownLeft;
    QGroupBox *buttonDpadDownGroup;
    QVBoxLayout *buttonDpadDownVerticalLayout;
    QPushButton *buttonDpadDown;
    QSpacerItem *horizontalSpacerDpadDownRight;
    QSpacerItem *verticalSpacerBottomLeft_2;
    QWidget *bottomMiddle;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *shoulderButtons;
    QWidget *buttonShoulderButtonsSLSRLeft;
    QVBoxLayout *buttonShoulderButtonsSLSRLeftVerticalLayout;
    QGroupBox *buttonShoulderButtonsSLLeftGroup;
    QVBoxLayout *buttonShoulderButtonsSLLeftVerticalLayout;
    QPushButton *buttonSLLeft;
    QGroupBox *buttonShoulderButtonsSRLeftGroup;
    QVBoxLayout *buttonShoulderButtonsSRLeftVerticalLayout;
    QPushButton *buttonSRLeft;
    QWidget *horizontalSpacerShoulderButtonsWidget4;
    QHBoxLayout *horizontalSpacerShoulderButtonsWidget4Layout;
    QSpacerItem *horizontalSpacerShoulderButtons5;
    QWidget *buttonShoulderButtonsLeft;
    QVBoxLayout *buttonShoulderButtonsLeftVerticalLayout;
    QGroupBox *buttonShoulderButtonsButtonLGroup;
    QVBoxLayout *buttonShoulderButtonsLVerticalLayout;
    QPushButton *buttonL;
    QGroupBox *buttonShoulderButtonsButtonZLGroup;
    QVBoxLayout *buttonShoulderButtonsZLVerticalLayout;
    QPushButton *buttonZL;
    QSlider *sliderZLThreshold;
    QWidget *horizontalSpacerShoulderButtonsWidget;
    QHBoxLayout *horizontalSpacerShoulderButtonsWidgetLayout;
    QSpacerItem *horizontalSpacerShoulderButtons1;
    QWidget *buttonMiscButtonsMinusScreenshot;
    QVBoxLayout *buttonMiscButtonsMinusScreenshotVerticalLayout;
    QGroupBox *buttonMiscButtonsMinusGroup;
    QVBoxLayout *buttonMiscMinusVerticalLayout;
    QPushButton *buttonMinus;
    QGroupBox *buttonMiscButtonsScreenshotGroup;
    QVBoxLayout *buttonMiscScrCapVerticalLayout;
    QPushButton *buttonScreenshot;
    QWidget *buttonMiscButtonsPlusHome;
    QVBoxLayout *buttonMiscButtonsPlusHomeVerticalLayout;
    QGroupBox *buttonMiscButtonsPlusGroup;
    QVBoxLayout *buttonMiscPlusVerticalLayout;
    QPushButton *buttonPlus;
    QGroupBox *buttonMiscButtonsHomeGroup;
    QVBoxLayout *buttonMiscHomeVerticalLayout;
    QPushButton *buttonHome;
    QWidget *horizontalSpacerShoulderButtonsWidget3;
    QHBoxLayout *horizontalSpacerShoulderButtonsWidget3Layout;
    QSpacerItem *horizontalSpacerShoulderButtons2;
    QWidget *buttonShoulderButtonsRight;
    QVBoxLayout *buttonShoulderButtonsRightVerticalLayout;
    QGroupBox *buttonShoulderButtonsRGroup;
    QVBoxLayout *buttonShoulderButtonsRVerticalLayout;
    QPushButton *buttonR;
    QGroupBox *buttonShoulderButtonsZRGroup;
    QVBoxLayout *buttonShoulderButtonsZRVerticalLayout;
    QPushButton *buttonZR;
    QSlider *sliderZRThreshold;
    QWidget *horizontalSpacerShoulderButtonsWidget2;
    QHBoxLayout *horizontalSpacerShoulderButtonsWidget2Layout;
    QSpacerItem *horizontalSpacerShoulderButtons3;
    QWidget *buttonShoulderButtonsSLSRRight;
    QVBoxLayout *buttonShoulderButtonsSLSRRightVerticalLayout;
    QGroupBox *buttonShoulderButtonsSLRightGroup;
    QVBoxLayout *buttonShoulderButtonsSLRightVerticalLayout;
    QPushButton *buttonSLRight;
    QGroupBox *buttonShoulderButtonsSRRightGroup;
    QVBoxLayout *buttonShoulderButtonsSRRightVerticalLayout;
    QPushButton *buttonSRRight;
    PlayerControlPreview *controllerFrame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *miscButtons;
    QSpacerItem *horizontalSpacerMiscButtons1;
    QGroupBox *buttonMotionLeftGroup;
    QVBoxLayout *buttonDpadLeftVerticalLayout_2;
    QPushButton *buttonMotionLeft;
    QGroupBox *buttonMotionRightGroup;
    QVBoxLayout *buttonDpadRightVerticalLayout_2;
    QPushButton *buttonMotionRight;
    QSpacerItem *horizontalSpacerMiscButtons4;
    QWidget *bottomRight;
    QVBoxLayout *bottomRightLayout;
    QGroupBox *faceButtons;
    QVBoxLayout *verticalLayout;
    QWidget *buttonFaceButtonsBWidget;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacerBLeft;
    QGroupBox *buttonFaceButtonsXGroup;
    QVBoxLayout *buttonFaceButtonsXVerticalLayout;
    QPushButton *buttonX;
    QSpacerItem *horizontalSpacerBRight;
    QHBoxLayout *buttonFaceButtonsYAHorizontalLayout;
    QGroupBox *buttonFaceButtonsYGroup;
    QVBoxLayout *buttonFaceButtonsYVerticalLayout;
    QPushButton *buttonY;
    QGroupBox *buttonFaceButtonsAGroup;
    QVBoxLayout *buttonFaceButtonsAVerticalLayout;
    QPushButton *buttonA;
    QWidget *buttonFaceButtonsXWidget;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacerXLeft;
    QGroupBox *buttonFaceButtonsBWidget_2;
    QVBoxLayout *buttonFaceButtonsBVerticalLayout;
    QPushButton *buttonB;
    QSpacerItem *horizontalSpacerXRight;
    QSpacerItem *verticalSpacerBottomRight;
    QGroupBox *RStick;
    QVBoxLayout *verticalLayout_2;
    QWidget *buttonRStickUpWidget;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacerRStickUpLeft;
    QGroupBox *buttonRStickUpGroup;
    QVBoxLayout *buttonRStickUpVerticalLayout;
    QPushButton *buttonRStickUp;
    QSpacerItem *horizontalSpacerRStickUpRight;
    QHBoxLayout *buttonRStickLeftRightHorizontalLayout;
    QGroupBox *buttonRStickLeftGroup;
    QVBoxLayout *buttonRStickLeftVerticalLayout;
    QPushButton *buttonRStickLeft;
    QGroupBox *buttonRStickRightGroup;
    QVBoxLayout *buttonRStickRightVerticalLayout;
    QPushButton *buttonRStickRight;
    QWidget *buttonRStickDownWidget;
    QHBoxLayout *horizontalLayout_11;
    QSpacerItem *horizontalSpacerRStickDownLeft;
    QGroupBox *buttonRStickDownGroup;
    QVBoxLayout *buttonRStickDownVerticalLayout;
    QPushButton *buttonRStickDown;
    QSpacerItem *horizontalSpacerRStickDownRight;
    QHBoxLayout *buttonRStickPressedModifierHorizontalLayout;
    QGroupBox *groupRStickPressed;
    QVBoxLayout *buttonRStickPressedVerticalLayout;
    QPushButton *buttonRStick;
    QGroupBox *buttonRStickModGroup;
    QVBoxLayout *buttonRStickModVerticalLayout;
    QPushButton *buttonRStickMod;
    QGroupBox *buttonRStickRangeGroup;
    QHBoxLayout *buttonRStickRangeGroupHorizontalLayout;
    QSpinBox *spinboxRStickRange;
    QVBoxLayout *sliderRStickDeadzoneModifierRangeVerticalLayout;
    QHBoxLayout *sliderRStickDeadzoneHorizontalLayout;
    QLabel *labelRStickDeadzone;
    QSlider *sliderRStickDeadzone;
    QHBoxLayout *sliderRStickModifierRangeHorizontalLayout;
    QLabel *labelRStickModifierRange;
    QSlider *sliderRStickModifierRange;
    QWidget *mousePanningWidget;
    QHBoxLayout *mousePanningHorizontalLayout;
    QSpacerItem *mousePanningHorizontalSpacerLeft;
    QGroupBox *mousePanningGroup;
    QVBoxLayout *mousePanningVerticalLayout;
    QPushButton *mousePanningButton;
    QSpacerItem *mousePanningHorizontalSpacerRight;
    QSpacerItem *verticalSpacerBottomRight_2;

    void setupUi(QWidget *ConfigureInputPlayer)
    {
        if (ConfigureInputPlayer->objectName().isEmpty())
            ConfigureInputPlayer->setObjectName(QString::fromUtf8("ConfigureInputPlayer"));
        ConfigureInputPlayer->resize(780, 487);
        horizontalLayout_2 = new QHBoxLayout(ConfigureInputPlayer);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        main = new QVBoxLayout();
        main->setSpacing(0);
        main->setObjectName(QString::fromUtf8("main"));
        main->setContentsMargins(0, 0, 0, 0);
        top = new QHBoxLayout();
        top->setSpacing(3);
        top->setObjectName(QString::fromUtf8("top"));
        top->setContentsMargins(-1, 0, -1, -1);
        groupConnectedController = new QGroupBox(ConfigureInputPlayer);
        groupConnectedController->setObjectName(QString::fromUtf8("groupConnectedController"));
        groupConnectedController->setLayoutDirection(Qt::LeftToRight);
        groupConnectedController->setFlat(false);
        groupConnectedController->setCheckable(true);
        horizontalLayout_3 = new QHBoxLayout(groupConnectedController);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, 5, 5, 5);
        comboControllerType = new QComboBox(groupConnectedController);
        comboControllerType->setObjectName(QString::fromUtf8("comboControllerType"));
        comboControllerType->setMinimumSize(QSize(0, 21));

        horizontalLayout_3->addWidget(comboControllerType);


        top->addWidget(groupConnectedController);

        devicesGroup = new QGroupBox(ConfigureInputPlayer);
        devicesGroup->setObjectName(QString::fromUtf8("devicesGroup"));
        horizontalLayout_5 = new QHBoxLayout(devicesGroup);
        horizontalLayout_5->setSpacing(3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(5, 5, 5, 5);
        comboDevices = new QComboBox(devicesGroup);
        comboDevices->setObjectName(QString::fromUtf8("comboDevices"));
        comboDevices->setMinimumContentsLength(60);

        horizontalLayout_5->addWidget(comboDevices);


        top->addWidget(devicesGroup);

        profilesGroup = new QGroupBox(ConfigureInputPlayer);
        profilesGroup->setObjectName(QString::fromUtf8("profilesGroup"));
        profilesGroup->setMinimumSize(QSize(0, 0));
        horizontalLayout_4 = new QHBoxLayout(profilesGroup);
        horizontalLayout_4->setSpacing(3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(5, 5, 5, 5);
        comboProfiles = new QComboBox(profilesGroup);
        comboProfiles->setObjectName(QString::fromUtf8("comboProfiles"));
        comboProfiles->setMinimumSize(QSize(0, 21));

        horizontalLayout_4->addWidget(comboProfiles);

        buttonProfilesSave = new QPushButton(profilesGroup);
        buttonProfilesSave->setObjectName(QString::fromUtf8("buttonProfilesSave"));
        buttonProfilesSave->setMaximumSize(QSize(68, 16777215));
        buttonProfilesSave->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        horizontalLayout_4->addWidget(buttonProfilesSave);

        buttonProfilesNew = new QPushButton(profilesGroup);
        buttonProfilesNew->setObjectName(QString::fromUtf8("buttonProfilesNew"));
        buttonProfilesNew->setMaximumSize(QSize(68, 16777215));
        buttonProfilesNew->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        horizontalLayout_4->addWidget(buttonProfilesNew);

        buttonProfilesDelete = new QPushButton(profilesGroup);
        buttonProfilesDelete->setObjectName(QString::fromUtf8("buttonProfilesDelete"));
        buttonProfilesDelete->setMaximumSize(QSize(68, 16777215));
        buttonProfilesDelete->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        horizontalLayout_4->addWidget(buttonProfilesDelete);

        horizontalLayout_4->setStretch(0, 2);

        top->addWidget(profilesGroup);

        top->setStretch(1, 1);
        top->setStretch(2, 2);

        main->addLayout(top);

        bottom = new QFrame(ConfigureInputPlayer);
        bottom->setObjectName(QString::fromUtf8("bottom"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bottom->sizePolicy().hasHeightForWidth());
        bottom->setSizePolicy(sizePolicy);
        _2 = new QHBoxLayout(bottom);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setSizeConstraint(QLayout::SetMinimumSize);
        _2->setContentsMargins(0, 0, 0, 0);
        bottomLeft = new QWidget(bottom);
        bottomLeft->setObjectName(QString::fromUtf8("bottomLeft"));
        bottomLeftLayout = new QVBoxLayout(bottomLeft);
        bottomLeftLayout->setSpacing(0);
        bottomLeftLayout->setObjectName(QString::fromUtf8("bottomLeftLayout"));
        bottomLeftLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        bottomLeftLayout->setContentsMargins(0, 0, 0, 0);
        LStick = new QGroupBox(bottomLeft);
        LStick->setObjectName(QString::fromUtf8("LStick"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LStick->sizePolicy().hasHeightForWidth());
        LStick->setSizePolicy(sizePolicy1);
        LStick->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout_3 = new QVBoxLayout(LStick);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(3, 6, 3, 0);
        buttonLStickUpWidget = new QWidget(LStick);
        buttonLStickUpWidget->setObjectName(QString::fromUtf8("buttonLStickUpWidget"));
        horizontalLayout_20 = new QHBoxLayout(buttonLStickUpWidget);
        horizontalLayout_20->setSpacing(0);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerLStickUpLeft = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacerLStickUpLeft);

        buttonLStickUpGroup = new QGroupBox(buttonLStickUpWidget);
        buttonLStickUpGroup->setObjectName(QString::fromUtf8("buttonLStickUpGroup"));
        buttonLStickUpGroup->setAlignment(Qt::AlignCenter);
        buttonLStickUpGroup->setFlat(false);
        buttonLStickUpVerticalLayout = new QVBoxLayout(buttonLStickUpGroup);
        buttonLStickUpVerticalLayout->setSpacing(3);
        buttonLStickUpVerticalLayout->setObjectName(QString::fromUtf8("buttonLStickUpVerticalLayout"));
        buttonLStickUpVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonLStickUp = new QPushButton(buttonLStickUpGroup);
        buttonLStickUp->setObjectName(QString::fromUtf8("buttonLStickUp"));
        buttonLStickUp->setMinimumSize(QSize(68, 0));
        buttonLStickUp->setMaximumSize(QSize(68, 16777215));
        buttonLStickUp->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonLStickUpVerticalLayout->addWidget(buttonLStickUp);


        horizontalLayout_20->addWidget(buttonLStickUpGroup, 0, Qt::AlignHCenter);

        horizontalSpacerLStickUpRight = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacerLStickUpRight);


        verticalLayout_3->addWidget(buttonLStickUpWidget);

        buttonLStickLeftRightHorizontaLayout = new QHBoxLayout();
        buttonLStickLeftRightHorizontaLayout->setSpacing(3);
        buttonLStickLeftRightHorizontaLayout->setObjectName(QString::fromUtf8("buttonLStickLeftRightHorizontaLayout"));
        buttonLStickLeftGroup = new QGroupBox(LStick);
        buttonLStickLeftGroup->setObjectName(QString::fromUtf8("buttonLStickLeftGroup"));
        buttonLStickLeftGroup->setAlignment(Qt::AlignCenter);
        buttonLStickLeftVerticalLayout = new QVBoxLayout(buttonLStickLeftGroup);
        buttonLStickLeftVerticalLayout->setSpacing(3);
        buttonLStickLeftVerticalLayout->setObjectName(QString::fromUtf8("buttonLStickLeftVerticalLayout"));
        buttonLStickLeftVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonLStickLeft = new QPushButton(buttonLStickLeftGroup);
        buttonLStickLeft->setObjectName(QString::fromUtf8("buttonLStickLeft"));
        buttonLStickLeft->setMinimumSize(QSize(68, 0));
        buttonLStickLeft->setMaximumSize(QSize(68, 16777215));
        buttonLStickLeft->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonLStickLeftVerticalLayout->addWidget(buttonLStickLeft);


        buttonLStickLeftRightHorizontaLayout->addWidget(buttonLStickLeftGroup, 0, Qt::AlignHCenter);

        buttonLStickRightGroup = new QGroupBox(LStick);
        buttonLStickRightGroup->setObjectName(QString::fromUtf8("buttonLStickRightGroup"));
        buttonLStickRightGroup->setAlignment(Qt::AlignCenter);
        buttonLStickRightVerticalLayout = new QVBoxLayout(buttonLStickRightGroup);
        buttonLStickRightVerticalLayout->setSpacing(3);
        buttonLStickRightVerticalLayout->setObjectName(QString::fromUtf8("buttonLStickRightVerticalLayout"));
        buttonLStickRightVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonLStickRight = new QPushButton(buttonLStickRightGroup);
        buttonLStickRight->setObjectName(QString::fromUtf8("buttonLStickRight"));
        buttonLStickRight->setMinimumSize(QSize(68, 0));
        buttonLStickRight->setMaximumSize(QSize(68, 16777215));
        buttonLStickRight->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonLStickRightVerticalLayout->addWidget(buttonLStickRight);


        buttonLStickLeftRightHorizontaLayout->addWidget(buttonLStickRightGroup, 0, Qt::AlignHCenter);


        verticalLayout_3->addLayout(buttonLStickLeftRightHorizontaLayout);

        buttonLStickDownWidget = new QWidget(LStick);
        buttonLStickDownWidget->setObjectName(QString::fromUtf8("buttonLStickDownWidget"));
        horizontalLayout_22 = new QHBoxLayout(buttonLStickDownWidget);
        horizontalLayout_22->setSpacing(0);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerLStickDownLeft = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacerLStickDownLeft);

        buttonLStickDownGroup = new QGroupBox(buttonLStickDownWidget);
        buttonLStickDownGroup->setObjectName(QString::fromUtf8("buttonLStickDownGroup"));
        buttonLStickDownGroup->setAlignment(Qt::AlignCenter);
        buttonLStickDownVerticalLayout = new QVBoxLayout(buttonLStickDownGroup);
        buttonLStickDownVerticalLayout->setSpacing(3);
        buttonLStickDownVerticalLayout->setObjectName(QString::fromUtf8("buttonLStickDownVerticalLayout"));
        buttonLStickDownVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonLStickDown = new QPushButton(buttonLStickDownGroup);
        buttonLStickDown->setObjectName(QString::fromUtf8("buttonLStickDown"));
        buttonLStickDown->setMinimumSize(QSize(68, 0));
        buttonLStickDown->setMaximumSize(QSize(68, 16777215));
        buttonLStickDown->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonLStickDownVerticalLayout->addWidget(buttonLStickDown);


        horizontalLayout_22->addWidget(buttonLStickDownGroup, 0, Qt::AlignHCenter);

        horizontalSpacerLStickDownRight = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacerLStickDownRight);


        verticalLayout_3->addWidget(buttonLStickDownWidget);

        buttonLStickPressedModifierHorizontalLayout = new QHBoxLayout();
        buttonLStickPressedModifierHorizontalLayout->setSpacing(3);
        buttonLStickPressedModifierHorizontalLayout->setObjectName(QString::fromUtf8("buttonLStickPressedModifierHorizontalLayout"));
        buttonLStickPressedGroup = new QGroupBox(LStick);
        buttonLStickPressedGroup->setObjectName(QString::fromUtf8("buttonLStickPressedGroup"));
        buttonLStickPressedGroup->setAlignment(Qt::AlignCenter);
        buttonLStickPressedVerticalLayout = new QVBoxLayout(buttonLStickPressedGroup);
        buttonLStickPressedVerticalLayout->setSpacing(3);
        buttonLStickPressedVerticalLayout->setObjectName(QString::fromUtf8("buttonLStickPressedVerticalLayout"));
        buttonLStickPressedVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonLStick = new QPushButton(buttonLStickPressedGroup);
        buttonLStick->setObjectName(QString::fromUtf8("buttonLStick"));
        buttonLStick->setMinimumSize(QSize(68, 0));
        buttonLStick->setMaximumSize(QSize(68, 16777215));
        buttonLStick->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonLStickPressedVerticalLayout->addWidget(buttonLStick);


        buttonLStickPressedModifierHorizontalLayout->addWidget(buttonLStickPressedGroup, 0, Qt::AlignHCenter);

        buttonLStickModGroup = new QGroupBox(LStick);
        buttonLStickModGroup->setObjectName(QString::fromUtf8("buttonLStickModGroup"));
        buttonLStickModGroup->setAlignment(Qt::AlignCenter);
        buttonLStickModVerticalLayout = new QVBoxLayout(buttonLStickModGroup);
        buttonLStickModVerticalLayout->setSpacing(3);
        buttonLStickModVerticalLayout->setObjectName(QString::fromUtf8("buttonLStickModVerticalLayout"));
        buttonLStickModVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonLStickMod = new QPushButton(buttonLStickModGroup);
        buttonLStickMod->setObjectName(QString::fromUtf8("buttonLStickMod"));
        buttonLStickMod->setMinimumSize(QSize(68, 0));
        buttonLStickMod->setMaximumSize(QSize(68, 16777215));
        buttonLStickMod->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonLStickModVerticalLayout->addWidget(buttonLStickMod);


        buttonLStickPressedModifierHorizontalLayout->addWidget(buttonLStickModGroup, 0, Qt::AlignHCenter);

        buttonLStickRangeGroup = new QGroupBox(LStick);
        buttonLStickRangeGroup->setObjectName(QString::fromUtf8("buttonLStickRangeGroup"));
        buttonLStickRangeGroupHorizontalLayout = new QHBoxLayout(buttonLStickRangeGroup);
        buttonLStickRangeGroupHorizontalLayout->setSpacing(3);
        buttonLStickRangeGroupHorizontalLayout->setObjectName(QString::fromUtf8("buttonLStickRangeGroupHorizontalLayout"));
        buttonLStickRangeGroupHorizontalLayout->setContentsMargins(3, 3, 3, 3);
        spinboxLStickRange = new QSpinBox(buttonLStickRangeGroup);
        spinboxLStickRange->setObjectName(QString::fromUtf8("spinboxLStickRange"));
        spinboxLStickRange->setMinimumSize(QSize(68, 21));
        spinboxLStickRange->setMaximumSize(QSize(68, 16777215));
        spinboxLStickRange->setMinimum(25);
        spinboxLStickRange->setMaximum(150);
        spinboxLStickRange->setValue(95);

        buttonLStickRangeGroupHorizontalLayout->addWidget(spinboxLStickRange);


        buttonLStickPressedModifierHorizontalLayout->addWidget(buttonLStickRangeGroup);


        verticalLayout_3->addLayout(buttonLStickPressedModifierHorizontalLayout);

        sliderLStickDeadzoneModifierRangeVerticalLayout = new QVBoxLayout();
        sliderLStickDeadzoneModifierRangeVerticalLayout->setSpacing(3);
        sliderLStickDeadzoneModifierRangeVerticalLayout->setObjectName(QString::fromUtf8("sliderLStickDeadzoneModifierRangeVerticalLayout"));
        sliderLStickDeadzoneModifierRangeVerticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        sliderLStickDeadzoneModifierRangeVerticalLayout->setContentsMargins(0, 2, 0, 3);
        sliderLStickDeadzoneHorizontalLayout = new QHBoxLayout();
        sliderLStickDeadzoneHorizontalLayout->setObjectName(QString::fromUtf8("sliderLStickDeadzoneHorizontalLayout"));
        labelLStickDeadzone = new QLabel(LStick);
        labelLStickDeadzone->setObjectName(QString::fromUtf8("labelLStickDeadzone"));
        labelLStickDeadzone->setAlignment(Qt::AlignHCenter);

        sliderLStickDeadzoneHorizontalLayout->addWidget(labelLStickDeadzone);


        sliderLStickDeadzoneModifierRangeVerticalLayout->addLayout(sliderLStickDeadzoneHorizontalLayout);

        sliderLStickDeadzone = new QSlider(LStick);
        sliderLStickDeadzone->setObjectName(QString::fromUtf8("sliderLStickDeadzone"));
        sliderLStickDeadzone->setMaximum(100);
        sliderLStickDeadzone->setOrientation(Qt::Horizontal);

        sliderLStickDeadzoneModifierRangeVerticalLayout->addWidget(sliderLStickDeadzone);

        sliderLStickModifierRangeHorizontalLayout = new QHBoxLayout();
        sliderLStickModifierRangeHorizontalLayout->setObjectName(QString::fromUtf8("sliderLStickModifierRangeHorizontalLayout"));
        labelLStickModifierRange = new QLabel(LStick);
        labelLStickModifierRange->setObjectName(QString::fromUtf8("labelLStickModifierRange"));
        labelLStickModifierRange->setAlignment(Qt::AlignHCenter);

        sliderLStickModifierRangeHorizontalLayout->addWidget(labelLStickModifierRange);


        sliderLStickDeadzoneModifierRangeVerticalLayout->addLayout(sliderLStickModifierRangeHorizontalLayout);

        sliderLStickModifierRange = new QSlider(LStick);
        sliderLStickModifierRange->setObjectName(QString::fromUtf8("sliderLStickModifierRange"));
        sliderLStickModifierRange->setMaximum(100);
        sliderLStickModifierRange->setOrientation(Qt::Horizontal);

        sliderLStickDeadzoneModifierRangeVerticalLayout->addWidget(sliderLStickModifierRange);


        verticalLayout_3->addLayout(sliderLStickDeadzoneModifierRangeVerticalLayout);


        bottomLeftLayout->addWidget(LStick);

        verticalSpacerBottomLeft = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        bottomLeftLayout->addItem(verticalSpacerBottomLeft);

        Dpad = new QGroupBox(bottomLeft);
        Dpad->setObjectName(QString::fromUtf8("Dpad"));
        sizePolicy1.setHeightForWidth(Dpad->sizePolicy().hasHeightForWidth());
        Dpad->setSizePolicy(sizePolicy1);
        Dpad->setFlat(false);
        Dpad->setCheckable(false);
        verticalLayout_5 = new QVBoxLayout(Dpad);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(3, 6, 3, 3);
        buttonDpadUpWidget = new QWidget(Dpad);
        buttonDpadUpWidget->setObjectName(QString::fromUtf8("buttonDpadUpWidget"));
        horizontalLayout_23 = new QHBoxLayout(buttonDpadUpWidget);
        horizontalLayout_23->setSpacing(0);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_23->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerDpadUpLeft = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacerDpadUpLeft);

        buttonDpadUpGroup = new QGroupBox(buttonDpadUpWidget);
        buttonDpadUpGroup->setObjectName(QString::fromUtf8("buttonDpadUpGroup"));
        buttonDpadUpGroup->setAlignment(Qt::AlignCenter);
        buttonDpadUpVerticalLayout = new QVBoxLayout(buttonDpadUpGroup);
        buttonDpadUpVerticalLayout->setSpacing(3);
        buttonDpadUpVerticalLayout->setObjectName(QString::fromUtf8("buttonDpadUpVerticalLayout"));
        buttonDpadUpVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonDpadUp = new QPushButton(buttonDpadUpGroup);
        buttonDpadUp->setObjectName(QString::fromUtf8("buttonDpadUp"));
        buttonDpadUp->setMinimumSize(QSize(68, 0));
        buttonDpadUp->setMaximumSize(QSize(68, 16777215));
        buttonDpadUp->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonDpadUpVerticalLayout->addWidget(buttonDpadUp);


        horizontalLayout_23->addWidget(buttonDpadUpGroup, 0, Qt::AlignHCenter);

        horizontalSpacerDpadUpRight = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacerDpadUpRight);


        verticalLayout_5->addWidget(buttonDpadUpWidget);

        buttonDpadLeftRightHorizontalLayout = new QHBoxLayout();
        buttonDpadLeftRightHorizontalLayout->setSpacing(3);
        buttonDpadLeftRightHorizontalLayout->setObjectName(QString::fromUtf8("buttonDpadLeftRightHorizontalLayout"));
        buttonDpadLeftGroup = new QGroupBox(Dpad);
        buttonDpadLeftGroup->setObjectName(QString::fromUtf8("buttonDpadLeftGroup"));
        buttonDpadLeftGroup->setAlignment(Qt::AlignCenter);
        buttonDpadLeftVerticalLayout = new QVBoxLayout(buttonDpadLeftGroup);
        buttonDpadLeftVerticalLayout->setSpacing(3);
        buttonDpadLeftVerticalLayout->setObjectName(QString::fromUtf8("buttonDpadLeftVerticalLayout"));
        buttonDpadLeftVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonDpadLeft = new QPushButton(buttonDpadLeftGroup);
        buttonDpadLeft->setObjectName(QString::fromUtf8("buttonDpadLeft"));
        buttonDpadLeft->setMinimumSize(QSize(68, 0));
        buttonDpadLeft->setMaximumSize(QSize(68, 16777215));
        buttonDpadLeft->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonDpadLeftVerticalLayout->addWidget(buttonDpadLeft);


        buttonDpadLeftRightHorizontalLayout->addWidget(buttonDpadLeftGroup, 0, Qt::AlignHCenter);

        buttonDpadRightGroup = new QGroupBox(Dpad);
        buttonDpadRightGroup->setObjectName(QString::fromUtf8("buttonDpadRightGroup"));
        buttonDpadRightGroup->setAlignment(Qt::AlignCenter);
        buttonDpadRightVerticalLayout = new QVBoxLayout(buttonDpadRightGroup);
        buttonDpadRightVerticalLayout->setSpacing(3);
        buttonDpadRightVerticalLayout->setObjectName(QString::fromUtf8("buttonDpadRightVerticalLayout"));
        buttonDpadRightVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonDpadRight = new QPushButton(buttonDpadRightGroup);
        buttonDpadRight->setObjectName(QString::fromUtf8("buttonDpadRight"));
        buttonDpadRight->setMinimumSize(QSize(68, 0));
        buttonDpadRight->setMaximumSize(QSize(68, 16777215));
        buttonDpadRight->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonDpadRightVerticalLayout->addWidget(buttonDpadRight);


        buttonDpadLeftRightHorizontalLayout->addWidget(buttonDpadRightGroup, 0, Qt::AlignHCenter);


        verticalLayout_5->addLayout(buttonDpadLeftRightHorizontalLayout);

        buttonDpadDownWidget = new QWidget(Dpad);
        buttonDpadDownWidget->setObjectName(QString::fromUtf8("buttonDpadDownWidget"));
        horizontalLayout_24 = new QHBoxLayout(buttonDpadDownWidget);
        horizontalLayout_24->setSpacing(0);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerDpadDownLeft = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacerDpadDownLeft);

        buttonDpadDownGroup = new QGroupBox(buttonDpadDownWidget);
        buttonDpadDownGroup->setObjectName(QString::fromUtf8("buttonDpadDownGroup"));
        buttonDpadDownGroup->setAlignment(Qt::AlignCenter);
        buttonDpadDownVerticalLayout = new QVBoxLayout(buttonDpadDownGroup);
        buttonDpadDownVerticalLayout->setSpacing(3);
        buttonDpadDownVerticalLayout->setObjectName(QString::fromUtf8("buttonDpadDownVerticalLayout"));
        buttonDpadDownVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonDpadDown = new QPushButton(buttonDpadDownGroup);
        buttonDpadDown->setObjectName(QString::fromUtf8("buttonDpadDown"));
        buttonDpadDown->setMinimumSize(QSize(68, 0));
        buttonDpadDown->setMaximumSize(QSize(68, 16777215));
        buttonDpadDown->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonDpadDownVerticalLayout->addWidget(buttonDpadDown);


        horizontalLayout_24->addWidget(buttonDpadDownGroup, 0, Qt::AlignHCenter);

        horizontalSpacerDpadDownRight = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacerDpadDownRight);


        verticalLayout_5->addWidget(buttonDpadDownWidget);


        bottomLeftLayout->addWidget(Dpad);

        verticalSpacerBottomLeft_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        bottomLeftLayout->addItem(verticalSpacerBottomLeft_2);


        _2->addWidget(bottomLeft);

        bottomMiddle = new QWidget(bottom);
        bottomMiddle->setObjectName(QString::fromUtf8("bottomMiddle"));
        vboxLayout = new QVBoxLayout(bottomMiddle);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        shoulderButtons = new QHBoxLayout();
        shoulderButtons->setSpacing(3);
        shoulderButtons->setObjectName(QString::fromUtf8("shoulderButtons"));
        buttonShoulderButtonsSLSRLeft = new QWidget(bottomMiddle);
        buttonShoulderButtonsSLSRLeft->setObjectName(QString::fromUtf8("buttonShoulderButtonsSLSRLeft"));
        buttonShoulderButtonsSLSRLeftVerticalLayout = new QVBoxLayout(buttonShoulderButtonsSLSRLeft);
        buttonShoulderButtonsSLSRLeftVerticalLayout->setSpacing(0);
        buttonShoulderButtonsSLSRLeftVerticalLayout->setObjectName(QString::fromUtf8("buttonShoulderButtonsSLSRLeftVerticalLayout"));
        buttonShoulderButtonsSLSRLeftVerticalLayout->setContentsMargins(0, 0, 0, 0);
        buttonShoulderButtonsSLLeftGroup = new QGroupBox(buttonShoulderButtonsSLSRLeft);
        buttonShoulderButtonsSLLeftGroup->setObjectName(QString::fromUtf8("buttonShoulderButtonsSLLeftGroup"));
        buttonShoulderButtonsSLLeftGroup->setAlignment(Qt::AlignCenter);
        buttonShoulderButtonsSLLeftVerticalLayout = new QVBoxLayout(buttonShoulderButtonsSLLeftGroup);
        buttonShoulderButtonsSLLeftVerticalLayout->setSpacing(3);
        buttonShoulderButtonsSLLeftVerticalLayout->setObjectName(QString::fromUtf8("buttonShoulderButtonsSLLeftVerticalLayout"));
        buttonShoulderButtonsSLLeftVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonSLLeft = new QPushButton(buttonShoulderButtonsSLLeftGroup);
        buttonSLLeft->setObjectName(QString::fromUtf8("buttonSLLeft"));
        buttonSLLeft->setMinimumSize(QSize(68, 0));
        buttonSLLeft->setMaximumSize(QSize(68, 16777215));
        buttonSLLeft->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonShoulderButtonsSLLeftVerticalLayout->addWidget(buttonSLLeft);


        buttonShoulderButtonsSLSRLeftVerticalLayout->addWidget(buttonShoulderButtonsSLLeftGroup, 0, Qt::AlignHCenter);

        buttonShoulderButtonsSRLeftGroup = new QGroupBox(buttonShoulderButtonsSLSRLeft);
        buttonShoulderButtonsSRLeftGroup->setObjectName(QString::fromUtf8("buttonShoulderButtonsSRLeftGroup"));
        buttonShoulderButtonsSRLeftGroup->setAlignment(Qt::AlignCenter);
        buttonShoulderButtonsSRLeftVerticalLayout = new QVBoxLayout(buttonShoulderButtonsSRLeftGroup);
        buttonShoulderButtonsSRLeftVerticalLayout->setSpacing(3);
        buttonShoulderButtonsSRLeftVerticalLayout->setObjectName(QString::fromUtf8("buttonShoulderButtonsSRLeftVerticalLayout"));
        buttonShoulderButtonsSRLeftVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonSRLeft = new QPushButton(buttonShoulderButtonsSRLeftGroup);
        buttonSRLeft->setObjectName(QString::fromUtf8("buttonSRLeft"));
        buttonSRLeft->setMinimumSize(QSize(68, 0));
        buttonSRLeft->setMaximumSize(QSize(68, 16777215));
        buttonSRLeft->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonShoulderButtonsSRLeftVerticalLayout->addWidget(buttonSRLeft);


        buttonShoulderButtonsSLSRLeftVerticalLayout->addWidget(buttonShoulderButtonsSRLeftGroup, 0, Qt::AlignHCenter);


        shoulderButtons->addWidget(buttonShoulderButtonsSLSRLeft);

        horizontalSpacerShoulderButtonsWidget4 = new QWidget(bottomMiddle);
        horizontalSpacerShoulderButtonsWidget4->setObjectName(QString::fromUtf8("horizontalSpacerShoulderButtonsWidget4"));
        horizontalSpacerShoulderButtonsWidget4Layout = new QHBoxLayout(horizontalSpacerShoulderButtonsWidget4);
        horizontalSpacerShoulderButtonsWidget4Layout->setSpacing(0);
        horizontalSpacerShoulderButtonsWidget4Layout->setObjectName(QString::fromUtf8("horizontalSpacerShoulderButtonsWidget4Layout"));
        horizontalSpacerShoulderButtonsWidget4Layout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerShoulderButtons5 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalSpacerShoulderButtonsWidget4Layout->addItem(horizontalSpacerShoulderButtons5);


        shoulderButtons->addWidget(horizontalSpacerShoulderButtonsWidget4);

        buttonShoulderButtonsLeft = new QWidget(bottomMiddle);
        buttonShoulderButtonsLeft->setObjectName(QString::fromUtf8("buttonShoulderButtonsLeft"));
        buttonShoulderButtonsLeftVerticalLayout = new QVBoxLayout(buttonShoulderButtonsLeft);
        buttonShoulderButtonsLeftVerticalLayout->setSpacing(0);
        buttonShoulderButtonsLeftVerticalLayout->setObjectName(QString::fromUtf8("buttonShoulderButtonsLeftVerticalLayout"));
        buttonShoulderButtonsLeftVerticalLayout->setContentsMargins(0, 0, 0, 0);
        buttonShoulderButtonsButtonLGroup = new QGroupBox(buttonShoulderButtonsLeft);
        buttonShoulderButtonsButtonLGroup->setObjectName(QString::fromUtf8("buttonShoulderButtonsButtonLGroup"));
        buttonShoulderButtonsButtonLGroup->setAlignment(Qt::AlignCenter);
        buttonShoulderButtonsLVerticalLayout = new QVBoxLayout(buttonShoulderButtonsButtonLGroup);
        buttonShoulderButtonsLVerticalLayout->setSpacing(3);
        buttonShoulderButtonsLVerticalLayout->setObjectName(QString::fromUtf8("buttonShoulderButtonsLVerticalLayout"));
        buttonShoulderButtonsLVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonL = new QPushButton(buttonShoulderButtonsButtonLGroup);
        buttonL->setObjectName(QString::fromUtf8("buttonL"));
        buttonL->setMinimumSize(QSize(68, 0));
        buttonL->setMaximumSize(QSize(68, 16777215));
        buttonL->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonShoulderButtonsLVerticalLayout->addWidget(buttonL);


        buttonShoulderButtonsLeftVerticalLayout->addWidget(buttonShoulderButtonsButtonLGroup);

        buttonShoulderButtonsButtonZLGroup = new QGroupBox(buttonShoulderButtonsLeft);
        buttonShoulderButtonsButtonZLGroup->setObjectName(QString::fromUtf8("buttonShoulderButtonsButtonZLGroup"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonShoulderButtonsButtonZLGroup->sizePolicy().hasHeightForWidth());
        buttonShoulderButtonsButtonZLGroup->setSizePolicy(sizePolicy2);
        buttonShoulderButtonsButtonZLGroup->setAlignment(Qt::AlignCenter);
        buttonShoulderButtonsZLVerticalLayout = new QVBoxLayout(buttonShoulderButtonsButtonZLGroup);
        buttonShoulderButtonsZLVerticalLayout->setSpacing(3);
        buttonShoulderButtonsZLVerticalLayout->setObjectName(QString::fromUtf8("buttonShoulderButtonsZLVerticalLayout"));
        buttonShoulderButtonsZLVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonZL = new QPushButton(buttonShoulderButtonsButtonZLGroup);
        buttonZL->setObjectName(QString::fromUtf8("buttonZL"));
        buttonZL->setMinimumSize(QSize(68, 0));
        buttonZL->setMaximumSize(QSize(68, 16777215));
        buttonZL->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonShoulderButtonsZLVerticalLayout->addWidget(buttonZL);

        sliderZLThreshold = new QSlider(buttonShoulderButtonsButtonZLGroup);
        sliderZLThreshold->setObjectName(QString::fromUtf8("sliderZLThreshold"));
        sliderZLThreshold->setMaximumSize(QSize(70, 15));
        sliderZLThreshold->setMaximum(100);
        sliderZLThreshold->setOrientation(Qt::Horizontal);

        buttonShoulderButtonsZLVerticalLayout->addWidget(sliderZLThreshold);


        buttonShoulderButtonsLeftVerticalLayout->addWidget(buttonShoulderButtonsButtonZLGroup);


        shoulderButtons->addWidget(buttonShoulderButtonsLeft);

        horizontalSpacerShoulderButtonsWidget = new QWidget(bottomMiddle);
        horizontalSpacerShoulderButtonsWidget->setObjectName(QString::fromUtf8("horizontalSpacerShoulderButtonsWidget"));
        horizontalSpacerShoulderButtonsWidgetLayout = new QHBoxLayout(horizontalSpacerShoulderButtonsWidget);
        horizontalSpacerShoulderButtonsWidgetLayout->setSpacing(0);
        horizontalSpacerShoulderButtonsWidgetLayout->setObjectName(QString::fromUtf8("horizontalSpacerShoulderButtonsWidgetLayout"));
        horizontalSpacerShoulderButtonsWidgetLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerShoulderButtons1 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalSpacerShoulderButtonsWidgetLayout->addItem(horizontalSpacerShoulderButtons1);


        shoulderButtons->addWidget(horizontalSpacerShoulderButtonsWidget);

        buttonMiscButtonsMinusScreenshot = new QWidget(bottomMiddle);
        buttonMiscButtonsMinusScreenshot->setObjectName(QString::fromUtf8("buttonMiscButtonsMinusScreenshot"));
        buttonMiscButtonsMinusScreenshotVerticalLayout = new QVBoxLayout(buttonMiscButtonsMinusScreenshot);
        buttonMiscButtonsMinusScreenshotVerticalLayout->setSpacing(0);
        buttonMiscButtonsMinusScreenshotVerticalLayout->setObjectName(QString::fromUtf8("buttonMiscButtonsMinusScreenshotVerticalLayout"));
        buttonMiscButtonsMinusScreenshotVerticalLayout->setContentsMargins(0, 0, 0, 0);
        buttonMiscButtonsMinusGroup = new QGroupBox(buttonMiscButtonsMinusScreenshot);
        buttonMiscButtonsMinusGroup->setObjectName(QString::fromUtf8("buttonMiscButtonsMinusGroup"));
        buttonMiscButtonsMinusGroup->setAlignment(Qt::AlignCenter);
        buttonMiscMinusVerticalLayout = new QVBoxLayout(buttonMiscButtonsMinusGroup);
        buttonMiscMinusVerticalLayout->setSpacing(3);
        buttonMiscMinusVerticalLayout->setObjectName(QString::fromUtf8("buttonMiscMinusVerticalLayout"));
        buttonMiscMinusVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonMinus = new QPushButton(buttonMiscButtonsMinusGroup);
        buttonMinus->setObjectName(QString::fromUtf8("buttonMinus"));
        buttonMinus->setMinimumSize(QSize(68, 0));
        buttonMinus->setMaximumSize(QSize(68, 16777215));
        buttonMinus->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonMiscMinusVerticalLayout->addWidget(buttonMinus);


        buttonMiscButtonsMinusScreenshotVerticalLayout->addWidget(buttonMiscButtonsMinusGroup, 0, Qt::AlignHCenter);

        buttonMiscButtonsScreenshotGroup = new QGroupBox(buttonMiscButtonsMinusScreenshot);
        buttonMiscButtonsScreenshotGroup->setObjectName(QString::fromUtf8("buttonMiscButtonsScreenshotGroup"));
        buttonMiscButtonsScreenshotGroup->setAlignment(Qt::AlignCenter);
        buttonMiscScrCapVerticalLayout = new QVBoxLayout(buttonMiscButtonsScreenshotGroup);
        buttonMiscScrCapVerticalLayout->setSpacing(3);
        buttonMiscScrCapVerticalLayout->setObjectName(QString::fromUtf8("buttonMiscScrCapVerticalLayout"));
        buttonMiscScrCapVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonScreenshot = new QPushButton(buttonMiscButtonsScreenshotGroup);
        buttonScreenshot->setObjectName(QString::fromUtf8("buttonScreenshot"));
        buttonScreenshot->setMinimumSize(QSize(68, 0));
        buttonScreenshot->setMaximumSize(QSize(68, 16777215));
        buttonScreenshot->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonMiscScrCapVerticalLayout->addWidget(buttonScreenshot);


        buttonMiscButtonsMinusScreenshotVerticalLayout->addWidget(buttonMiscButtonsScreenshotGroup, 0, Qt::AlignHCenter);


        shoulderButtons->addWidget(buttonMiscButtonsMinusScreenshot);

        buttonMiscButtonsPlusHome = new QWidget(bottomMiddle);
        buttonMiscButtonsPlusHome->setObjectName(QString::fromUtf8("buttonMiscButtonsPlusHome"));
        buttonMiscButtonsPlusHomeVerticalLayout = new QVBoxLayout(buttonMiscButtonsPlusHome);
        buttonMiscButtonsPlusHomeVerticalLayout->setSpacing(0);
        buttonMiscButtonsPlusHomeVerticalLayout->setObjectName(QString::fromUtf8("buttonMiscButtonsPlusHomeVerticalLayout"));
        buttonMiscButtonsPlusHomeVerticalLayout->setContentsMargins(0, 0, 0, 0);
        buttonMiscButtonsPlusGroup = new QGroupBox(buttonMiscButtonsPlusHome);
        buttonMiscButtonsPlusGroup->setObjectName(QString::fromUtf8("buttonMiscButtonsPlusGroup"));
        buttonMiscButtonsPlusGroup->setAlignment(Qt::AlignCenter);
        buttonMiscPlusVerticalLayout = new QVBoxLayout(buttonMiscButtonsPlusGroup);
        buttonMiscPlusVerticalLayout->setSpacing(3);
        buttonMiscPlusVerticalLayout->setObjectName(QString::fromUtf8("buttonMiscPlusVerticalLayout"));
        buttonMiscPlusVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonPlus = new QPushButton(buttonMiscButtonsPlusGroup);
        buttonPlus->setObjectName(QString::fromUtf8("buttonPlus"));
        buttonPlus->setMinimumSize(QSize(68, 0));
        buttonPlus->setMaximumSize(QSize(68, 16777215));
        buttonPlus->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonMiscPlusVerticalLayout->addWidget(buttonPlus);


        buttonMiscButtonsPlusHomeVerticalLayout->addWidget(buttonMiscButtonsPlusGroup, 0, Qt::AlignHCenter);

        buttonMiscButtonsHomeGroup = new QGroupBox(buttonMiscButtonsPlusHome);
        buttonMiscButtonsHomeGroup->setObjectName(QString::fromUtf8("buttonMiscButtonsHomeGroup"));
        buttonMiscButtonsHomeGroup->setAlignment(Qt::AlignCenter);
        buttonMiscHomeVerticalLayout = new QVBoxLayout(buttonMiscButtonsHomeGroup);
        buttonMiscHomeVerticalLayout->setSpacing(3);
        buttonMiscHomeVerticalLayout->setObjectName(QString::fromUtf8("buttonMiscHomeVerticalLayout"));
        buttonMiscHomeVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonHome = new QPushButton(buttonMiscButtonsHomeGroup);
        buttonHome->setObjectName(QString::fromUtf8("buttonHome"));
        buttonHome->setMinimumSize(QSize(68, 0));
        buttonHome->setMaximumSize(QSize(68, 16777215));
        buttonHome->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonMiscHomeVerticalLayout->addWidget(buttonHome);


        buttonMiscButtonsPlusHomeVerticalLayout->addWidget(buttonMiscButtonsHomeGroup, 0, Qt::AlignHCenter);


        shoulderButtons->addWidget(buttonMiscButtonsPlusHome);

        horizontalSpacerShoulderButtonsWidget3 = new QWidget(bottomMiddle);
        horizontalSpacerShoulderButtonsWidget3->setObjectName(QString::fromUtf8("horizontalSpacerShoulderButtonsWidget3"));
        horizontalSpacerShoulderButtonsWidget3Layout = new QHBoxLayout(horizontalSpacerShoulderButtonsWidget3);
        horizontalSpacerShoulderButtonsWidget3Layout->setSpacing(0);
        horizontalSpacerShoulderButtonsWidget3Layout->setObjectName(QString::fromUtf8("horizontalSpacerShoulderButtonsWidget3Layout"));
        horizontalSpacerShoulderButtonsWidget3Layout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerShoulderButtons2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalSpacerShoulderButtonsWidget3Layout->addItem(horizontalSpacerShoulderButtons2);


        shoulderButtons->addWidget(horizontalSpacerShoulderButtonsWidget3);

        buttonShoulderButtonsRight = new QWidget(bottomMiddle);
        buttonShoulderButtonsRight->setObjectName(QString::fromUtf8("buttonShoulderButtonsRight"));
        buttonShoulderButtonsRightVerticalLayout = new QVBoxLayout(buttonShoulderButtonsRight);
        buttonShoulderButtonsRightVerticalLayout->setSpacing(0);
        buttonShoulderButtonsRightVerticalLayout->setObjectName(QString::fromUtf8("buttonShoulderButtonsRightVerticalLayout"));
        buttonShoulderButtonsRightVerticalLayout->setContentsMargins(0, 0, 0, 0);
        buttonShoulderButtonsRGroup = new QGroupBox(buttonShoulderButtonsRight);
        buttonShoulderButtonsRGroup->setObjectName(QString::fromUtf8("buttonShoulderButtonsRGroup"));
        buttonShoulderButtonsRGroup->setAlignment(Qt::AlignCenter);
        buttonShoulderButtonsRVerticalLayout = new QVBoxLayout(buttonShoulderButtonsRGroup);
        buttonShoulderButtonsRVerticalLayout->setSpacing(3);
        buttonShoulderButtonsRVerticalLayout->setObjectName(QString::fromUtf8("buttonShoulderButtonsRVerticalLayout"));
        buttonShoulderButtonsRVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonR = new QPushButton(buttonShoulderButtonsRGroup);
        buttonR->setObjectName(QString::fromUtf8("buttonR"));
        buttonR->setMinimumSize(QSize(68, 0));
        buttonR->setMaximumSize(QSize(68, 16777215));
        buttonR->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonShoulderButtonsRVerticalLayout->addWidget(buttonR);


        buttonShoulderButtonsRightVerticalLayout->addWidget(buttonShoulderButtonsRGroup);

        buttonShoulderButtonsZRGroup = new QGroupBox(buttonShoulderButtonsRight);
        buttonShoulderButtonsZRGroup->setObjectName(QString::fromUtf8("buttonShoulderButtonsZRGroup"));
        sizePolicy2.setHeightForWidth(buttonShoulderButtonsZRGroup->sizePolicy().hasHeightForWidth());
        buttonShoulderButtonsZRGroup->setSizePolicy(sizePolicy2);
        buttonShoulderButtonsZRGroup->setAlignment(Qt::AlignCenter);
        buttonShoulderButtonsZRVerticalLayout = new QVBoxLayout(buttonShoulderButtonsZRGroup);
        buttonShoulderButtonsZRVerticalLayout->setSpacing(3);
        buttonShoulderButtonsZRVerticalLayout->setObjectName(QString::fromUtf8("buttonShoulderButtonsZRVerticalLayout"));
        buttonShoulderButtonsZRVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonZR = new QPushButton(buttonShoulderButtonsZRGroup);
        buttonZR->setObjectName(QString::fromUtf8("buttonZR"));
        buttonZR->setMinimumSize(QSize(68, 0));
        buttonZR->setMaximumSize(QSize(68, 16777215));
        buttonZR->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonShoulderButtonsZRVerticalLayout->addWidget(buttonZR);

        sliderZRThreshold = new QSlider(buttonShoulderButtonsZRGroup);
        sliderZRThreshold->setObjectName(QString::fromUtf8("sliderZRThreshold"));
        sliderZRThreshold->setMaximumSize(QSize(70, 15));
        sliderZRThreshold->setMaximum(100);
        sliderZRThreshold->setOrientation(Qt::Horizontal);

        buttonShoulderButtonsZRVerticalLayout->addWidget(sliderZRThreshold);


        buttonShoulderButtonsRightVerticalLayout->addWidget(buttonShoulderButtonsZRGroup);


        shoulderButtons->addWidget(buttonShoulderButtonsRight);

        horizontalSpacerShoulderButtonsWidget2 = new QWidget(bottomMiddle);
        horizontalSpacerShoulderButtonsWidget2->setObjectName(QString::fromUtf8("horizontalSpacerShoulderButtonsWidget2"));
        horizontalSpacerShoulderButtonsWidget2Layout = new QHBoxLayout(horizontalSpacerShoulderButtonsWidget2);
        horizontalSpacerShoulderButtonsWidget2Layout->setSpacing(0);
        horizontalSpacerShoulderButtonsWidget2Layout->setObjectName(QString::fromUtf8("horizontalSpacerShoulderButtonsWidget2Layout"));
        horizontalSpacerShoulderButtonsWidget2Layout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerShoulderButtons3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalSpacerShoulderButtonsWidget2Layout->addItem(horizontalSpacerShoulderButtons3);


        shoulderButtons->addWidget(horizontalSpacerShoulderButtonsWidget2);

        buttonShoulderButtonsSLSRRight = new QWidget(bottomMiddle);
        buttonShoulderButtonsSLSRRight->setObjectName(QString::fromUtf8("buttonShoulderButtonsSLSRRight"));
        buttonShoulderButtonsSLSRRightVerticalLayout = new QVBoxLayout(buttonShoulderButtonsSLSRRight);
        buttonShoulderButtonsSLSRRightVerticalLayout->setSpacing(0);
        buttonShoulderButtonsSLSRRightVerticalLayout->setObjectName(QString::fromUtf8("buttonShoulderButtonsSLSRRightVerticalLayout"));
        buttonShoulderButtonsSLSRRightVerticalLayout->setContentsMargins(0, 0, 0, 0);
        buttonShoulderButtonsSLRightGroup = new QGroupBox(buttonShoulderButtonsSLSRRight);
        buttonShoulderButtonsSLRightGroup->setObjectName(QString::fromUtf8("buttonShoulderButtonsSLRightGroup"));
        buttonShoulderButtonsSLRightGroup->setAlignment(Qt::AlignCenter);
        buttonShoulderButtonsSLRightVerticalLayout = new QVBoxLayout(buttonShoulderButtonsSLRightGroup);
        buttonShoulderButtonsSLRightVerticalLayout->setSpacing(3);
        buttonShoulderButtonsSLRightVerticalLayout->setObjectName(QString::fromUtf8("buttonShoulderButtonsSLRightVerticalLayout"));
        buttonShoulderButtonsSLRightVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonSLRight = new QPushButton(buttonShoulderButtonsSLRightGroup);
        buttonSLRight->setObjectName(QString::fromUtf8("buttonSLRight"));
        buttonSLRight->setMinimumSize(QSize(68, 0));
        buttonSLRight->setMaximumSize(QSize(68, 16777215));
        buttonSLRight->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonShoulderButtonsSLRightVerticalLayout->addWidget(buttonSLRight);


        buttonShoulderButtonsSLSRRightVerticalLayout->addWidget(buttonShoulderButtonsSLRightGroup, 0, Qt::AlignHCenter);

        buttonShoulderButtonsSRRightGroup = new QGroupBox(buttonShoulderButtonsSLSRRight);
        buttonShoulderButtonsSRRightGroup->setObjectName(QString::fromUtf8("buttonShoulderButtonsSRRightGroup"));
        buttonShoulderButtonsSRRightGroup->setAlignment(Qt::AlignCenter);
        buttonShoulderButtonsSRRightVerticalLayout = new QVBoxLayout(buttonShoulderButtonsSRRightGroup);
        buttonShoulderButtonsSRRightVerticalLayout->setSpacing(3);
        buttonShoulderButtonsSRRightVerticalLayout->setObjectName(QString::fromUtf8("buttonShoulderButtonsSRRightVerticalLayout"));
        buttonShoulderButtonsSRRightVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonSRRight = new QPushButton(buttonShoulderButtonsSRRightGroup);
        buttonSRRight->setObjectName(QString::fromUtf8("buttonSRRight"));
        buttonSRRight->setMinimumSize(QSize(68, 0));
        buttonSRRight->setMaximumSize(QSize(68, 16777215));
        buttonSRRight->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonShoulderButtonsSRRightVerticalLayout->addWidget(buttonSRRight);


        buttonShoulderButtonsSLSRRightVerticalLayout->addWidget(buttonShoulderButtonsSRRightGroup, 0, Qt::AlignHCenter);


        shoulderButtons->addWidget(buttonShoulderButtonsSLSRRight);


        vboxLayout->addLayout(shoulderButtons);

        controllerFrame = new PlayerControlPreview(bottomMiddle);
        controllerFrame->setObjectName(QString::fromUtf8("controllerFrame"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(controllerFrame->sizePolicy().hasHeightForWidth());
        controllerFrame->setSizePolicy(sizePolicy3);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        controllerFrame->setFont(font);
        controllerFrame->setStyleSheet(QString::fromUtf8("image: url(:/controller/pro);"));
        verticalLayout_4 = new QVBoxLayout(controllerFrame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);

        vboxLayout->addWidget(controllerFrame);

        miscButtons = new QHBoxLayout();
        miscButtons->setSpacing(3);
        miscButtons->setObjectName(QString::fromUtf8("miscButtons"));
        miscButtons->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacerMiscButtons1 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        miscButtons->addItem(horizontalSpacerMiscButtons1);

        buttonMotionLeftGroup = new QGroupBox(bottomMiddle);
        buttonMotionLeftGroup->setObjectName(QString::fromUtf8("buttonMotionLeftGroup"));
        buttonMotionLeftGroup->setAlignment(Qt::AlignCenter);
        buttonDpadLeftVerticalLayout_2 = new QVBoxLayout(buttonMotionLeftGroup);
        buttonDpadLeftVerticalLayout_2->setSpacing(3);
        buttonDpadLeftVerticalLayout_2->setObjectName(QString::fromUtf8("buttonDpadLeftVerticalLayout_2"));
        buttonDpadLeftVerticalLayout_2->setContentsMargins(3, 3, 3, 3);
        buttonMotionLeft = new QPushButton(buttonMotionLeftGroup);
        buttonMotionLeft->setObjectName(QString::fromUtf8("buttonMotionLeft"));
        buttonMotionLeft->setMinimumSize(QSize(68, 0));
        buttonMotionLeft->setMaximumSize(QSize(68, 16777215));
        buttonMotionLeft->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonDpadLeftVerticalLayout_2->addWidget(buttonMotionLeft);


        miscButtons->addWidget(buttonMotionLeftGroup);

        buttonMotionRightGroup = new QGroupBox(bottomMiddle);
        buttonMotionRightGroup->setObjectName(QString::fromUtf8("buttonMotionRightGroup"));
        buttonMotionRightGroup->setAlignment(Qt::AlignCenter);
        buttonDpadRightVerticalLayout_2 = new QVBoxLayout(buttonMotionRightGroup);
        buttonDpadRightVerticalLayout_2->setSpacing(3);
        buttonDpadRightVerticalLayout_2->setObjectName(QString::fromUtf8("buttonDpadRightVerticalLayout_2"));
        buttonDpadRightVerticalLayout_2->setContentsMargins(3, 3, 3, 3);
        buttonMotionRight = new QPushButton(buttonMotionRightGroup);
        buttonMotionRight->setObjectName(QString::fromUtf8("buttonMotionRight"));
        buttonMotionRight->setMinimumSize(QSize(68, 0));
        buttonMotionRight->setMaximumSize(QSize(68, 16777215));
        buttonMotionRight->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonDpadRightVerticalLayout_2->addWidget(buttonMotionRight);


        miscButtons->addWidget(buttonMotionRightGroup);

        horizontalSpacerMiscButtons4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        miscButtons->addItem(horizontalSpacerMiscButtons4);


        vboxLayout->addLayout(miscButtons);


        _2->addWidget(bottomMiddle);

        bottomRight = new QWidget(bottom);
        bottomRight->setObjectName(QString::fromUtf8("bottomRight"));
        bottomRightLayout = new QVBoxLayout(bottomRight);
        bottomRightLayout->setSpacing(0);
        bottomRightLayout->setObjectName(QString::fromUtf8("bottomRightLayout"));
        bottomRightLayout->setContentsMargins(0, 0, 0, 0);
        faceButtons = new QGroupBox(bottomRight);
        faceButtons->setObjectName(QString::fromUtf8("faceButtons"));
        sizePolicy1.setHeightForWidth(faceButtons->sizePolicy().hasHeightForWidth());
        faceButtons->setSizePolicy(sizePolicy1);
        faceButtons->setFlat(false);
        faceButtons->setCheckable(false);
        verticalLayout = new QVBoxLayout(faceButtons);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 6, 3, 3);
        buttonFaceButtonsBWidget = new QWidget(faceButtons);
        buttonFaceButtonsBWidget->setObjectName(QString::fromUtf8("buttonFaceButtonsBWidget"));
        horizontalLayout_6 = new QHBoxLayout(buttonFaceButtonsBWidget);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerBLeft = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacerBLeft);

        buttonFaceButtonsXGroup = new QGroupBox(buttonFaceButtonsBWidget);
        buttonFaceButtonsXGroup->setObjectName(QString::fromUtf8("buttonFaceButtonsXGroup"));
        buttonFaceButtonsXGroup->setAlignment(Qt::AlignCenter);
        buttonFaceButtonsXVerticalLayout = new QVBoxLayout(buttonFaceButtonsXGroup);
        buttonFaceButtonsXVerticalLayout->setSpacing(3);
        buttonFaceButtonsXVerticalLayout->setObjectName(QString::fromUtf8("buttonFaceButtonsXVerticalLayout"));
        buttonFaceButtonsXVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonX = new QPushButton(buttonFaceButtonsXGroup);
        buttonX->setObjectName(QString::fromUtf8("buttonX"));
        buttonX->setMinimumSize(QSize(68, 0));
        buttonX->setMaximumSize(QSize(68, 16777215));
        buttonX->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonFaceButtonsXVerticalLayout->addWidget(buttonX);


        horizontalLayout_6->addWidget(buttonFaceButtonsXGroup, 0, Qt::AlignHCenter);

        horizontalSpacerBRight = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacerBRight);


        verticalLayout->addWidget(buttonFaceButtonsBWidget);

        buttonFaceButtonsYAHorizontalLayout = new QHBoxLayout();
        buttonFaceButtonsYAHorizontalLayout->setSpacing(3);
        buttonFaceButtonsYAHorizontalLayout->setObjectName(QString::fromUtf8("buttonFaceButtonsYAHorizontalLayout"));
        buttonFaceButtonsYGroup = new QGroupBox(faceButtons);
        buttonFaceButtonsYGroup->setObjectName(QString::fromUtf8("buttonFaceButtonsYGroup"));
        buttonFaceButtonsYGroup->setAlignment(Qt::AlignCenter);
        buttonFaceButtonsYVerticalLayout = new QVBoxLayout(buttonFaceButtonsYGroup);
        buttonFaceButtonsYVerticalLayout->setSpacing(3);
        buttonFaceButtonsYVerticalLayout->setObjectName(QString::fromUtf8("buttonFaceButtonsYVerticalLayout"));
        buttonFaceButtonsYVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonY = new QPushButton(buttonFaceButtonsYGroup);
        buttonY->setObjectName(QString::fromUtf8("buttonY"));
        buttonY->setMinimumSize(QSize(68, 0));
        buttonY->setMaximumSize(QSize(68, 16777215));
        buttonY->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonFaceButtonsYVerticalLayout->addWidget(buttonY);


        buttonFaceButtonsYAHorizontalLayout->addWidget(buttonFaceButtonsYGroup, 0, Qt::AlignHCenter);

        buttonFaceButtonsAGroup = new QGroupBox(faceButtons);
        buttonFaceButtonsAGroup->setObjectName(QString::fromUtf8("buttonFaceButtonsAGroup"));
        buttonFaceButtonsAGroup->setAlignment(Qt::AlignCenter);
        buttonFaceButtonsAVerticalLayout = new QVBoxLayout(buttonFaceButtonsAGroup);
        buttonFaceButtonsAVerticalLayout->setSpacing(3);
        buttonFaceButtonsAVerticalLayout->setObjectName(QString::fromUtf8("buttonFaceButtonsAVerticalLayout"));
        buttonFaceButtonsAVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonA = new QPushButton(buttonFaceButtonsAGroup);
        buttonA->setObjectName(QString::fromUtf8("buttonA"));
        buttonA->setMinimumSize(QSize(68, 0));
        buttonA->setMaximumSize(QSize(68, 16777215));
        buttonA->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonFaceButtonsAVerticalLayout->addWidget(buttonA);


        buttonFaceButtonsYAHorizontalLayout->addWidget(buttonFaceButtonsAGroup, 0, Qt::AlignHCenter);


        verticalLayout->addLayout(buttonFaceButtonsYAHorizontalLayout);

        buttonFaceButtonsXWidget = new QWidget(faceButtons);
        buttonFaceButtonsXWidget->setObjectName(QString::fromUtf8("buttonFaceButtonsXWidget"));
        horizontalLayout_10 = new QHBoxLayout(buttonFaceButtonsXWidget);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerXLeft = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacerXLeft);

        buttonFaceButtonsBWidget_2 = new QGroupBox(buttonFaceButtonsXWidget);
        buttonFaceButtonsBWidget_2->setObjectName(QString::fromUtf8("buttonFaceButtonsBWidget_2"));
        buttonFaceButtonsBWidget_2->setAlignment(Qt::AlignCenter);
        buttonFaceButtonsBVerticalLayout = new QVBoxLayout(buttonFaceButtonsBWidget_2);
        buttonFaceButtonsBVerticalLayout->setSpacing(3);
        buttonFaceButtonsBVerticalLayout->setObjectName(QString::fromUtf8("buttonFaceButtonsBVerticalLayout"));
        buttonFaceButtonsBVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonB = new QPushButton(buttonFaceButtonsBWidget_2);
        buttonB->setObjectName(QString::fromUtf8("buttonB"));
        buttonB->setMinimumSize(QSize(68, 0));
        buttonB->setMaximumSize(QSize(68, 16777215));
        buttonB->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonFaceButtonsBVerticalLayout->addWidget(buttonB);


        horizontalLayout_10->addWidget(buttonFaceButtonsBWidget_2, 0, Qt::AlignHCenter);

        horizontalSpacerXRight = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacerXRight);


        verticalLayout->addWidget(buttonFaceButtonsXWidget);


        bottomRightLayout->addWidget(faceButtons);

        verticalSpacerBottomRight = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        bottomRightLayout->addItem(verticalSpacerBottomRight);

        RStick = new QGroupBox(bottomRight);
        RStick->setObjectName(QString::fromUtf8("RStick"));
        sizePolicy1.setHeightForWidth(RStick->sizePolicy().hasHeightForWidth());
        RStick->setSizePolicy(sizePolicy1);
        RStick->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        RStick->setFlat(false);
        RStick->setCheckable(false);
        verticalLayout_2 = new QVBoxLayout(RStick);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 6, 3, 0);
        buttonRStickUpWidget = new QWidget(RStick);
        buttonRStickUpWidget->setObjectName(QString::fromUtf8("buttonRStickUpWidget"));
        buttonRStickUpWidget->setMinimumSize(QSize(0, 0));
        horizontalLayout_9 = new QHBoxLayout(buttonRStickUpWidget);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerRStickUpLeft = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacerRStickUpLeft);

        buttonRStickUpGroup = new QGroupBox(buttonRStickUpWidget);
        buttonRStickUpGroup->setObjectName(QString::fromUtf8("buttonRStickUpGroup"));
        buttonRStickUpGroup->setAlignment(Qt::AlignCenter);
        buttonRStickUpVerticalLayout = new QVBoxLayout(buttonRStickUpGroup);
        buttonRStickUpVerticalLayout->setSpacing(3);
        buttonRStickUpVerticalLayout->setObjectName(QString::fromUtf8("buttonRStickUpVerticalLayout"));
        buttonRStickUpVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonRStickUp = new QPushButton(buttonRStickUpGroup);
        buttonRStickUp->setObjectName(QString::fromUtf8("buttonRStickUp"));
        buttonRStickUp->setMinimumSize(QSize(68, 0));
        buttonRStickUp->setMaximumSize(QSize(68, 16777215));
        buttonRStickUp->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonRStickUpVerticalLayout->addWidget(buttonRStickUp);


        horizontalLayout_9->addWidget(buttonRStickUpGroup, 0, Qt::AlignHCenter);

        horizontalSpacerRStickUpRight = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacerRStickUpRight);


        verticalLayout_2->addWidget(buttonRStickUpWidget);

        buttonRStickLeftRightHorizontalLayout = new QHBoxLayout();
        buttonRStickLeftRightHorizontalLayout->setSpacing(3);
        buttonRStickLeftRightHorizontalLayout->setObjectName(QString::fromUtf8("buttonRStickLeftRightHorizontalLayout"));
        buttonRStickLeftGroup = new QGroupBox(RStick);
        buttonRStickLeftGroup->setObjectName(QString::fromUtf8("buttonRStickLeftGroup"));
        buttonRStickLeftGroup->setAlignment(Qt::AlignCenter);
        buttonRStickLeftVerticalLayout = new QVBoxLayout(buttonRStickLeftGroup);
        buttonRStickLeftVerticalLayout->setSpacing(3);
        buttonRStickLeftVerticalLayout->setObjectName(QString::fromUtf8("buttonRStickLeftVerticalLayout"));
        buttonRStickLeftVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonRStickLeft = new QPushButton(buttonRStickLeftGroup);
        buttonRStickLeft->setObjectName(QString::fromUtf8("buttonRStickLeft"));
        buttonRStickLeft->setMinimumSize(QSize(68, 0));
        buttonRStickLeft->setMaximumSize(QSize(68, 16777215));
        buttonRStickLeft->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonRStickLeftVerticalLayout->addWidget(buttonRStickLeft);


        buttonRStickLeftRightHorizontalLayout->addWidget(buttonRStickLeftGroup, 0, Qt::AlignHCenter);

        buttonRStickRightGroup = new QGroupBox(RStick);
        buttonRStickRightGroup->setObjectName(QString::fromUtf8("buttonRStickRightGroup"));
        buttonRStickRightGroup->setAlignment(Qt::AlignCenter);
        buttonRStickRightVerticalLayout = new QVBoxLayout(buttonRStickRightGroup);
        buttonRStickRightVerticalLayout->setSpacing(3);
        buttonRStickRightVerticalLayout->setObjectName(QString::fromUtf8("buttonRStickRightVerticalLayout"));
        buttonRStickRightVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonRStickRight = new QPushButton(buttonRStickRightGroup);
        buttonRStickRight->setObjectName(QString::fromUtf8("buttonRStickRight"));
        buttonRStickRight->setMinimumSize(QSize(68, 0));
        buttonRStickRight->setMaximumSize(QSize(68, 16777215));
        buttonRStickRight->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonRStickRightVerticalLayout->addWidget(buttonRStickRight);


        buttonRStickLeftRightHorizontalLayout->addWidget(buttonRStickRightGroup, 0, Qt::AlignHCenter);


        verticalLayout_2->addLayout(buttonRStickLeftRightHorizontalLayout);

        buttonRStickDownWidget = new QWidget(RStick);
        buttonRStickDownWidget->setObjectName(QString::fromUtf8("buttonRStickDownWidget"));
        horizontalLayout_11 = new QHBoxLayout(buttonRStickDownWidget);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalSpacerRStickDownLeft = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacerRStickDownLeft);

        buttonRStickDownGroup = new QGroupBox(buttonRStickDownWidget);
        buttonRStickDownGroup->setObjectName(QString::fromUtf8("buttonRStickDownGroup"));
        buttonRStickDownGroup->setAlignment(Qt::AlignCenter);
        buttonRStickDownVerticalLayout = new QVBoxLayout(buttonRStickDownGroup);
        buttonRStickDownVerticalLayout->setSpacing(3);
        buttonRStickDownVerticalLayout->setObjectName(QString::fromUtf8("buttonRStickDownVerticalLayout"));
        buttonRStickDownVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonRStickDown = new QPushButton(buttonRStickDownGroup);
        buttonRStickDown->setObjectName(QString::fromUtf8("buttonRStickDown"));
        buttonRStickDown->setMinimumSize(QSize(68, 0));
        buttonRStickDown->setMaximumSize(QSize(68, 16777215));
        buttonRStickDown->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonRStickDownVerticalLayout->addWidget(buttonRStickDown);


        horizontalLayout_11->addWidget(buttonRStickDownGroup);

        horizontalSpacerRStickDownRight = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacerRStickDownRight);


        verticalLayout_2->addWidget(buttonRStickDownWidget);

        buttonRStickPressedModifierHorizontalLayout = new QHBoxLayout();
        buttonRStickPressedModifierHorizontalLayout->setSpacing(3);
        buttonRStickPressedModifierHorizontalLayout->setObjectName(QString::fromUtf8("buttonRStickPressedModifierHorizontalLayout"));
        groupRStickPressed = new QGroupBox(RStick);
        groupRStickPressed->setObjectName(QString::fromUtf8("groupRStickPressed"));
        groupRStickPressed->setAlignment(Qt::AlignCenter);
        buttonRStickPressedVerticalLayout = new QVBoxLayout(groupRStickPressed);
        buttonRStickPressedVerticalLayout->setSpacing(3);
        buttonRStickPressedVerticalLayout->setObjectName(QString::fromUtf8("buttonRStickPressedVerticalLayout"));
        buttonRStickPressedVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonRStick = new QPushButton(groupRStickPressed);
        buttonRStick->setObjectName(QString::fromUtf8("buttonRStick"));
        buttonRStick->setMinimumSize(QSize(68, 0));
        buttonRStick->setMaximumSize(QSize(68, 16777215));
        buttonRStick->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonRStickPressedVerticalLayout->addWidget(buttonRStick);


        buttonRStickPressedModifierHorizontalLayout->addWidget(groupRStickPressed, 0, Qt::AlignHCenter);

        buttonRStickModGroup = new QGroupBox(RStick);
        buttonRStickModGroup->setObjectName(QString::fromUtf8("buttonRStickModGroup"));
        buttonRStickModGroup->setAlignment(Qt::AlignCenter);
        buttonRStickModVerticalLayout = new QVBoxLayout(buttonRStickModGroup);
        buttonRStickModVerticalLayout->setSpacing(3);
        buttonRStickModVerticalLayout->setObjectName(QString::fromUtf8("buttonRStickModVerticalLayout"));
        buttonRStickModVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonRStickMod = new QPushButton(buttonRStickModGroup);
        buttonRStickMod->setObjectName(QString::fromUtf8("buttonRStickMod"));
        buttonRStickMod->setMinimumSize(QSize(68, 0));
        buttonRStickMod->setMaximumSize(QSize(68, 16777215));
        buttonRStickMod->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonRStickModVerticalLayout->addWidget(buttonRStickMod);


        buttonRStickPressedModifierHorizontalLayout->addWidget(buttonRStickModGroup, 0, Qt::AlignHCenter);

        buttonRStickRangeGroup = new QGroupBox(RStick);
        buttonRStickRangeGroup->setObjectName(QString::fromUtf8("buttonRStickRangeGroup"));
        buttonRStickRangeGroupHorizontalLayout = new QHBoxLayout(buttonRStickRangeGroup);
        buttonRStickRangeGroupHorizontalLayout->setSpacing(3);
        buttonRStickRangeGroupHorizontalLayout->setObjectName(QString::fromUtf8("buttonRStickRangeGroupHorizontalLayout"));
        buttonRStickRangeGroupHorizontalLayout->setContentsMargins(3, 3, 3, 3);
        spinboxRStickRange = new QSpinBox(buttonRStickRangeGroup);
        spinboxRStickRange->setObjectName(QString::fromUtf8("spinboxRStickRange"));
        spinboxRStickRange->setMinimumSize(QSize(68, 21));
        spinboxRStickRange->setMaximumSize(QSize(68, 16777215));
        spinboxRStickRange->setMinimum(25);
        spinboxRStickRange->setMaximum(150);
        spinboxRStickRange->setValue(95);

        buttonRStickRangeGroupHorizontalLayout->addWidget(spinboxRStickRange);


        buttonRStickPressedModifierHorizontalLayout->addWidget(buttonRStickRangeGroup);


        verticalLayout_2->addLayout(buttonRStickPressedModifierHorizontalLayout);

        sliderRStickDeadzoneModifierRangeVerticalLayout = new QVBoxLayout();
        sliderRStickDeadzoneModifierRangeVerticalLayout->setSpacing(3);
        sliderRStickDeadzoneModifierRangeVerticalLayout->setObjectName(QString::fromUtf8("sliderRStickDeadzoneModifierRangeVerticalLayout"));
        sliderRStickDeadzoneModifierRangeVerticalLayout->setContentsMargins(0, 2, 0, 3);
        sliderRStickDeadzoneHorizontalLayout = new QHBoxLayout();
        sliderRStickDeadzoneHorizontalLayout->setObjectName(QString::fromUtf8("sliderRStickDeadzoneHorizontalLayout"));
        labelRStickDeadzone = new QLabel(RStick);
        labelRStickDeadzone->setObjectName(QString::fromUtf8("labelRStickDeadzone"));
        labelRStickDeadzone->setAlignment(Qt::AlignHCenter);

        sliderRStickDeadzoneHorizontalLayout->addWidget(labelRStickDeadzone);


        sliderRStickDeadzoneModifierRangeVerticalLayout->addLayout(sliderRStickDeadzoneHorizontalLayout);

        sliderRStickDeadzone = new QSlider(RStick);
        sliderRStickDeadzone->setObjectName(QString::fromUtf8("sliderRStickDeadzone"));
        sliderRStickDeadzone->setMaximum(100);
        sliderRStickDeadzone->setOrientation(Qt::Horizontal);

        sliderRStickDeadzoneModifierRangeVerticalLayout->addWidget(sliderRStickDeadzone);

        sliderRStickModifierRangeHorizontalLayout = new QHBoxLayout();
        sliderRStickModifierRangeHorizontalLayout->setObjectName(QString::fromUtf8("sliderRStickModifierRangeHorizontalLayout"));
        labelRStickModifierRange = new QLabel(RStick);
        labelRStickModifierRange->setObjectName(QString::fromUtf8("labelRStickModifierRange"));
        labelRStickModifierRange->setAlignment(Qt::AlignHCenter);

        sliderRStickModifierRangeHorizontalLayout->addWidget(labelRStickModifierRange);


        sliderRStickDeadzoneModifierRangeVerticalLayout->addLayout(sliderRStickModifierRangeHorizontalLayout);

        sliderRStickModifierRange = new QSlider(RStick);
        sliderRStickModifierRange->setObjectName(QString::fromUtf8("sliderRStickModifierRange"));
        sliderRStickModifierRange->setMaximum(100);
        sliderRStickModifierRange->setOrientation(Qt::Horizontal);

        sliderRStickDeadzoneModifierRangeVerticalLayout->addWidget(sliderRStickModifierRange);


        verticalLayout_2->addLayout(sliderRStickDeadzoneModifierRangeVerticalLayout);

        mousePanningWidget = new QWidget(RStick);
        mousePanningWidget->setObjectName(QString::fromUtf8("mousePanningWidget"));
        mousePanningHorizontalLayout = new QHBoxLayout(mousePanningWidget);
        mousePanningHorizontalLayout->setSpacing(0);
        mousePanningHorizontalLayout->setObjectName(QString::fromUtf8("mousePanningHorizontalLayout"));
        mousePanningHorizontalLayout->setContentsMargins(0, 0, 0, 3);
        mousePanningHorizontalSpacerLeft = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mousePanningHorizontalLayout->addItem(mousePanningHorizontalSpacerLeft);

        mousePanningGroup = new QGroupBox(mousePanningWidget);
        mousePanningGroup->setObjectName(QString::fromUtf8("mousePanningGroup"));
        mousePanningGroup->setAlignment(Qt::AlignCenter);
        mousePanningVerticalLayout = new QVBoxLayout(mousePanningGroup);
        mousePanningVerticalLayout->setSpacing(3);
        mousePanningVerticalLayout->setObjectName(QString::fromUtf8("mousePanningVerticalLayout"));
        mousePanningVerticalLayout->setContentsMargins(3, 3, 3, 3);
        mousePanningButton = new QPushButton(mousePanningGroup);
        mousePanningButton->setObjectName(QString::fromUtf8("mousePanningButton"));

        mousePanningVerticalLayout->addWidget(mousePanningButton);


        mousePanningHorizontalLayout->addWidget(mousePanningGroup);

        mousePanningHorizontalSpacerRight = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        mousePanningHorizontalLayout->addItem(mousePanningHorizontalSpacerRight);


        verticalLayout_2->addWidget(mousePanningWidget);


        bottomRightLayout->addWidget(RStick);

        verticalSpacerBottomRight_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        bottomRightLayout->addItem(verticalSpacerBottomRight_2);


        _2->addWidget(bottomRight);


        main->addWidget(bottom);


        horizontalLayout_2->addLayout(main);


        retranslateUi(ConfigureInputPlayer);

        QMetaObject::connectSlotsByName(ConfigureInputPlayer);
    } // setupUi

    void retranslateUi(QWidget *ConfigureInputPlayer)
    {
        ConfigureInputPlayer->setWindowTitle(QCoreApplication::translate("ConfigureInputPlayer", "Configure Input", nullptr));
        groupConnectedController->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Connect Controller", nullptr));
        devicesGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Input Device", nullptr));
        profilesGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Profile", nullptr));
        buttonProfilesSave->setText(QCoreApplication::translate("ConfigureInputPlayer", "Save", nullptr));
        buttonProfilesNew->setText(QCoreApplication::translate("ConfigureInputPlayer", "New", nullptr));
        buttonProfilesDelete->setText(QCoreApplication::translate("ConfigureInputPlayer", "Delete", nullptr));
        LStick->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Left Stick", nullptr));
        buttonLStickUpGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Up", nullptr));
        buttonLStickUp->setText(QCoreApplication::translate("ConfigureInputPlayer", "Up", nullptr));
        buttonLStickLeftGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Left", nullptr));
        buttonLStickLeft->setText(QCoreApplication::translate("ConfigureInputPlayer", "Left", nullptr));
        buttonLStickRightGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Right", nullptr));
        buttonLStickRight->setText(QCoreApplication::translate("ConfigureInputPlayer", "Right", nullptr));
        buttonLStickDownGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Down", nullptr));
        buttonLStickDown->setText(QCoreApplication::translate("ConfigureInputPlayer", "Down", nullptr));
        buttonLStickPressedGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Pressed", nullptr));
        buttonLStick->setText(QCoreApplication::translate("ConfigureInputPlayer", "Pressed", nullptr));
        buttonLStickModGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Modifier", nullptr));
        buttonLStickMod->setText(QCoreApplication::translate("ConfigureInputPlayer", "Modifier", nullptr));
        buttonLStickRangeGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Range", nullptr));
        spinboxLStickRange->setSuffix(QCoreApplication::translate("ConfigureInputPlayer", "%", nullptr));
        labelLStickDeadzone->setText(QCoreApplication::translate("ConfigureInputPlayer", "Deadzone: 0%", nullptr));
        labelLStickModifierRange->setText(QCoreApplication::translate("ConfigureInputPlayer", "Modifier Range: 0%", nullptr));
        Dpad->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "D-Pad", nullptr));
        buttonDpadUpGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Up", nullptr));
        buttonDpadUp->setText(QCoreApplication::translate("ConfigureInputPlayer", "Up", nullptr));
        buttonDpadLeftGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Left", nullptr));
        buttonDpadLeft->setText(QCoreApplication::translate("ConfigureInputPlayer", "Left", nullptr));
        buttonDpadRightGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Right", nullptr));
        buttonDpadRight->setText(QCoreApplication::translate("ConfigureInputPlayer", "Right", nullptr));
        buttonDpadDownGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Down", nullptr));
        buttonDpadDown->setText(QCoreApplication::translate("ConfigureInputPlayer", "Down", nullptr));
        buttonShoulderButtonsSLLeftGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "SL", nullptr));
        buttonSLLeft->setText(QCoreApplication::translate("ConfigureInputPlayer", "SL", nullptr));
        buttonShoulderButtonsSRLeftGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "SR", nullptr));
        buttonSRLeft->setText(QCoreApplication::translate("ConfigureInputPlayer", "SR", nullptr));
        buttonShoulderButtonsButtonLGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "L", nullptr));
        buttonL->setText(QCoreApplication::translate("ConfigureInputPlayer", "L", nullptr));
        buttonShoulderButtonsButtonZLGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "ZL", nullptr));
        buttonZL->setText(QCoreApplication::translate("ConfigureInputPlayer", "ZL", nullptr));
        buttonMiscButtonsMinusGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Minus", nullptr));
        buttonMinus->setText(QCoreApplication::translate("ConfigureInputPlayer", "Minus", nullptr));
        buttonMiscButtonsScreenshotGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Capture", nullptr));
        buttonScreenshot->setText(QCoreApplication::translate("ConfigureInputPlayer", "Capture", nullptr));
        buttonMiscButtonsPlusGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Plus", nullptr));
        buttonPlus->setText(QCoreApplication::translate("ConfigureInputPlayer", "Plus", nullptr));
        buttonMiscButtonsHomeGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Home", nullptr));
        buttonHome->setText(QCoreApplication::translate("ConfigureInputPlayer", "Home", nullptr));
        buttonShoulderButtonsRGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "R", nullptr));
        buttonR->setText(QCoreApplication::translate("ConfigureInputPlayer", "R", nullptr));
        buttonShoulderButtonsZRGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "ZR", nullptr));
        buttonZR->setText(QCoreApplication::translate("ConfigureInputPlayer", "ZR", nullptr));
        buttonShoulderButtonsSLRightGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "SL", nullptr));
        buttonSLRight->setText(QCoreApplication::translate("ConfigureInputPlayer", "SL", nullptr));
        buttonShoulderButtonsSRRightGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "SR", nullptr));
        buttonSRRight->setText(QCoreApplication::translate("ConfigureInputPlayer", "SR", nullptr));
        buttonMotionLeftGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Motion 1", nullptr));
        buttonMotionLeft->setText(QCoreApplication::translate("ConfigureInputPlayer", "Left", nullptr));
        buttonMotionRightGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Motion 2", nullptr));
        buttonMotionRight->setText(QCoreApplication::translate("ConfigureInputPlayer", "Right", nullptr));
        faceButtons->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Face Buttons", nullptr));
        buttonFaceButtonsXGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "X", nullptr));
        buttonX->setText(QCoreApplication::translate("ConfigureInputPlayer", "X", nullptr));
        buttonFaceButtonsYGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Y", nullptr));
        buttonY->setText(QCoreApplication::translate("ConfigureInputPlayer", "Y", nullptr));
        buttonFaceButtonsAGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "A", nullptr));
        buttonA->setText(QCoreApplication::translate("ConfigureInputPlayer", "A", nullptr));
        buttonFaceButtonsBWidget_2->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "B", nullptr));
        buttonB->setText(QCoreApplication::translate("ConfigureInputPlayer", "B", nullptr));
        RStick->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Right Stick", nullptr));
        buttonRStickUpGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Up", nullptr));
        buttonRStickUp->setText(QCoreApplication::translate("ConfigureInputPlayer", "Up", nullptr));
        buttonRStickLeftGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Left", nullptr));
        buttonRStickLeft->setText(QCoreApplication::translate("ConfigureInputPlayer", "Left", nullptr));
        buttonRStickRightGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Right", nullptr));
        buttonRStickRight->setText(QCoreApplication::translate("ConfigureInputPlayer", "Right", nullptr));
        buttonRStickDownGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Down", nullptr));
        buttonRStickDown->setText(QCoreApplication::translate("ConfigureInputPlayer", "Down", nullptr));
        groupRStickPressed->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Pressed", nullptr));
        buttonRStick->setText(QCoreApplication::translate("ConfigureInputPlayer", "Pressed", nullptr));
        buttonRStickModGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Modifier", nullptr));
        buttonRStickMod->setText(QCoreApplication::translate("ConfigureInputPlayer", "Modifier", nullptr));
        buttonRStickRangeGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Range", nullptr));
        spinboxRStickRange->setSuffix(QCoreApplication::translate("ConfigureInputPlayer", "%", nullptr));
        labelRStickDeadzone->setText(QCoreApplication::translate("ConfigureInputPlayer", "Deadzone: 0%", nullptr));
        labelRStickModifierRange->setText(QCoreApplication::translate("ConfigureInputPlayer", "Modifier Range: 0%", nullptr));
        mousePanningGroup->setTitle(QCoreApplication::translate("ConfigureInputPlayer", "Mouse panning", nullptr));
        mousePanningButton->setText(QCoreApplication::translate("ConfigureInputPlayer", "Configure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureInputPlayer: public Ui_ConfigureInputPlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_INPUT_PLAYER_H
