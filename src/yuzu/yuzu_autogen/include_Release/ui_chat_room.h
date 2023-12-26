/********************************************************************************
** Form generated from reading UI file 'chat_room.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_ROOM_H
#define UI_CHAT_ROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatRoom
{
public:
    QHBoxLayout *horizontalLayout;
    QTreeView *player_view;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *chat_history;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *chat_message;
    QPushButton *send_message;

    void setupUi(QWidget *ChatRoom)
    {
        if (ChatRoom->objectName().isEmpty())
            ChatRoom->setObjectName(QString::fromUtf8("ChatRoom"));
        ChatRoom->resize(807, 432);
        horizontalLayout = new QHBoxLayout(ChatRoom);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        player_view = new QTreeView(ChatRoom);
        player_view->setObjectName(QString::fromUtf8("player_view"));

        horizontalLayout->addWidget(player_view);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        chat_history = new QTextEdit(ChatRoom);
        chat_history->setObjectName(QString::fromUtf8("chat_history"));
        chat_history->setUndoRedoEnabled(false);
        chat_history->setReadOnly(true);
        chat_history->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_4->addWidget(chat_history);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        chat_message = new QLineEdit(ChatRoom);
        chat_message->setObjectName(QString::fromUtf8("chat_message"));

        horizontalLayout_3->addWidget(chat_message);

        send_message = new QPushButton(ChatRoom);
        send_message->setObjectName(QString::fromUtf8("send_message"));

        horizontalLayout_3->addWidget(send_message);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout->addLayout(verticalLayout_4);


        retranslateUi(ChatRoom);

        QMetaObject::connectSlotsByName(ChatRoom);
    } // setupUi

    void retranslateUi(QWidget *ChatRoom)
    {
        ChatRoom->setWindowTitle(QCoreApplication::translate("ChatRoom", "Room Window", nullptr));
        chat_message->setPlaceholderText(QCoreApplication::translate("ChatRoom", "Send Chat Message", nullptr));
        send_message->setText(QCoreApplication::translate("ChatRoom", "Send Message", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatRoom: public Ui_ChatRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_ROOM_H
