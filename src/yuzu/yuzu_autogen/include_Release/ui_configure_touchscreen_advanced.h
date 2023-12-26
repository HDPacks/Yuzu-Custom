/********************************************************************************
** Form generated from reading UI file 'configure_touchscreen_advanced.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_TOUCHSCREEN_ADVANCED_H
#define UI_CONFIGURE_TOUCHSCREEN_ADVANCED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigureTouchscreenAdvanced
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *gridGroupBox;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QLabel *label_5;
    QSpinBox *diameter_x_box;
    QSpinBox *diameter_y_box;
    QSpinBox *angle_box;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *restore_defaults_button;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigureTouchscreenAdvanced)
    {
        if (ConfigureTouchscreenAdvanced->objectName().isEmpty())
            ConfigureTouchscreenAdvanced->setObjectName(QString::fromUtf8("ConfigureTouchscreenAdvanced"));
        ConfigureTouchscreenAdvanced->resize(298, 339);
        verticalLayout = new QVBoxLayout(ConfigureTouchscreenAdvanced);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(ConfigureTouchscreenAdvanced);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(280, 0));
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        gridGroupBox = new QGroupBox(ConfigureTouchscreenAdvanced);
        gridGroupBox->setObjectName(QString::fromUtf8("gridGroupBox"));
        gridLayout = new QGridLayout(gridGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label_4 = new QLabel(gridGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        label_3 = new QLabel(gridGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_5 = new QLabel(gridGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 1, 1, 1);

        diameter_x_box = new QSpinBox(gridGroupBox);
        diameter_x_box->setObjectName(QString::fromUtf8("diameter_x_box"));

        gridLayout->addWidget(diameter_x_box, 0, 2, 1, 1);

        diameter_y_box = new QSpinBox(gridGroupBox);
        diameter_y_box->setObjectName(QString::fromUtf8("diameter_y_box"));

        gridLayout->addWidget(diameter_y_box, 1, 2, 1, 1);

        angle_box = new QSpinBox(gridGroupBox);
        angle_box->setObjectName(QString::fromUtf8("angle_box"));

        gridLayout->addWidget(angle_box, 2, 2, 1, 1);


        verticalLayout->addWidget(gridGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        restore_defaults_button = new QPushButton(ConfigureTouchscreenAdvanced);
        restore_defaults_button->setObjectName(QString::fromUtf8("restore_defaults_button"));

        horizontalLayout->addWidget(restore_defaults_button);

        buttonBox = new QDialogButtonBox(ConfigureTouchscreenAdvanced);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ConfigureTouchscreenAdvanced);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigureTouchscreenAdvanced, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfigureTouchscreenAdvanced, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConfigureTouchscreenAdvanced);
    } // setupUi

    void retranslateUi(QDialog *ConfigureTouchscreenAdvanced)
    {
        ConfigureTouchscreenAdvanced->setWindowTitle(QCoreApplication::translate("ConfigureTouchscreenAdvanced", "Configure Touchscreen", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigureTouchscreenAdvanced", "Warning: The settings in this page affect the inner workings of yuzu's emulated touchscreen. Changing them may result in undesirable behavior, such as the touchscreen partially or not working. You should only use this page if you know what you are doing.", nullptr));
        gridGroupBox->setTitle(QCoreApplication::translate("ConfigureTouchscreenAdvanced", "Touch Parameters", nullptr));
        label_4->setText(QCoreApplication::translate("ConfigureTouchscreenAdvanced", "Touch Diameter Y", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigureTouchscreenAdvanced", "Touch Diameter X", nullptr));
        label_5->setText(QCoreApplication::translate("ConfigureTouchscreenAdvanced", "Rotational Angle", nullptr));
        restore_defaults_button->setText(QCoreApplication::translate("ConfigureTouchscreenAdvanced", "Restore Defaults", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureTouchscreenAdvanced: public Ui_ConfigureTouchscreenAdvanced {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_TOUCHSCREEN_ADVANCED_H
