/********************************************************************************
** Form generated from reading UI file 'configure_input_per_game.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_INPUT_PER_GAME_H
#define UI_CONFIGURE_INPUT_PER_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureInputPerGame
{
public:
    QVBoxLayout *verticalLayout_1;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QWidget *player_1;
    QHBoxLayout *input_profile_layout_1;
    QLabel *label_player_1;
    QComboBox *profile_player_1;
    QWidget *player_2;
    QHBoxLayout *input_profile_layout_2;
    QLabel *label_player_2;
    QComboBox *profile_player_2;
    QWidget *player_3;
    QHBoxLayout *input_profile_layout_3;
    QLabel *label_player_3;
    QComboBox *profile_player_3;
    QWidget *player_4;
    QHBoxLayout *input_profile_layout_4;
    QLabel *label_player_4;
    QComboBox *profile_player_4;
    QWidget *player_5;
    QHBoxLayout *input_profile_layout_5;
    QLabel *label_player_5;
    QComboBox *profile_player_5;
    QWidget *player_6;
    QHBoxLayout *input_profile_layout_6;
    QLabel *label_player_6;
    QComboBox *profile_player_6;
    QWidget *player_7;
    QHBoxLayout *input_profile_layout_7;
    QLabel *label_player_7;
    QComboBox *profile_player_7;
    QWidget *player_8;
    QHBoxLayout *input_profile_layout_8;
    QLabel *label_player_8;
    QComboBox *profile_player_8;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PerGameInput)
    {
        if (PerGameInput->objectName().isEmpty())
            PerGameInput->setObjectName(QString::fromUtf8("PerGameInput"));
        PerGameInput->resize(541, 759);
        verticalLayout_1 = new QVBoxLayout(PerGameInput);
        verticalLayout_1->setObjectName(QString::fromUtf8("verticalLayout_1"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(PerGameInput);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        player_1 = new QWidget(groupBox);
        player_1->setObjectName(QString::fromUtf8("player_1"));
        input_profile_layout_1 = new QHBoxLayout(player_1);
        input_profile_layout_1->setObjectName(QString::fromUtf8("input_profile_layout_1"));
        input_profile_layout_1->setContentsMargins(0, 0, 0, 0);
        label_player_1 = new QLabel(player_1);
        label_player_1->setObjectName(QString::fromUtf8("label_player_1"));

        input_profile_layout_1->addWidget(label_player_1);

        profile_player_1 = new QComboBox(player_1);
        profile_player_1->setObjectName(QString::fromUtf8("profile_player_1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(profile_player_1->sizePolicy().hasHeightForWidth());
        profile_player_1->setSizePolicy(sizePolicy);

        input_profile_layout_1->addWidget(profile_player_1);


        verticalLayout_4->addWidget(player_1);

        player_2 = new QWidget(groupBox);
        player_2->setObjectName(QString::fromUtf8("player_2"));
        input_profile_layout_2 = new QHBoxLayout(player_2);
        input_profile_layout_2->setObjectName(QString::fromUtf8("input_profile_layout_2"));
        input_profile_layout_2->setContentsMargins(0, 0, 0, 0);
        label_player_2 = new QLabel(player_2);
        label_player_2->setObjectName(QString::fromUtf8("label_player_2"));

        input_profile_layout_2->addWidget(label_player_2);

        profile_player_2 = new QComboBox(player_2);
        profile_player_2->setObjectName(QString::fromUtf8("profile_player_2"));
        sizePolicy.setHeightForWidth(profile_player_2->sizePolicy().hasHeightForWidth());
        profile_player_2->setSizePolicy(sizePolicy);

        input_profile_layout_2->addWidget(profile_player_2);


        verticalLayout_4->addWidget(player_2);

        player_3 = new QWidget(groupBox);
        player_3->setObjectName(QString::fromUtf8("player_3"));
        input_profile_layout_3 = new QHBoxLayout(player_3);
        input_profile_layout_3->setObjectName(QString::fromUtf8("input_profile_layout_3"));
        input_profile_layout_3->setContentsMargins(0, 0, 0, 0);
        label_player_3 = new QLabel(player_3);
        label_player_3->setObjectName(QString::fromUtf8("label_player_3"));

        input_profile_layout_3->addWidget(label_player_3);

        profile_player_3 = new QComboBox(player_3);
        profile_player_3->setObjectName(QString::fromUtf8("profile_player_3"));
        sizePolicy.setHeightForWidth(profile_player_3->sizePolicy().hasHeightForWidth());
        profile_player_3->setSizePolicy(sizePolicy);

        input_profile_layout_3->addWidget(profile_player_3);


        verticalLayout_4->addWidget(player_3);

        player_4 = new QWidget(groupBox);
        player_4->setObjectName(QString::fromUtf8("player_4"));
        input_profile_layout_4 = new QHBoxLayout(player_4);
        input_profile_layout_4->setObjectName(QString::fromUtf8("input_profile_layout_4"));
        input_profile_layout_4->setContentsMargins(0, 0, 0, 0);
        label_player_4 = new QLabel(player_4);
        label_player_4->setObjectName(QString::fromUtf8("label_player_4"));

        input_profile_layout_4->addWidget(label_player_4);

        profile_player_4 = new QComboBox(player_4);
        profile_player_4->setObjectName(QString::fromUtf8("profile_player_4"));
        sizePolicy.setHeightForWidth(profile_player_4->sizePolicy().hasHeightForWidth());
        profile_player_4->setSizePolicy(sizePolicy);

        input_profile_layout_4->addWidget(profile_player_4);


        verticalLayout_4->addWidget(player_4);

        player_5 = new QWidget(groupBox);
        player_5->setObjectName(QString::fromUtf8("player_5"));
        input_profile_layout_5 = new QHBoxLayout(player_5);
        input_profile_layout_5->setObjectName(QString::fromUtf8("input_profile_layout_5"));
        input_profile_layout_5->setContentsMargins(0, 0, 0, 0);
        label_player_5 = new QLabel(player_5);
        label_player_5->setObjectName(QString::fromUtf8("label_player_5"));

        input_profile_layout_5->addWidget(label_player_5);

        profile_player_5 = new QComboBox(player_5);
        profile_player_5->setObjectName(QString::fromUtf8("profile_player_5"));
        sizePolicy.setHeightForWidth(profile_player_5->sizePolicy().hasHeightForWidth());
        profile_player_5->setSizePolicy(sizePolicy);

        input_profile_layout_5->addWidget(profile_player_5);


        verticalLayout_4->addWidget(player_5);

        player_6 = new QWidget(groupBox);
        player_6->setObjectName(QString::fromUtf8("player_6"));
        input_profile_layout_6 = new QHBoxLayout(player_6);
        input_profile_layout_6->setObjectName(QString::fromUtf8("input_profile_layout_6"));
        input_profile_layout_6->setContentsMargins(0, 0, 0, 0);
        label_player_6 = new QLabel(player_6);
        label_player_6->setObjectName(QString::fromUtf8("label_player_6"));

        input_profile_layout_6->addWidget(label_player_6);

        profile_player_6 = new QComboBox(player_6);
        profile_player_6->setObjectName(QString::fromUtf8("profile_player_6"));
        sizePolicy.setHeightForWidth(profile_player_6->sizePolicy().hasHeightForWidth());
        profile_player_6->setSizePolicy(sizePolicy);

        input_profile_layout_6->addWidget(profile_player_6);


        verticalLayout_4->addWidget(player_6);

        player_7 = new QWidget(groupBox);
        player_7->setObjectName(QString::fromUtf8("player_7"));
        input_profile_layout_7 = new QHBoxLayout(player_7);
        input_profile_layout_7->setObjectName(QString::fromUtf8("input_profile_layout_7"));
        input_profile_layout_7->setContentsMargins(0, 0, 0, 0);
        label_player_7 = new QLabel(player_7);
        label_player_7->setObjectName(QString::fromUtf8("label_player_7"));

        input_profile_layout_7->addWidget(label_player_7);

        profile_player_7 = new QComboBox(player_7);
        profile_player_7->setObjectName(QString::fromUtf8("profile_player_7"));
        sizePolicy.setHeightForWidth(profile_player_7->sizePolicy().hasHeightForWidth());
        profile_player_7->setSizePolicy(sizePolicy);

        input_profile_layout_7->addWidget(profile_player_7);


        verticalLayout_4->addWidget(player_7);

        player_8 = new QWidget(groupBox);
        player_8->setObjectName(QString::fromUtf8("player_8"));
        input_profile_layout_8 = new QHBoxLayout(player_8);
        input_profile_layout_8->setObjectName(QString::fromUtf8("input_profile_layout_8"));
        input_profile_layout_8->setContentsMargins(0, 0, 0, 0);
        label_player_8 = new QLabel(player_8);
        label_player_8->setObjectName(QString::fromUtf8("label_player_8"));

        input_profile_layout_8->addWidget(label_player_8);

        profile_player_8 = new QComboBox(player_8);
        profile_player_8->setObjectName(QString::fromUtf8("profile_player_8"));
        sizePolicy.setHeightForWidth(profile_player_8->sizePolicy().hasHeightForWidth());
        profile_player_8->setSizePolicy(sizePolicy);

        input_profile_layout_8->addWidget(profile_player_8);


        verticalLayout_4->addWidget(player_8);


        verticalLayout_2->addWidget(groupBox);


        verticalLayout_1->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_1->addItem(verticalSpacer);


        retranslateUi(PerGameInput);

        QMetaObject::connectSlotsByName(PerGameInput);
    } // setupUi

    void retranslateUi(QWidget *PerGameInput)
    {
        PerGameInput->setWindowTitle(QCoreApplication::translate("ConfigureInputPerGame", "Form", nullptr));
#if QT_CONFIG(accessibility)
        PerGameInput->setAccessibleName(QCoreApplication::translate("ConfigureInputPerGame", "Graphics", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox->setTitle(QCoreApplication::translate("ConfigureInputPerGame", "Input Profiles", nullptr));
        label_player_1->setText(QCoreApplication::translate("ConfigureInputPerGame", "Player 1 Profile", nullptr));
        label_player_2->setText(QCoreApplication::translate("ConfigureInputPerGame", "Player 2 Profile", nullptr));
        label_player_3->setText(QCoreApplication::translate("ConfigureInputPerGame", "Player 3 Profile", nullptr));
        label_player_4->setText(QCoreApplication::translate("ConfigureInputPerGame", "Player 4 Profile", nullptr));
        label_player_5->setText(QCoreApplication::translate("ConfigureInputPerGame", "Player 5 Profile", nullptr));
        label_player_6->setText(QCoreApplication::translate("ConfigureInputPerGame", "Player 6 Profile", nullptr));
        label_player_7->setText(QCoreApplication::translate("ConfigureInputPerGame", "Player 7 Profile", nullptr));
        label_player_8->setText(QCoreApplication::translate("ConfigureInputPerGame", "Player 8 Profile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureInputPerGame: public Ui_ConfigureInputPerGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_INPUT_PER_GAME_H
