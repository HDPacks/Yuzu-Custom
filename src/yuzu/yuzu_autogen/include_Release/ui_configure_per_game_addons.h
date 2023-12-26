/********************************************************************************
** Form generated from reading UI file 'configure_per_game_addons.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_PER_GAME_ADDONS_H
#define UI_CONFIGURE_PER_GAME_ADDONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigurePerGameAddons
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *ConfigurePerGameAddons)
    {
        if (ConfigurePerGameAddons->objectName().isEmpty())
            ConfigurePerGameAddons->setObjectName(QString::fromUtf8("ConfigurePerGameAddons"));
        ConfigurePerGameAddons->resize(400, 300);
        gridLayout = new QGridLayout(ConfigurePerGameAddons);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(ConfigurePerGameAddons);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 380, 280));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        retranslateUi(ConfigurePerGameAddons);

        QMetaObject::connectSlotsByName(ConfigurePerGameAddons);
    } // setupUi

    void retranslateUi(QWidget *ConfigurePerGameAddons)
    {
        ConfigurePerGameAddons->setWindowTitle(QCoreApplication::translate("ConfigurePerGameAddons", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigurePerGameAddons->setAccessibleDescription(QCoreApplication::translate("ConfigurePerGameAddons", "Add-Ons", nullptr));
#endif // QT_CONFIG(accessibility)
    } // retranslateUi

};

namespace Ui {
    class ConfigurePerGameAddons: public Ui_ConfigurePerGameAddons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_PER_GAME_ADDONS_H
