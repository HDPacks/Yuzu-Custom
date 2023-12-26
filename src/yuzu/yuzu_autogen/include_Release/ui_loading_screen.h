/********************************************************************************
** Form generated from reading UI file 'loading_screen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADING_SCREEN_H
#define UI_LOADING_SCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadingScreen
{
public:
    QVBoxLayout *vboxLayout;
    QWidget *fade_parent;
    QVBoxLayout *verticalLayout_2;
    QLabel *logo;
    QVBoxLayout *verticalLayout;
    QLabel *stage;
    QProgressBar *progress_bar;
    QLabel *value;
    QLabel *banner;

    void setupUi(QWidget *LoadingScreen)
    {
        if (LoadingScreen->objectName().isEmpty())
            LoadingScreen->setObjectName(QString::fromUtf8("LoadingScreen"));
        LoadingScreen->resize(746, 495);
        LoadingScreen->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        vboxLayout = new QVBoxLayout(LoadingScreen);
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        fade_parent = new QWidget(LoadingScreen);
        fade_parent->setObjectName(QString::fromUtf8("fade_parent"));
        verticalLayout_2 = new QVBoxLayout(fade_parent);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        logo = new QLabel(fade_parent);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        logo->setMargin(30);

        verticalLayout_2->addWidget(logo, 0, Qt::AlignLeft|Qt::AlignTop);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        stage = new QLabel(fade_parent);
        stage->setObjectName(QString::fromUtf8("stage"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stage->sizePolicy().hasHeightForWidth());
        stage->setSizePolicy(sizePolicy);
        stage->setStyleSheet(QString::fromUtf8("background-color: black; color: white;\n"
"font: 75 20pt \"Arial\";"));

        verticalLayout->addWidget(stage, 0, Qt::AlignHCenter|Qt::AlignBottom);

        progress_bar = new QProgressBar(fade_parent);
        progress_bar->setObjectName(QString::fromUtf8("progress_bar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progress_bar->sizePolicy().hasHeightForWidth());
        progress_bar->setSizePolicy(sizePolicy1);
        progress_bar->setMinimumSize(QSize(500, 40));
        progress_bar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"color: white;\n"
"border: 2px solid white;\n"
"outline-color: black;\n"
"border-radius: 20px;\n"
"}\n"
"QProgressBar::chunk {\n"
"background-color: white;\n"
"border-radius: 15px;\n"
"}"));
        progress_bar->setValue(50);
        progress_bar->setTextVisible(false);

        verticalLayout->addWidget(progress_bar, 0, Qt::AlignHCenter|Qt::AlignTop);

        value = new QLabel(fade_parent);
        value->setObjectName(QString::fromUtf8("value"));
#if QT_CONFIG(tooltip)
        value->setToolTip(QString::fromUtf8(""));
#endif // QT_CONFIG(tooltip)
        value->setStyleSheet(QString::fromUtf8("background-color: black; color: white;\n"
"font: 75 15pt \"Arial\";"));

        verticalLayout->addWidget(value, 0, Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(2, 1);

        verticalLayout_2->addLayout(verticalLayout);

        banner = new QLabel(fade_parent);
        banner->setObjectName(QString::fromUtf8("banner"));
        banner->setStyleSheet(QString::fromUtf8("background-color: black;"));
        banner->setAlignment(Qt::AlignCenter);
        banner->setMargin(30);

        verticalLayout_2->addWidget(banner, 0, Qt::AlignRight|Qt::AlignBottom);


        vboxLayout->addWidget(fade_parent);


        retranslateUi(LoadingScreen);

        QMetaObject::connectSlotsByName(LoadingScreen);
    } // setupUi

    void retranslateUi(QWidget *LoadingScreen)
    {
        logo->setText(QString());
        stage->setText(QCoreApplication::translate("LoadingScreen", "Loading Shaders 387 / 1628", nullptr));
        progress_bar->setFormat(QCoreApplication::translate("LoadingScreen", "Loading Shaders %v out of %m", nullptr));
        value->setText(QCoreApplication::translate("LoadingScreen", "Estimated Time 5m 4s", nullptr));
        banner->setText(QString());
        (void)LoadingScreen;
    } // retranslateUi

};

namespace Ui {
    class LoadingScreen: public Ui_LoadingScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADING_SCREEN_H
