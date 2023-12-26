/********************************************************************************
** Form generated from reading UI file 'configure_debug_tab.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_DEBUG_TAB_H
#define UI_CONFIGURE_DEBUG_TAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureDebugTab
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;

    void setupUi(QWidget *ConfigureDebugTab)
    {
        if (ConfigureDebugTab->objectName().isEmpty())
            ConfigureDebugTab->setObjectName(QString::fromUtf8("ConfigureDebugTab"));
        ConfigureDebugTab->resize(320, 240);
        verticalLayout = new QVBoxLayout(ConfigureDebugTab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(ConfigureDebugTab);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));

        verticalLayout->addWidget(tabWidget);


        retranslateUi(ConfigureDebugTab);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ConfigureDebugTab);
    } // setupUi

    void retranslateUi(QWidget *ConfigureDebugTab)
    {
        ConfigureDebugTab->setWindowTitle(QCoreApplication::translate("ConfigureDebugTab", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigureDebugTab->setAccessibleName(QCoreApplication::translate("ConfigureDebugTab", "Debug", nullptr));
#endif // QT_CONFIG(accessibility)
    } // retranslateUi

};

namespace Ui {
    class ConfigureDebugTab: public Ui_ConfigureDebugTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_DEBUG_TAB_H
