/********************************************************************************
** Form generated from reading UI file 'configure_audio.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_AUDIO_H
#define UI_CONFIGURE_AUDIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureAudio
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QVBoxLayout *vboxLayout1;
    QWidget *audio_widget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *ConfigureAudio)
    {
        if (ConfigureAudio->objectName().isEmpty())
            ConfigureAudio->setObjectName(QString::fromUtf8("ConfigureAudio"));
        ConfigureAudio->resize(367, 368);
        vboxLayout = new QVBoxLayout(ConfigureAudio);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        groupBox = new QGroupBox(ConfigureAudio);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        vboxLayout1 = new QVBoxLayout(groupBox);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        audio_widget = new QWidget(groupBox);
        audio_widget->setObjectName(QString::fromUtf8("audio_widget"));
        audio_widget->setMaximumSize(QSize(16777215, 16777213));
        verticalLayout = new QVBoxLayout(audio_widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        vboxLayout1->addWidget(audio_widget);


        vboxLayout->addWidget(groupBox);

        spacerItem = new QSpacerItem(167, 55, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);


        retranslateUi(ConfigureAudio);

        QMetaObject::connectSlotsByName(ConfigureAudio);
    } // setupUi

    void retranslateUi(QWidget *ConfigureAudio)
    {
#if QT_CONFIG(accessibility)
        ConfigureAudio->setAccessibleName(QCoreApplication::translate("ConfigureAudio", "Audio", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBox->setTitle(QCoreApplication::translate("ConfigureAudio", "Audio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureAudio: public Ui_ConfigureAudio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_AUDIO_H
