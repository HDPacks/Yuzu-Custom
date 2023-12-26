/********************************************************************************
** Form generated from reading UI file 'client_room.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_ROOM_H
#define UI_CLIENT_ROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "multiplayer/chat_room.h"

QT_BEGIN_NAMESPACE

class Ui_ClientRoom
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *description;
    QSpacerItem *horizontalSpacer;
    QPushButton *moderation;
    QPushButton *disconnect;
    ChatRoom *chat;

    void setupUi(QWidget *ClientRoom)
    {
        if (ClientRoom->objectName().isEmpty())
            ClientRoom->setObjectName(QString::fromUtf8("ClientRoom"));
        ClientRoom->resize(807, 432);
        verticalLayout = new QVBoxLayout(ClientRoom);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        description = new QLabel(ClientRoom);
        description->setObjectName(QString::fromUtf8("description"));

        horizontalLayout->addWidget(description);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        moderation = new QPushButton(ClientRoom);
        moderation->setObjectName(QString::fromUtf8("moderation"));
        moderation->setVisible(false);

        horizontalLayout->addWidget(moderation);

        disconnect = new QPushButton(ClientRoom);
        disconnect->setObjectName(QString::fromUtf8("disconnect"));

        horizontalLayout->addWidget(disconnect);


        verticalLayout_3->addLayout(horizontalLayout);

        chat = new ChatRoom(ClientRoom);
        chat->setObjectName(QString::fromUtf8("chat"));

        verticalLayout_3->addWidget(chat);


        verticalLayout->addLayout(verticalLayout_3);


        retranslateUi(ClientRoom);

        QMetaObject::connectSlotsByName(ClientRoom);
    } // setupUi

    void retranslateUi(QWidget *ClientRoom)
    {
        ClientRoom->setWindowTitle(QCoreApplication::translate("ClientRoom", "Room Window", nullptr));
        description->setText(QCoreApplication::translate("ClientRoom", "Room Description", nullptr));
        moderation->setText(QCoreApplication::translate("ClientRoom", "Moderation...", nullptr));
        disconnect->setText(QCoreApplication::translate("ClientRoom", "Leave Room", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientRoom: public Ui_ClientRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_ROOM_H
