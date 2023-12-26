/********************************************************************************
** Form generated from reading UI file 'configure_per_game.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_PER_GAME_H
#define UI_CONFIGURE_PER_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigurePerGame
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGraphicsView *icon_view;
    QGridLayout *gridLayout_2;
    QLineEdit *display_size;
    QLineEdit *display_version;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *display_title_id;
    QLineEdit *display_filename;
    QLineEdit *display_format;
    QLabel *label_7;
    QLineEdit *display_name;
    QLineEdit *display_developer;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *VerticalLayout;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigurePerGame)
    {
        if (ConfigurePerGame->objectName().isEmpty())
            ConfigurePerGame->setObjectName(QString::fromUtf8("ConfigurePerGame"));
        ConfigurePerGame->resize(900, 607);
        ConfigurePerGame->setMinimumSize(QSize(900, 0));
        verticalLayout_3 = new QVBoxLayout(ConfigurePerGame);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(ConfigurePerGame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        icon_view = new QGraphicsView(groupBox);
        icon_view->setObjectName(QString::fromUtf8("icon_view"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(icon_view->sizePolicy().hasHeightForWidth());
        icon_view->setSizePolicy(sizePolicy1);
        icon_view->setMinimumSize(QSize(256, 256));
        icon_view->setMaximumSize(QSize(256, 256));
        icon_view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        icon_view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        icon_view->setInteractive(false);

        verticalLayout->addWidget(icon_view, 0, Qt::AlignHCenter);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        display_size = new QLineEdit(groupBox);
        display_size->setObjectName(QString::fromUtf8("display_size"));
        display_size->setEnabled(true);
        display_size->setReadOnly(true);

        gridLayout_2->addWidget(display_size, 6, 1, 1, 1);

        display_version = new QLineEdit(groupBox);
        display_version->setObjectName(QString::fromUtf8("display_version"));
        display_version->setEnabled(true);
        display_version->setReadOnly(true);

        gridLayout_2->addWidget(display_version, 3, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        display_title_id = new QLineEdit(groupBox);
        display_title_id->setObjectName(QString::fromUtf8("display_title_id"));
        display_title_id->setEnabled(true);
        display_title_id->setReadOnly(true);

        gridLayout_2->addWidget(display_title_id, 4, 1, 1, 1);

        display_filename = new QLineEdit(groupBox);
        display_filename->setObjectName(QString::fromUtf8("display_filename"));
        display_filename->setEnabled(true);
        display_filename->setReadOnly(true);

        gridLayout_2->addWidget(display_filename, 7, 1, 1, 1);

        display_format = new QLineEdit(groupBox);
        display_format->setObjectName(QString::fromUtf8("display_format"));
        display_format->setEnabled(true);
        display_format->setReadOnly(true);

        gridLayout_2->addWidget(display_format, 5, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 7, 0, 1, 1);

        display_name = new QLineEdit(groupBox);
        display_name->setObjectName(QString::fromUtf8("display_name"));
        display_name->setEnabled(true);
        display_name->setReadOnly(true);

        gridLayout_2->addWidget(display_name, 1, 1, 1, 1);

        display_developer = new QLineEdit(groupBox);
        display_developer->setObjectName(QString::fromUtf8("display_developer"));
        display_developer->setEnabled(true);
        display_developer->setReadOnly(true);

        gridLayout_2->addWidget(display_developer, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 5, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 6, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(groupBox);

        VerticalLayout = new QVBoxLayout();
        VerticalLayout->setObjectName(QString::fromUtf8("VerticalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        VerticalLayout->addLayout(verticalLayout_2);

        tabWidget = new QTabWidget(ConfigurePerGame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);

        VerticalLayout->addWidget(tabWidget);


        horizontalLayout->addLayout(VerticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_8 = new QLabel(ConfigurePerGame);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_2->addWidget(label_8);

        buttonBox = new QDialogButtonBox(ConfigurePerGame);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy2);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(ConfigurePerGame);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigurePerGame, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfigurePerGame, SLOT(reject()));

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ConfigurePerGame);
    } // setupUi

    void retranslateUi(QDialog *ConfigurePerGame)
    {
        ConfigurePerGame->setWindowTitle(QCoreApplication::translate("ConfigurePerGame", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ConfigurePerGame", "Info", nullptr));
        label->setText(QCoreApplication::translate("ConfigurePerGame", "Name", nullptr));
        label_4->setText(QCoreApplication::translate("ConfigurePerGame", "Title ID", nullptr));
        label_7->setText(QCoreApplication::translate("ConfigurePerGame", "Filename", nullptr));
        label_5->setText(QCoreApplication::translate("ConfigurePerGame", "Format", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigurePerGame", "Version", nullptr));
        label_6->setText(QCoreApplication::translate("ConfigurePerGame", "Size", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigurePerGame", "Developer", nullptr));
        label_8->setText(QCoreApplication::translate("ConfigurePerGame", "Some settings are only available when a game is not running.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigurePerGame: public Ui_ConfigurePerGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_PER_GAME_H
