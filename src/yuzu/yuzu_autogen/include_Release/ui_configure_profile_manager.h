/********************************************************************************
** Form generated from reading UI file 'configure_profile_manager.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_PROFILE_MANAGER_H
#define UI_CONFIGURE_PROFILE_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureProfileManager
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *gridGroupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QGraphicsView *current_user_icon;
    QLabel *current_user_username;
    QScrollArea *scrollArea;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pm_set_image;
    QSpacerItem *horizontalSpacer;
    QPushButton *pm_add;
    QPushButton *pm_rename;
    QPushButton *pm_remove;
    QLabel *label_disable_info;

    void setupUi(QWidget *ConfigureProfileManager)
    {
        if (ConfigureProfileManager->objectName().isEmpty())
            ConfigureProfileManager->setObjectName(QString::fromUtf8("ConfigureProfileManager"));
        ConfigureProfileManager->resize(390, 483);
        horizontalLayout = new QHBoxLayout(ConfigureProfileManager);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridGroupBox = new QGroupBox(ConfigureProfileManager);
        gridGroupBox->setObjectName(QString::fromUtf8("gridGroupBox"));
        gridLayout_2 = new QGridLayout(gridGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(gridGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label);

        current_user_icon = new QGraphicsView(gridGroupBox);
        current_user_icon->setObjectName(QString::fromUtf8("current_user_icon"));
        current_user_icon->setMinimumSize(QSize(48, 48));
        current_user_icon->setMaximumSize(QSize(48, 48));
        current_user_icon->setFrameShape(QFrame::NoFrame);
        current_user_icon->setFrameShadow(QFrame::Plain);
        current_user_icon->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        current_user_icon->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        current_user_icon->setInteractive(false);

        horizontalLayout_2->addWidget(current_user_icon);

        current_user_username = new QLabel(gridGroupBox);
        current_user_username->setObjectName(QString::fromUtf8("current_user_username"));
        sizePolicy.setHeightForWidth(current_user_username->sizePolicy().hasHeightForWidth());
        current_user_username->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(current_user_username);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        scrollArea = new QScrollArea(gridGroupBox);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setWidgetResizable(false);

        gridLayout_2->addWidget(scrollArea, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pm_set_image = new QPushButton(gridGroupBox);
        pm_set_image->setObjectName(QString::fromUtf8("pm_set_image"));
        pm_set_image->setEnabled(false);

        horizontalLayout_3->addWidget(pm_set_image);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pm_add = new QPushButton(gridGroupBox);
        pm_add->setObjectName(QString::fromUtf8("pm_add"));

        horizontalLayout_3->addWidget(pm_add);

        pm_rename = new QPushButton(gridGroupBox);
        pm_rename->setObjectName(QString::fromUtf8("pm_rename"));
        pm_rename->setEnabled(false);

        horizontalLayout_3->addWidget(pm_rename);

        pm_remove = new QPushButton(gridGroupBox);
        pm_remove->setObjectName(QString::fromUtf8("pm_remove"));
        pm_remove->setEnabled(false);

        horizontalLayout_3->addWidget(pm_remove);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        verticalLayout->addWidget(gridGroupBox);

        label_disable_info = new QLabel(ConfigureProfileManager);
        label_disable_info->setObjectName(QString::fromUtf8("label_disable_info"));
        label_disable_info->setWordWrap(true);

        verticalLayout->addWidget(label_disable_info);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(ConfigureProfileManager);

        QMetaObject::connectSlotsByName(ConfigureProfileManager);
    } // setupUi

    void retranslateUi(QWidget *ConfigureProfileManager)
    {
        ConfigureProfileManager->setWindowTitle(QCoreApplication::translate("ConfigureProfileManager", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigureProfileManager->setAccessibleName(QCoreApplication::translate("ConfigureProfileManager", "Profiles", nullptr));
#endif // QT_CONFIG(accessibility)
        gridGroupBox->setTitle(QCoreApplication::translate("ConfigureProfileManager", "Profile Manager", nullptr));
        label->setText(QCoreApplication::translate("ConfigureProfileManager", "Current User", nullptr));
        current_user_username->setText(QCoreApplication::translate("ConfigureProfileManager", "Username", nullptr));
        pm_set_image->setText(QCoreApplication::translate("ConfigureProfileManager", "Set Image", nullptr));
        pm_add->setText(QCoreApplication::translate("ConfigureProfileManager", "Add", nullptr));
        pm_rename->setText(QCoreApplication::translate("ConfigureProfileManager", "Rename", nullptr));
        pm_remove->setText(QCoreApplication::translate("ConfigureProfileManager", "Remove", nullptr));
        label_disable_info->setText(QCoreApplication::translate("ConfigureProfileManager", "Profile management is available only when game is not running.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureProfileManager: public Ui_ConfigureProfileManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_PROFILE_MANAGER_H
