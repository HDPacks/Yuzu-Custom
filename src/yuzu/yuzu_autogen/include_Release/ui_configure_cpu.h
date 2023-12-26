/********************************************************************************
** Form generated from reading UI file 'configure_cpu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_CPU_H
#define UI_CONFIGURE_CPU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureCpu
{
public:
    QVBoxLayout *vboxlayout_2;
    QVBoxLayout *vboxlayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout;
    QWidget *widget_accuracy;
    QVBoxLayout *verticalLayout;
    QLabel *label_recommended_accuracy;
    QGroupBox *backend_group;
    QVBoxLayout *vboxLayout1;
    QWidget *widget_backend;
    QVBoxLayout *verticalLayout1;
    QGroupBox *unsafe_group;
    QVBoxLayout *vboxLayout2;
    QLabel *label_accuracy_description;
    QWidget *unsafe_widget;
    QVBoxLayout *unsafe_layout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ConfigureCpu)
    {
        if (ConfigureCpu->objectName().isEmpty())
            ConfigureCpu->setObjectName(QString::fromUtf8("ConfigureCpu"));
        ConfigureCpu->resize(448, 439);
        vboxlayout_2 = new QVBoxLayout(ConfigureCpu);
        vboxlayout_2->setObjectName(QString::fromUtf8("vboxlayout_2"));
        vboxlayout = new QVBoxLayout();
        vboxlayout->setObjectName(QString::fromUtf8("vboxlayout"));
        vboxlayout->setContentsMargins(-1, -1, -1, 0);
        groupBox = new QGroupBox(ConfigureCpu);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout = new QVBoxLayout(groupBox);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        widget_accuracy = new QWidget(groupBox);
        widget_accuracy->setObjectName(QString::fromUtf8("widget_accuracy"));
        verticalLayout = new QVBoxLayout(widget_accuracy);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        vboxLayout->addWidget(widget_accuracy);

        label_recommended_accuracy = new QLabel(groupBox);
        label_recommended_accuracy->setObjectName(QString::fromUtf8("label_recommended_accuracy"));
        label_recommended_accuracy->setWordWrap(false);

        vboxLayout->addWidget(label_recommended_accuracy);


        vboxlayout->addWidget(groupBox);

        backend_group = new QGroupBox(ConfigureCpu);
        backend_group->setObjectName(QString::fromUtf8("backend_group"));
        backend_group->setVisible(false);
        vboxLayout1 = new QVBoxLayout(backend_group);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        widget_backend = new QWidget(backend_group);
        widget_backend->setObjectName(QString::fromUtf8("widget_backend"));
        verticalLayout1 = new QVBoxLayout(widget_backend);
        verticalLayout1->setObjectName(QString::fromUtf8("verticalLayout1"));
        verticalLayout1->setContentsMargins(0, 0, 0, 0);

        vboxLayout1->addWidget(widget_backend);


        vboxlayout->addWidget(backend_group);

        unsafe_group = new QGroupBox(ConfigureCpu);
        unsafe_group->setObjectName(QString::fromUtf8("unsafe_group"));
        vboxLayout2 = new QVBoxLayout(unsafe_group);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        label_accuracy_description = new QLabel(unsafe_group);
        label_accuracy_description->setObjectName(QString::fromUtf8("label_accuracy_description"));
        label_accuracy_description->setWordWrap(false);

        vboxLayout2->addWidget(label_accuracy_description);

        unsafe_widget = new QWidget(unsafe_group);
        unsafe_widget->setObjectName(QString::fromUtf8("unsafe_widget"));
        unsafe_layout = new QVBoxLayout(unsafe_widget);
        unsafe_layout->setObjectName(QString::fromUtf8("unsafe_layout"));
        unsafe_layout->setContentsMargins(0, 0, 0, 0);

        vboxLayout2->addWidget(unsafe_widget);


        vboxlayout->addWidget(unsafe_group);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxlayout->addItem(verticalSpacer);


        vboxlayout_2->addLayout(vboxlayout);


        retranslateUi(ConfigureCpu);

        QMetaObject::connectSlotsByName(ConfigureCpu);
    } // setupUi

    void retranslateUi(QWidget *ConfigureCpu)
    {
        ConfigureCpu->setWindowTitle(QCoreApplication::translate("ConfigureCpu", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigureCpu->setAccessibleName(QCoreApplication::translate("ConfigureCpu", "CPU", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox->setTitle(QCoreApplication::translate("ConfigureCpu", "General", nullptr));
        label_recommended_accuracy->setText(QCoreApplication::translate("ConfigureCpu", "We recommend setting accuracy to \"Auto\".", nullptr));
        backend_group->setTitle(QCoreApplication::translate("ConfigureCpu", "CPU Backend", nullptr));
        unsafe_group->setTitle(QCoreApplication::translate("ConfigureCpu", "Unsafe CPU Optimization Settings", nullptr));
        label_accuracy_description->setText(QCoreApplication::translate("ConfigureCpu", "These settings reduce accuracy for speed.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureCpu: public Ui_ConfigureCpu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_CPU_H
