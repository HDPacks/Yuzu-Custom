/********************************************************************************
** Form generated from reading UI file 'configure_mouse_panning.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_MOUSE_PANNING_H
#define UI_CONFIGURE_MOUSE_PANNING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigureMousePanning
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *enable;
    QHBoxLayout *hboxLayout;
    QGroupBox *sensitivity_box;
    QGridLayout *gridLayout;
    QLabel *x_sensitivity_label;
    QSpinBox *x_sensitivity;
    QLabel *y_sensitivity_label;
    QSpinBox *y_sensitivity;
    QGroupBox *deadzone_counterweight_box;
    QGridLayout *gridLayout1;
    QLabel *deadzone_counterweight_label;
    QSpinBox *deadzone_counterweight;
    QGroupBox *decay_box;
    QGridLayout *gridLayout2;
    QLabel *decay_strength_label;
    QSpinBox *decay_strength;
    QLabel *min_decay_label;
    QSpinBox *min_decay;
    QLabel *warning_label;
    QHBoxLayout *hboxLayout1;
    QPushButton *default_button;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *configure_mouse_panning)
    {
        if (configure_mouse_panning->objectName().isEmpty())
            configure_mouse_panning->setObjectName(QString::fromUtf8("configure_mouse_panning"));
        vboxLayout = new QVBoxLayout(configure_mouse_panning);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        enable = new QCheckBox(configure_mouse_panning);
        enable->setObjectName(QString::fromUtf8("enable"));

        vboxLayout->addWidget(enable);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        sensitivity_box = new QGroupBox(configure_mouse_panning);
        sensitivity_box->setObjectName(QString::fromUtf8("sensitivity_box"));
        gridLayout = new QGridLayout(sensitivity_box);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        x_sensitivity_label = new QLabel(sensitivity_box);
        x_sensitivity_label->setObjectName(QString::fromUtf8("x_sensitivity_label"));

        gridLayout->addWidget(x_sensitivity_label, 0, 0, 1, 1);

        x_sensitivity = new QSpinBox(sensitivity_box);
        x_sensitivity->setObjectName(QString::fromUtf8("x_sensitivity"));
        x_sensitivity->setAlignment(Qt::AlignCenter);
        x_sensitivity->setMinimum(1);
        x_sensitivity->setMaximum(100);
        x_sensitivity->setValue(50);

        gridLayout->addWidget(x_sensitivity, 0, 1, 1, 1);

        y_sensitivity_label = new QLabel(sensitivity_box);
        y_sensitivity_label->setObjectName(QString::fromUtf8("y_sensitivity_label"));

        gridLayout->addWidget(y_sensitivity_label, 1, 0, 1, 1);

        y_sensitivity = new QSpinBox(sensitivity_box);
        y_sensitivity->setObjectName(QString::fromUtf8("y_sensitivity"));
        y_sensitivity->setAlignment(Qt::AlignCenter);
        y_sensitivity->setMinimum(1);
        y_sensitivity->setMaximum(100);
        y_sensitivity->setValue(50);

        gridLayout->addWidget(y_sensitivity, 1, 1, 1, 1);


        hboxLayout->addWidget(sensitivity_box);

        deadzone_counterweight_box = new QGroupBox(configure_mouse_panning);
        deadzone_counterweight_box->setObjectName(QString::fromUtf8("deadzone_counterweight_box"));
        gridLayout1 = new QGridLayout(deadzone_counterweight_box);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        deadzone_counterweight_label = new QLabel(deadzone_counterweight_box);
        deadzone_counterweight_label->setObjectName(QString::fromUtf8("deadzone_counterweight_label"));

        gridLayout1->addWidget(deadzone_counterweight_label, 0, 0, 1, 1);

        deadzone_counterweight = new QSpinBox(deadzone_counterweight_box);
        deadzone_counterweight->setObjectName(QString::fromUtf8("deadzone_counterweight"));
        deadzone_counterweight->setAlignment(Qt::AlignCenter);
        deadzone_counterweight->setMinimum(0);
        deadzone_counterweight->setMaximum(100);
        deadzone_counterweight->setValue(0);

        gridLayout1->addWidget(deadzone_counterweight, 0, 1, 1, 1);


        hboxLayout->addWidget(deadzone_counterweight_box);

        decay_box = new QGroupBox(configure_mouse_panning);
        decay_box->setObjectName(QString::fromUtf8("decay_box"));
        gridLayout2 = new QGridLayout(decay_box);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        decay_strength_label = new QLabel(decay_box);
        decay_strength_label->setObjectName(QString::fromUtf8("decay_strength_label"));

        gridLayout2->addWidget(decay_strength_label, 0, 0, 1, 1);

        decay_strength = new QSpinBox(decay_box);
        decay_strength->setObjectName(QString::fromUtf8("decay_strength"));
        decay_strength->setAlignment(Qt::AlignCenter);
        decay_strength->setMinimum(0);
        decay_strength->setMaximum(100);
        decay_strength->setValue(22);

        gridLayout2->addWidget(decay_strength, 0, 1, 1, 1);

        min_decay_label = new QLabel(decay_box);
        min_decay_label->setObjectName(QString::fromUtf8("min_decay_label"));

        gridLayout2->addWidget(min_decay_label, 1, 0, 1, 1);

        min_decay = new QSpinBox(decay_box);
        min_decay->setObjectName(QString::fromUtf8("min_decay"));
        min_decay->setAlignment(Qt::AlignCenter);
        min_decay->setMinimum(0);
        min_decay->setMaximum(100);
        min_decay->setValue(5);

        gridLayout2->addWidget(min_decay, 1, 1, 1, 1);


        hboxLayout->addWidget(decay_box);


        vboxLayout->addLayout(hboxLayout);

        warning_label = new QLabel(configure_mouse_panning);
        warning_label->setObjectName(QString::fromUtf8("warning_label"));

        vboxLayout->addWidget(warning_label);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        default_button = new QPushButton(configure_mouse_panning);
        default_button->setObjectName(QString::fromUtf8("default_button"));

        hboxLayout1->addWidget(default_button);

        button_box = new QDialogButtonBox(configure_mouse_panning);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout1->addWidget(button_box);


        vboxLayout->addLayout(hboxLayout1);


        retranslateUi(configure_mouse_panning);

        QMetaObject::connectSlotsByName(configure_mouse_panning);
    } // setupUi

    void retranslateUi(QDialog *configure_mouse_panning)
    {
        configure_mouse_panning->setWindowTitle(QCoreApplication::translate("ConfigureMousePanning", "Configure mouse panning", nullptr));
        enable->setText(QCoreApplication::translate("ConfigureMousePanning", "Enable mouse panning", nullptr));
#if QT_CONFIG(tooltip)
        enable->setToolTip(QCoreApplication::translate("ConfigureMousePanning", "Can be toggled via a hotkey. Default hotkey is Ctrl + F9", nullptr));
#endif // QT_CONFIG(tooltip)
        sensitivity_box->setTitle(QCoreApplication::translate("ConfigureMousePanning", "Sensitivity", nullptr));
        x_sensitivity_label->setText(QCoreApplication::translate("ConfigureMousePanning", "Horizontal", nullptr));
        x_sensitivity->setSuffix(QCoreApplication::translate("ConfigureMousePanning", "%", nullptr));
        y_sensitivity_label->setText(QCoreApplication::translate("ConfigureMousePanning", "Vertical", nullptr));
        y_sensitivity->setSuffix(QCoreApplication::translate("ConfigureMousePanning", "%", nullptr));
        deadzone_counterweight_box->setTitle(QCoreApplication::translate("ConfigureMousePanning", "Deadzone counterweight", nullptr));
#if QT_CONFIG(tooltip)
        deadzone_counterweight_box->setToolTip(QCoreApplication::translate("ConfigureMousePanning", "Counteracts a game's built-in deadzone", nullptr));
#endif // QT_CONFIG(tooltip)
        deadzone_counterweight_label->setText(QCoreApplication::translate("ConfigureMousePanning", "Deadzone", nullptr));
        deadzone_counterweight->setSuffix(QCoreApplication::translate("ConfigureMousePanning", "%", nullptr));
        decay_box->setTitle(QCoreApplication::translate("ConfigureMousePanning", "Stick decay", nullptr));
        decay_strength_label->setText(QCoreApplication::translate("ConfigureMousePanning", "Strength", nullptr));
        decay_strength->setSuffix(QCoreApplication::translate("ConfigureMousePanning", "%", nullptr));
        min_decay_label->setText(QCoreApplication::translate("ConfigureMousePanning", "Minimum", nullptr));
        min_decay->setSuffix(QCoreApplication::translate("ConfigureMousePanning", "%", nullptr));
        warning_label->setText(QString());
        default_button->setText(QCoreApplication::translate("ConfigureMousePanning", "Default", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureMousePanning: public Ui_ConfigureMousePanning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_MOUSE_PANNING_H
