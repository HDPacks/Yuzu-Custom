/********************************************************************************
** Form generated from reading UI file 'configure_camera.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_CAMERA_H
#define UI_CONFIGURE_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigureCamera
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *gridGroupBox;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QComboBox *ir_sensor_combo_box;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *previewBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *preview_box;
    QPushButton *preview_button;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *restore_defaults_button;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigureCamera)
    {
        if (ConfigureCamera->objectName().isEmpty())
            ConfigureCamera->setObjectName(QString::fromUtf8("ConfigureCamera"));
        ConfigureCamera->resize(298, 339);
        verticalLayout = new QVBoxLayout(ConfigureCamera);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(ConfigureCamera);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(280, 0));
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        gridGroupBox = new QGroupBox(ConfigureCamera);
        gridGroupBox->setObjectName(QString::fromUtf8("gridGroupBox"));
        gridLayout = new QGridLayout(gridGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label_3 = new QLabel(gridGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        ir_sensor_combo_box = new QComboBox(gridGroupBox);
        ir_sensor_combo_box->setObjectName(QString::fromUtf8("ir_sensor_combo_box"));

        gridLayout->addWidget(ir_sensor_combo_box, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        verticalLayout->addWidget(gridGroupBox);

        previewBox = new QGroupBox(ConfigureCamera);
        previewBox->setObjectName(QString::fromUtf8("previewBox"));
        verticalLayout_3 = new QVBoxLayout(previewBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        preview_box = new QLabel(previewBox);
        preview_box->setObjectName(QString::fromUtf8("preview_box"));
        preview_box->setMinimumSize(QSize(320, 240));

        verticalLayout_3->addWidget(preview_box);

        preview_button = new QPushButton(previewBox);
        preview_button->setObjectName(QString::fromUtf8("preview_button"));

        verticalLayout_3->addWidget(preview_button);


        verticalLayout->addWidget(previewBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        restore_defaults_button = new QPushButton(ConfigureCamera);
        restore_defaults_button->setObjectName(QString::fromUtf8("restore_defaults_button"));

        horizontalLayout->addWidget(restore_defaults_button);

        buttonBox = new QDialogButtonBox(ConfigureCamera);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ConfigureCamera);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigureCamera, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfigureCamera, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConfigureCamera);
    } // setupUi

    void retranslateUi(QDialog *ConfigureCamera)
    {
        ConfigureCamera->setWindowTitle(QCoreApplication::translate("ConfigureCamera", "Configure Infrared Camera", nullptr));
        label_2->setText(QCoreApplication::translate("ConfigureCamera", "Select where the image of the emulated camera comes from. It may be a virtual camera or a real camera.", nullptr));
        gridGroupBox->setTitle(QCoreApplication::translate("ConfigureCamera", "Camera Image Source:", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigureCamera", "Input device:", nullptr));
        previewBox->setTitle(QCoreApplication::translate("ConfigureCamera", "Preview", nullptr));
#if QT_CONFIG(tooltip)
        preview_box->setToolTip(QCoreApplication::translate("ConfigureCamera", "Resolution: 320*240", nullptr));
#endif // QT_CONFIG(tooltip)
        preview_button->setText(QCoreApplication::translate("ConfigureCamera", "Click to preview", nullptr));
        restore_defaults_button->setText(QCoreApplication::translate("ConfigureCamera", "Restore Defaults", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureCamera: public Ui_ConfigureCamera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_CAMERA_H
