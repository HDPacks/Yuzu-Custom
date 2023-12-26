/********************************************************************************
** Form generated from reading UI file 'configure_motion_touch.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_MOTION_TOUCH_H
#define UI_CONFIGURE_MOTION_TOUCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigureMotionTouch
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *touch_group_box;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *touch_calibration_label;
    QLabel *touch_calibration;
    QPushButton *touch_calibration_config;
    QHBoxLayout *hboxLayout1;
    QLabel *touch_from_button_label;
    QComboBox *touch_from_button_map;
    QPushButton *touch_from_button_config_btn;
    QGroupBox *udp_config_group_box;
    QVBoxLayout *vboxLayout2;
    QLabel *udp_help;
    QHBoxLayout *horizontalLayout;
    QListView *udp_server_list;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *hboxLayout2;
    QLabel *udp_server_label;
    QLineEdit *udp_server;
    QHBoxLayout *hboxLayout3;
    QLabel *udp_port_label;
    QLineEdit *udp_port;
    QHBoxLayout *hboxLayout4;
    QLabel *udp_learn_more;
    QPushButton *udp_test;
    QPushButton *udp_add;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *udp_remove;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigureMotionTouch)
    {
        if (ConfigureMotionTouch->objectName().isEmpty())
            ConfigureMotionTouch->setObjectName(QString::fromUtf8("ConfigureMotionTouch"));
        ConfigureMotionTouch->setStyleSheet(QString::fromUtf8(""));
        vboxLayout = new QVBoxLayout(ConfigureMotionTouch);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        touch_group_box = new QGroupBox(ConfigureMotionTouch);
        touch_group_box->setObjectName(QString::fromUtf8("touch_group_box"));
        vboxLayout1 = new QVBoxLayout(touch_group_box);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        touch_calibration_label = new QLabel(touch_group_box);
        touch_calibration_label->setObjectName(QString::fromUtf8("touch_calibration_label"));

        hboxLayout->addWidget(touch_calibration_label);

        touch_calibration = new QLabel(touch_group_box);
        touch_calibration->setObjectName(QString::fromUtf8("touch_calibration"));
        touch_calibration->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout->addWidget(touch_calibration);

        touch_calibration_config = new QPushButton(touch_group_box);
        touch_calibration_config->setObjectName(QString::fromUtf8("touch_calibration_config"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(touch_calibration_config->sizePolicy().hasHeightForWidth());
        touch_calibration_config->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(touch_calibration_config);


        vboxLayout1->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        touch_from_button_label = new QLabel(touch_group_box);
        touch_from_button_label->setObjectName(QString::fromUtf8("touch_from_button_label"));

        hboxLayout1->addWidget(touch_from_button_label);

        touch_from_button_map = new QComboBox(touch_group_box);
        touch_from_button_map->setObjectName(QString::fromUtf8("touch_from_button_map"));

        hboxLayout1->addWidget(touch_from_button_map);

        touch_from_button_config_btn = new QPushButton(touch_group_box);
        touch_from_button_config_btn->setObjectName(QString::fromUtf8("touch_from_button_config_btn"));
        sizePolicy.setHeightForWidth(touch_from_button_config_btn->sizePolicy().hasHeightForWidth());
        touch_from_button_config_btn->setSizePolicy(sizePolicy);

        hboxLayout1->addWidget(touch_from_button_config_btn);


        vboxLayout1->addLayout(hboxLayout1);


        vboxLayout->addWidget(touch_group_box);

        udp_config_group_box = new QGroupBox(ConfigureMotionTouch);
        udp_config_group_box->setObjectName(QString::fromUtf8("udp_config_group_box"));
        vboxLayout2 = new QVBoxLayout(udp_config_group_box);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        udp_help = new QLabel(udp_config_group_box);
        udp_help->setObjectName(QString::fromUtf8("udp_help"));
        udp_help->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        udp_help->setWordWrap(true);

        vboxLayout2->addWidget(udp_help);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        udp_server_list = new QListView(udp_config_group_box);
        udp_server_list->setObjectName(QString::fromUtf8("udp_server_list"));

        horizontalLayout->addWidget(udp_server_list);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(3, 3, 0, -1);
        udp_server_label = new QLabel(udp_config_group_box);
        udp_server_label->setObjectName(QString::fromUtf8("udp_server_label"));

        hboxLayout2->addWidget(udp_server_label);

        udp_server = new QLineEdit(udp_config_group_box);
        udp_server->setObjectName(QString::fromUtf8("udp_server"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(udp_server->sizePolicy().hasHeightForWidth());
        udp_server->setSizePolicy(sizePolicy1);

        hboxLayout2->addWidget(udp_server);


        verticalLayout->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        hboxLayout3->setContentsMargins(3, -1, 0, -1);
        udp_port_label = new QLabel(udp_config_group_box);
        udp_port_label->setObjectName(QString::fromUtf8("udp_port_label"));

        hboxLayout3->addWidget(udp_port_label);

        udp_port = new QLineEdit(udp_config_group_box);
        udp_port->setObjectName(QString::fromUtf8("udp_port"));
        sizePolicy1.setHeightForWidth(udp_port->sizePolicy().hasHeightForWidth());
        udp_port->setSizePolicy(sizePolicy1);

        hboxLayout3->addWidget(udp_port);


        verticalLayout->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        hboxLayout4->setContentsMargins(3, -1, 0, -1);
        udp_learn_more = new QLabel(udp_config_group_box);
        udp_learn_more->setObjectName(QString::fromUtf8("udp_learn_more"));

        hboxLayout4->addWidget(udp_learn_more);

        udp_test = new QPushButton(udp_config_group_box);
        udp_test->setObjectName(QString::fromUtf8("udp_test"));
        sizePolicy.setHeightForWidth(udp_test->sizePolicy().hasHeightForWidth());
        udp_test->setSizePolicy(sizePolicy);

        hboxLayout4->addWidget(udp_test);

        udp_add = new QPushButton(udp_config_group_box);
        udp_add->setObjectName(QString::fromUtf8("udp_add"));
        sizePolicy.setHeightForWidth(udp_add->sizePolicy().hasHeightForWidth());
        udp_add->setSizePolicy(sizePolicy);

        hboxLayout4->addWidget(udp_add);


        verticalLayout->addLayout(hboxLayout4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        udp_remove = new QPushButton(udp_config_group_box);
        udp_remove->setObjectName(QString::fromUtf8("udp_remove"));
        sizePolicy.setHeightForWidth(udp_remove->sizePolicy().hasHeightForWidth());
        udp_remove->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(udp_remove);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout);


        vboxLayout2->addLayout(horizontalLayout);


        vboxLayout->addWidget(udp_config_group_box);

        spacerItem = new QSpacerItem(167, 55, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(ConfigureMotionTouch);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(ConfigureMotionTouch);

        QMetaObject::connectSlotsByName(ConfigureMotionTouch);
    } // setupUi

    void retranslateUi(QDialog *ConfigureMotionTouch)
    {
        ConfigureMotionTouch->setWindowTitle(QCoreApplication::translate("ConfigureMotionTouch", "Configure Motion / Touch", nullptr));
        touch_group_box->setTitle(QCoreApplication::translate("ConfigureMotionTouch", "Touch", nullptr));
        touch_calibration_label->setText(QCoreApplication::translate("ConfigureMotionTouch", "UDP Calibration:", nullptr));
        touch_calibration->setText(QCoreApplication::translate("ConfigureMotionTouch", "(100, 50) - (1800, 850)", nullptr));
        touch_calibration_config->setText(QCoreApplication::translate("ConfigureMotionTouch", "Configure", nullptr));
        touch_from_button_label->setText(QCoreApplication::translate("ConfigureMotionTouch", "Touch from button profile:", nullptr));
        touch_from_button_config_btn->setText(QCoreApplication::translate("ConfigureMotionTouch", "Configure", nullptr));
        udp_config_group_box->setTitle(QCoreApplication::translate("ConfigureMotionTouch", "CemuhookUDP Config", nullptr));
        udp_help->setText(QCoreApplication::translate("ConfigureMotionTouch", "You may use any Cemuhook compatible UDP input source to provide motion and touch input.", nullptr));
        udp_server_label->setText(QCoreApplication::translate("ConfigureMotionTouch", "Server:", nullptr));
        udp_port_label->setText(QCoreApplication::translate("ConfigureMotionTouch", "Port:", nullptr));
        udp_learn_more->setText(QCoreApplication::translate("ConfigureMotionTouch", "Learn More", nullptr));
        udp_test->setText(QCoreApplication::translate("ConfigureMotionTouch", "Test", nullptr));
        udp_add->setText(QCoreApplication::translate("ConfigureMotionTouch", "Add Server", nullptr));
        udp_remove->setText(QCoreApplication::translate("ConfigureMotionTouch", "Remove Server", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureMotionTouch: public Ui_ConfigureMotionTouch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_MOTION_TOUCH_H
