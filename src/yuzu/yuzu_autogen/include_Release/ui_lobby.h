/********************************************************************************
** Form generated from reading UI file 'lobby.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOBBY_H
#define UI_LOBBY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lobby
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *nickname;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLineEdit *search;
    QCheckBox *games_owned;
    QCheckBox *hide_empty;
    QCheckBox *hide_full;
    QSpacerItem *horizontalSpacer;
    QPushButton *refresh_list;
    QTreeView *room_list;
    QWidget *widget;

    void setupUi(QWidget *Lobby)
    {
        if (Lobby->objectName().isEmpty())
            Lobby->setObjectName(QString::fromUtf8("Lobby"));
        Lobby->resize(903, 487);
        verticalLayout = new QVBoxLayout(Lobby);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(Lobby);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        nickname = new QLineEdit(Lobby);
        nickname->setObjectName(QString::fromUtf8("nickname"));

        horizontalLayout_5->addWidget(nickname);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        label_2 = new QLabel(Lobby);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        search = new QLineEdit(Lobby);
        search->setObjectName(QString::fromUtf8("search"));
        search->setClearButtonEnabled(true);

        horizontalLayout_5->addWidget(search);

        games_owned = new QCheckBox(Lobby);
        games_owned->setObjectName(QString::fromUtf8("games_owned"));

        horizontalLayout_5->addWidget(games_owned);

        hide_empty = new QCheckBox(Lobby);
        hide_empty->setObjectName(QString::fromUtf8("hide_empty"));

        horizontalLayout_5->addWidget(hide_empty);

        hide_full = new QCheckBox(Lobby);
        hide_full->setObjectName(QString::fromUtf8("hide_full"));

        horizontalLayout_5->addWidget(hide_full);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        refresh_list = new QPushButton(Lobby);
        refresh_list->setObjectName(QString::fromUtf8("refresh_list"));

        horizontalLayout_5->addWidget(refresh_list);


        horizontalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(horizontalLayout_3);

        room_list = new QTreeView(Lobby);
        room_list->setObjectName(QString::fromUtf8("room_list"));

        verticalLayout_2->addWidget(room_list);

        widget = new QWidget(Lobby);
        widget->setObjectName(QString::fromUtf8("widget"));

        verticalLayout_2->addWidget(widget);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(Lobby);

        QMetaObject::connectSlotsByName(Lobby);
    } // setupUi

    void retranslateUi(QWidget *Lobby)
    {
        Lobby->setWindowTitle(QCoreApplication::translate("Lobby", "Public Room Browser", nullptr));
        label->setText(QCoreApplication::translate("Lobby", "Nickname", nullptr));
        nickname->setPlaceholderText(QCoreApplication::translate("Lobby", "Nickname", nullptr));
        label_2->setText(QCoreApplication::translate("Lobby", "Filters", nullptr));
        search->setPlaceholderText(QCoreApplication::translate("Lobby", "Search", nullptr));
        games_owned->setText(QCoreApplication::translate("Lobby", "Games I Own", nullptr));
        hide_empty->setText(QCoreApplication::translate("Lobby", "Hide Empty Rooms", nullptr));
        hide_full->setText(QCoreApplication::translate("Lobby", "Hide Full Rooms", nullptr));
        refresh_list->setText(QCoreApplication::translate("Lobby", "Refresh Lobby", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lobby: public Ui_Lobby {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOBBY_H
