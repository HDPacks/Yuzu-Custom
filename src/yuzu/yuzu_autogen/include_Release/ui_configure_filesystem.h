/********************************************************************************
** Form generated from reading UI file 'configure_filesystem.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_FILESYSTEM_H
#define UI_CONFIGURE_FILESYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureFilesystem
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QToolButton *nand_directory_button;
    QLineEdit *nand_directory_edit;
    QLineEdit *sdmc_directory_edit;
    QLabel *label_2;
    QToolButton *sdmc_directory_button;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLineEdit *gamecard_path_edit;
    QCheckBox *gamecard_inserted;
    QCheckBox *gamecard_current_game;
    QToolButton *gamecard_path_button;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QLineEdit *load_path_edit;
    QLineEdit *dump_path_edit;
    QToolButton *dump_path_button;
    QToolButton *load_path_button;
    QHBoxLayout *horizontalLayout;
    QCheckBox *dump_nso;
    QCheckBox *dump_exefs;
    QLabel *label_9;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *cache_game_list;
    QPushButton *reset_game_list_cache;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ConfigureFilesystem)
    {
        if (ConfigureFilesystem->objectName().isEmpty())
            ConfigureFilesystem->setObjectName(QString::fromUtf8("ConfigureFilesystem"));
        ConfigureFilesystem->resize(453, 561);
        verticalLayout = new QVBoxLayout(ConfigureFilesystem);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(ConfigureFilesystem);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        nand_directory_button = new QToolButton(groupBox);
        nand_directory_button->setObjectName(QString::fromUtf8("nand_directory_button"));

        gridLayout->addWidget(nand_directory_button, 0, 3, 1, 1);

        nand_directory_edit = new QLineEdit(groupBox);
        nand_directory_edit->setObjectName(QString::fromUtf8("nand_directory_edit"));

        gridLayout->addWidget(nand_directory_edit, 0, 2, 1, 1);

        sdmc_directory_edit = new QLineEdit(groupBox);
        sdmc_directory_edit->setObjectName(QString::fromUtf8("sdmc_directory_edit"));

        gridLayout->addWidget(sdmc_directory_edit, 1, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        sdmc_directory_button = new QToolButton(groupBox);
        sdmc_directory_button->setObjectName(QString::fromUtf8("sdmc_directory_button"));

        gridLayout->addWidget(sdmc_directory_button, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ConfigureFilesystem);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 1, 1, 1);

        gamecard_path_edit = new QLineEdit(groupBox_2);
        gamecard_path_edit->setObjectName(QString::fromUtf8("gamecard_path_edit"));

        gridLayout_2->addWidget(gamecard_path_edit, 2, 2, 1, 1);

        gamecard_inserted = new QCheckBox(groupBox_2);
        gamecard_inserted->setObjectName(QString::fromUtf8("gamecard_inserted"));

        gridLayout_2->addWidget(gamecard_inserted, 0, 1, 1, 1);

        gamecard_current_game = new QCheckBox(groupBox_2);
        gamecard_current_game->setObjectName(QString::fromUtf8("gamecard_current_game"));

        gridLayout_2->addWidget(gamecard_current_game, 1, 1, 1, 1);

        gamecard_path_button = new QToolButton(groupBox_2);
        gamecard_path_button->setObjectName(QString::fromUtf8("gamecard_path_button"));

        gridLayout_2->addWidget(gamecard_path_button, 2, 3, 1, 1);


        verticalLayout_3->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(ConfigureFilesystem);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        load_path_edit = new QLineEdit(groupBox_4);
        load_path_edit->setObjectName(QString::fromUtf8("load_path_edit"));

        gridLayout_4->addWidget(load_path_edit, 1, 2, 1, 1);

        dump_path_edit = new QLineEdit(groupBox_4);
        dump_path_edit->setObjectName(QString::fromUtf8("dump_path_edit"));

        gridLayout_4->addWidget(dump_path_edit, 0, 2, 1, 1);

        dump_path_button = new QToolButton(groupBox_4);
        dump_path_button->setObjectName(QString::fromUtf8("dump_path_button"));

        gridLayout_4->addWidget(dump_path_button, 0, 3, 1, 1);

        load_path_button = new QToolButton(groupBox_4);
        load_path_button->setObjectName(QString::fromUtf8("load_path_button"));

        gridLayout_4->addWidget(load_path_button, 1, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        dump_nso = new QCheckBox(groupBox_4);
        dump_nso->setObjectName(QString::fromUtf8("dump_nso"));

        horizontalLayout->addWidget(dump_nso);

        dump_exefs = new QCheckBox(groupBox_4);
        dump_exefs->setObjectName(QString::fromUtf8("dump_exefs"));

        horizontalLayout->addWidget(dump_exefs);


        gridLayout_4->addLayout(horizontalLayout, 2, 0, 1, 4);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_4->addWidget(label_9, 1, 0, 1, 1);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(ConfigureFilesystem);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_5 = new QGridLayout(groupBox_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cache_game_list = new QCheckBox(groupBox_5);
        cache_game_list->setObjectName(QString::fromUtf8("cache_game_list"));

        horizontalLayout_2->addWidget(cache_game_list);

        reset_game_list_cache = new QPushButton(groupBox_5);
        reset_game_list_cache->setObjectName(QString::fromUtf8("reset_game_list_cache"));

        horizontalLayout_2->addWidget(reset_game_list_cache);


        gridLayout_5->addLayout(horizontalLayout_2, 0, 0, 1, 2);


        verticalLayout_3->addWidget(groupBox_5);


        verticalLayout->addLayout(verticalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ConfigureFilesystem);

        QMetaObject::connectSlotsByName(ConfigureFilesystem);
    } // setupUi

    void retranslateUi(QWidget *ConfigureFilesystem)
    {
        ConfigureFilesystem->setWindowTitle(QCoreApplication::translate("ConfigureFilesystem", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigureFilesystem->setAccessibleName(QCoreApplication::translate("ConfigureFilesystem", "Filesystem", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox->setTitle(QCoreApplication::translate("ConfigureFilesystem", "Storage Directories", nullptr));
        label->setText(QCoreApplication::translate("ConfigureFilesystem", "NAND", nullptr));
        nand_directory_button->setText(QCoreApplication::translate("ConfigureFilesystem", "...", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigureFilesystem", "SD Card", nullptr));
        sdmc_directory_button->setText(QCoreApplication::translate("ConfigureFilesystem", "...", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ConfigureFilesystem", "Gamecard", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigureFilesystem", "Path", nullptr));
        gamecard_inserted->setText(QCoreApplication::translate("ConfigureFilesystem", "Inserted", nullptr));
        gamecard_current_game->setText(QCoreApplication::translate("ConfigureFilesystem", "Current Game", nullptr));
        gamecard_path_button->setText(QCoreApplication::translate("ConfigureFilesystem", "...", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ConfigureFilesystem", "Patch Manager", nullptr));
        dump_path_button->setText(QCoreApplication::translate("ConfigureFilesystem", "...", nullptr));
        load_path_button->setText(QCoreApplication::translate("ConfigureFilesystem", "...", nullptr));
        dump_nso->setText(QCoreApplication::translate("ConfigureFilesystem", "Dump Decompressed NSOs", nullptr));
        dump_exefs->setText(QCoreApplication::translate("ConfigureFilesystem", "Dump ExeFS", nullptr));
        label_9->setText(QCoreApplication::translate("ConfigureFilesystem", "Mod Load Root", nullptr));
        label_8->setText(QCoreApplication::translate("ConfigureFilesystem", "Dump Root", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("ConfigureFilesystem", "Caching", nullptr));
        cache_game_list->setText(QCoreApplication::translate("ConfigureFilesystem", "Cache Game List Metadata", nullptr));
        reset_game_list_cache->setText(QCoreApplication::translate("ConfigureFilesystem", "Reset Metadata Cache", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureFilesystem: public Ui_ConfigureFilesystem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_FILESYSTEM_H
