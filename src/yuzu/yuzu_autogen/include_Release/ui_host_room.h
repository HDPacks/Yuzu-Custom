/********************************************************************************
** Form generated from reading UI file 'host_room.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOST_ROOM_H
#define UI_HOST_ROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HostRoom
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *settings;
    QHBoxLayout *hboxLayout;
    QFormLayout *formLayout_2;
    QLabel *label;
    QLineEdit *room_name;
    QLabel *label_3;
    QComboBox *game_list;
    QLabel *label_2;
    QSpinBox *max_player;
    QFormLayout *formLayout;
    QLineEdit *username;
    QLabel *label_6;
    QLineEdit *password;
    QLineEdit *port;
    QLabel *label_5;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QTextEdit *room_description;
    QHBoxLayout *hboxLayout1;
    QCheckBox *load_ban_list;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QComboBox *host_type;
    QPushButton *host;

    void setupUi(QWidget *HostRoom)
    {
        if (HostRoom->objectName().isEmpty())
            HostRoom->setObjectName(QString::fromUtf8("HostRoom"));
        HostRoom->resize(607, 211);
        verticalLayout_3 = new QVBoxLayout(HostRoom);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        settings = new QWidget(HostRoom);
        settings->setObjectName(QString::fromUtf8("settings"));
        hboxLayout = new QHBoxLayout(settings);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, -1);
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(settings);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        room_name = new QLineEdit(settings);
        room_name->setObjectName(QString::fromUtf8("room_name"));
        room_name->setMaxLength(50);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, room_name);

        label_3 = new QLabel(settings);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        game_list = new QComboBox(settings);
        game_list->setObjectName(QString::fromUtf8("game_list"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, game_list);

        label_2 = new QLabel(settings);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_2);

        max_player = new QSpinBox(settings);
        max_player->setObjectName(QString::fromUtf8("max_player"));
        max_player->setMinimum(2);
        max_player->setMaximum(16);
        max_player->setValue(8);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, max_player);


        hboxLayout->addLayout(formLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        username = new QLineEdit(settings);
        username->setObjectName(QString::fromUtf8("username"));

        formLayout->setWidget(0, QFormLayout::FieldRole, username);

        label_6 = new QLabel(settings);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        password = new QLineEdit(settings);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        formLayout->setWidget(1, QFormLayout::FieldRole, password);

        port = new QLineEdit(settings);
        port->setObjectName(QString::fromUtf8("port"));
        port->setInputMethodHints(Qt::ImhDigitsOnly);
        port->setMaxLength(5);

        formLayout->setWidget(2, QFormLayout::FieldRole, port);

        label_5 = new QLabel(settings);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        label_4 = new QLabel(settings);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);


        hboxLayout->addLayout(formLayout);


        verticalLayout_3->addWidget(settings);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(HostRoom);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        room_description = new QTextEdit(HostRoom);
        room_description->setObjectName(QString::fromUtf8("room_description"));

        horizontalLayout_3->addWidget(room_description);


        verticalLayout_3->addLayout(horizontalLayout_3);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        load_ban_list = new QCheckBox(HostRoom);
        load_ban_list->setObjectName(QString::fromUtf8("load_ban_list"));
        load_ban_list->setChecked(true);

        hboxLayout1->addWidget(load_ban_list);


        verticalLayout_3->addLayout(hboxLayout1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        host_type = new QComboBox(HostRoom);
        host_type->addItem(QString());
        host_type->addItem(QString());
        host_type->setObjectName(QString::fromUtf8("host_type"));

        horizontalLayout->addWidget(host_type);

        host = new QPushButton(HostRoom);
        host->setObjectName(QString::fromUtf8("host"));

        horizontalLayout->addWidget(host);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(HostRoom);

        QMetaObject::connectSlotsByName(HostRoom);
    } // setupUi

    void retranslateUi(QWidget *HostRoom)
    {
        HostRoom->setWindowTitle(QCoreApplication::translate("HostRoom", "Create Room", nullptr));
        label->setText(QCoreApplication::translate("HostRoom", "Room Name", nullptr));
        label_3->setText(QCoreApplication::translate("HostRoom", "Preferred Game", nullptr));
        label_2->setText(QCoreApplication::translate("HostRoom", "Max Players", nullptr));
        label_6->setText(QCoreApplication::translate("HostRoom", "Username", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("HostRoom", "(Leave blank for open game)", nullptr));
        label_5->setText(QCoreApplication::translate("HostRoom", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("HostRoom", "Port", nullptr));
        label_7->setText(QCoreApplication::translate("HostRoom", "Room Description", nullptr));
        load_ban_list->setText(QCoreApplication::translate("HostRoom", "Load Previous Ban List", nullptr));
        host_type->setItemText(0, QCoreApplication::translate("HostRoom", "Public", nullptr));
        host_type->setItemText(1, QCoreApplication::translate("HostRoom", "Unlisted", nullptr));

        host->setText(QCoreApplication::translate("HostRoom", "Host Room", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HostRoom: public Ui_HostRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOST_ROOM_H
