/********************************************************************************
** Form generated from reading UI file 'configure_ringcon.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_RINGCON_H
#define UI_CONFIGURE_RINGCON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigureRingController
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *RingAnalog;
    QVBoxLayout *verticalLayout_1;
    QHBoxLayout *buttonRingAnalogPullHorizontaLayout;
    QGroupBox *buttonRingAnalogPullGroup;
    QVBoxLayout *buttonRingAnalogPullVerticalLayout;
    QPushButton *buttonRingAnalogPull;
    QGroupBox *buttonRingAnalogPushGroup;
    QVBoxLayout *buttonRingAnalogPushVerticalLayout;
    QPushButton *buttonRingAnalogPush;
    QVBoxLayout *sliderRingAnalogDeadzoneVerticalLayout;
    QHBoxLayout *sliderRingAnalogDeadzoneHorizontalLayout;
    QLabel *labelRingAnalogDeadzone;
    QSlider *sliderRingAnalogDeadzone;
    QGroupBox *RingDriver;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *enable_ring_controller_label;
    QPushButton *enable_ring_controller_button;
    QLabel *ring_controller_sensor_label;
    QLabel *ring_controller_sensor_value;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *restore_defaults_button;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigureRingController)
    {
        if (ConfigureRingController->objectName().isEmpty())
            ConfigureRingController->setObjectName(QString::fromUtf8("ConfigureRingController"));
        ConfigureRingController->resize(315, 400);
        verticalLayout = new QVBoxLayout(ConfigureRingController);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(ConfigureRingController);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(280, 0));
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        RingAnalog = new QGroupBox(ConfigureRingController);
        RingAnalog->setObjectName(QString::fromUtf8("RingAnalog"));
        RingAnalog->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout_1 = new QVBoxLayout(RingAnalog);
        verticalLayout_1->setSpacing(0);
        verticalLayout_1->setObjectName(QString::fromUtf8("verticalLayout_1"));
        verticalLayout_1->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_1->setContentsMargins(3, 6, 3, 0);
        buttonRingAnalogPullHorizontaLayout = new QHBoxLayout();
        buttonRingAnalogPullHorizontaLayout->setSpacing(3);
        buttonRingAnalogPullHorizontaLayout->setObjectName(QString::fromUtf8("buttonRingAnalogPullHorizontaLayout"));
        buttonRingAnalogPullGroup = new QGroupBox(RingAnalog);
        buttonRingAnalogPullGroup->setObjectName(QString::fromUtf8("buttonRingAnalogPullGroup"));
        buttonRingAnalogPullGroup->setAlignment(Qt::AlignCenter);
        buttonRingAnalogPullVerticalLayout = new QVBoxLayout(buttonRingAnalogPullGroup);
        buttonRingAnalogPullVerticalLayout->setSpacing(3);
        buttonRingAnalogPullVerticalLayout->setObjectName(QString::fromUtf8("buttonRingAnalogPullVerticalLayout"));
        buttonRingAnalogPullVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonRingAnalogPull = new QPushButton(buttonRingAnalogPullGroup);
        buttonRingAnalogPull->setObjectName(QString::fromUtf8("buttonRingAnalogPull"));
        buttonRingAnalogPull->setMinimumSize(QSize(70, 0));
        buttonRingAnalogPull->setMaximumSize(QSize(68, 16777215));
        buttonRingAnalogPull->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonRingAnalogPullVerticalLayout->addWidget(buttonRingAnalogPull);


        buttonRingAnalogPullHorizontaLayout->addWidget(buttonRingAnalogPullGroup, 0, Qt::AlignHCenter);

        buttonRingAnalogPushGroup = new QGroupBox(RingAnalog);
        buttonRingAnalogPushGroup->setObjectName(QString::fromUtf8("buttonRingAnalogPushGroup"));
        buttonRingAnalogPushGroup->setAlignment(Qt::AlignCenter);
        buttonRingAnalogPushVerticalLayout = new QVBoxLayout(buttonRingAnalogPushGroup);
        buttonRingAnalogPushVerticalLayout->setSpacing(3);
        buttonRingAnalogPushVerticalLayout->setObjectName(QString::fromUtf8("buttonRingAnalogPushVerticalLayout"));
        buttonRingAnalogPushVerticalLayout->setContentsMargins(3, 3, 3, 3);
        buttonRingAnalogPush = new QPushButton(buttonRingAnalogPushGroup);
        buttonRingAnalogPush->setObjectName(QString::fromUtf8("buttonRingAnalogPush"));
        buttonRingAnalogPush->setMinimumSize(QSize(70, 0));
        buttonRingAnalogPush->setMaximumSize(QSize(68, 16777215));
        buttonRingAnalogPush->setStyleSheet(QString::fromUtf8("min-width: 68px;"));

        buttonRingAnalogPushVerticalLayout->addWidget(buttonRingAnalogPush);


        buttonRingAnalogPullHorizontaLayout->addWidget(buttonRingAnalogPushGroup, 0, Qt::AlignHCenter);


        verticalLayout_1->addLayout(buttonRingAnalogPullHorizontaLayout);

        sliderRingAnalogDeadzoneVerticalLayout = new QVBoxLayout();
        sliderRingAnalogDeadzoneVerticalLayout->setSpacing(3);
        sliderRingAnalogDeadzoneVerticalLayout->setObjectName(QString::fromUtf8("sliderRingAnalogDeadzoneVerticalLayout"));
        sliderRingAnalogDeadzoneVerticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        sliderRingAnalogDeadzoneVerticalLayout->setContentsMargins(0, 10, 0, 3);
        sliderRingAnalogDeadzoneHorizontalLayout = new QHBoxLayout();
        sliderRingAnalogDeadzoneHorizontalLayout->setObjectName(QString::fromUtf8("sliderRingAnalogDeadzoneHorizontalLayout"));
        labelRingAnalogDeadzone = new QLabel(RingAnalog);
        labelRingAnalogDeadzone->setObjectName(QString::fromUtf8("labelRingAnalogDeadzone"));
        labelRingAnalogDeadzone->setAlignment(Qt::AlignHCenter);

        sliderRingAnalogDeadzoneHorizontalLayout->addWidget(labelRingAnalogDeadzone);


        sliderRingAnalogDeadzoneVerticalLayout->addLayout(sliderRingAnalogDeadzoneHorizontalLayout);

        sliderRingAnalogDeadzone = new QSlider(RingAnalog);
        sliderRingAnalogDeadzone->setObjectName(QString::fromUtf8("sliderRingAnalogDeadzone"));
        sliderRingAnalogDeadzone->setMaximum(100);
        sliderRingAnalogDeadzone->setOrientation(Qt::Horizontal);

        sliderRingAnalogDeadzoneVerticalLayout->addWidget(sliderRingAnalogDeadzone);


        verticalLayout_1->addLayout(sliderRingAnalogDeadzoneVerticalLayout);


        verticalLayout->addWidget(RingAnalog);

        RingDriver = new QGroupBox(ConfigureRingController);
        RingDriver->setObjectName(QString::fromUtf8("RingDriver"));
        RingDriver->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        verticalLayout_2 = new QVBoxLayout(RingDriver);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(3, 6, 3, 10);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(10, 6, 10, 10);
        horizontalSpacer = new QSpacerItem(76, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        enable_ring_controller_label = new QLabel(RingDriver);
        enable_ring_controller_label->setObjectName(QString::fromUtf8("enable_ring_controller_label"));

        gridLayout->addWidget(enable_ring_controller_label, 0, 0, 1, 1);

        enable_ring_controller_button = new QPushButton(RingDriver);
        enable_ring_controller_button->setObjectName(QString::fromUtf8("enable_ring_controller_button"));

        gridLayout->addWidget(enable_ring_controller_button, 0, 2, 1, 1);

        ring_controller_sensor_label = new QLabel(RingDriver);
        ring_controller_sensor_label->setObjectName(QString::fromUtf8("ring_controller_sensor_label"));

        gridLayout->addWidget(ring_controller_sensor_label, 1, 0, 1, 1);

        ring_controller_sensor_value = new QLabel(RingDriver);
        ring_controller_sensor_value->setObjectName(QString::fromUtf8("ring_controller_sensor_value"));
        ring_controller_sensor_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(ring_controller_sensor_value, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout->addWidget(RingDriver);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        restore_defaults_button = new QPushButton(ConfigureRingController);
        restore_defaults_button->setObjectName(QString::fromUtf8("restore_defaults_button"));

        horizontalLayout->addWidget(restore_defaults_button);

        buttonBox = new QDialogButtonBox(ConfigureRingController);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ConfigureRingController);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigureRingController, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfigureRingController, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConfigureRingController);
    } // setupUi

    void retranslateUi(QDialog *ConfigureRingController)
    {
        ConfigureRingController->setWindowTitle(QCoreApplication::translate("ConfigureRingController", "Configure Ring Controller", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigureRingController", "To use Ring-Con, configure player 1 as right Joy-Con (both physical and emulated), and player 2 as left Joy-Con (left physical and dual emulated) before starting the game.", nullptr));
        RingAnalog->setTitle(QCoreApplication::translate("ConfigureRingController", "Virtual Ring Sensor Parameters", nullptr));
        buttonRingAnalogPullGroup->setTitle(QCoreApplication::translate("ConfigureRingController", "Pull", nullptr));
        buttonRingAnalogPull->setText(QCoreApplication::translate("ConfigureRingController", "Pull", nullptr));
        buttonRingAnalogPushGroup->setTitle(QCoreApplication::translate("ConfigureRingController", "Push", nullptr));
        buttonRingAnalogPush->setText(QCoreApplication::translate("ConfigureRingController", "Push", nullptr));
        labelRingAnalogDeadzone->setText(QCoreApplication::translate("ConfigureRingController", "Deadzone: 0%", nullptr));
        RingDriver->setTitle(QCoreApplication::translate("ConfigureRingController", "Direct Joycon Driver", nullptr));
        enable_ring_controller_label->setText(QCoreApplication::translate("ConfigureRingController", "Enable Ring Input", nullptr));
        enable_ring_controller_button->setText(QCoreApplication::translate("ConfigureRingController", "Enable", nullptr));
        ring_controller_sensor_label->setText(QCoreApplication::translate("ConfigureRingController", "Ring Sensor Value", nullptr));
        ring_controller_sensor_value->setText(QCoreApplication::translate("ConfigureRingController", "Not connected", nullptr));
        restore_defaults_button->setText(QCoreApplication::translate("ConfigureRingController", "Restore Defaults", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureRingController: public Ui_ConfigureRingController {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_RINGCON_H
