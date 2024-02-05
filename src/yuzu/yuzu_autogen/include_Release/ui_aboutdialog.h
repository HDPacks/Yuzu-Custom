/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelLogo;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *labelYuzu;
    QLabel *labelBuildInfo;
    QLabel *labelAbout;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelLinks;
    QLabel *labelLiability;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(616, 294);
        verticalLayout_3 = new QVBoxLayout(AboutDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelLogo = new QLabel(AboutDialog);
        labelLogo->setObjectName(QString::fromUtf8("labelLogo"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelLogo->sizePolicy().hasHeightForWidth());
        labelLogo->setSizePolicy(sizePolicy);
        labelLogo->setMaximumSize(QSize(200, 200));
        labelLogo->setPixmap(QPixmap(QString::fromUtf8(":/icons/default/256x256/yuzu.png")));
        labelLogo->setScaledContents(true);

        verticalLayout_2->addWidget(labelLogo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelYuzu = new QLabel(AboutDialog);
        labelYuzu->setObjectName(QString::fromUtf8("labelYuzu"));
        sizePolicy.setHeightForWidth(labelYuzu->sizePolicy().hasHeightForWidth());
        labelYuzu->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(labelYuzu);

        labelBuildInfo = new QLabel(AboutDialog);
        labelBuildInfo->setObjectName(QString::fromUtf8("labelBuildInfo"));
        sizePolicy.setHeightForWidth(labelBuildInfo->sizePolicy().hasHeightForWidth());
        labelBuildInfo->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(labelBuildInfo);

        labelAbout = new QLabel(AboutDialog);
        labelAbout->setObjectName(QString::fromUtf8("labelAbout"));
        sizePolicy.setHeightForWidth(labelAbout->sizePolicy().hasHeightForWidth());
        labelAbout->setSizePolicy(sizePolicy);
        labelAbout->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelAbout->setWordWrap(true);

        verticalLayout->addWidget(labelAbout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        labelLinks = new QLabel(AboutDialog);
        labelLinks->setObjectName(QString::fromUtf8("labelLinks"));
        labelLinks->setOpenExternalLinks(true);

        verticalLayout->addWidget(labelLinks);

        labelLiability = new QLabel(AboutDialog);
        labelLiability->setObjectName(QString::fromUtf8("labelLiability"));
        sizePolicy.setHeightForWidth(labelLiability->sizePolicy().hasHeightForWidth());
        labelLiability->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(labelLiability);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_3->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About yuzu", nullptr));
        labelLogo->setText(QString());
        labelYuzu->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p><span style=\" font-size:28pt;\">yuzu</span></p></body></html>", nullptr));
        labelBuildInfo->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p>%1 (%2)</p></body></html>", nullptr));
        labelAbout->setText(QCoreApplication::translate("AboutDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">This is a custom build meant for texture packs.</span></p>\n"
"			  <p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8pt;\"><br /></p>\n"
"			  <p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">yuzu is an experimental open-source emulator"
                        " for the Nintendo Switch licensed under GPLv3.0+.</span></p></body></html>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt;\">This software should not be used to play games you have not legally obtained.</span></p></body></html>", nullptr));
        labelLinks->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p><a href=\"https://yuzu-emu.org/\"><span style=\" text-decoration: underline; color:#039be5;\">Website</span></a> | <a href=\"https://www.hdpacks.com/\"><span style=\" text-decoration: underline; color:#039be5;\">HDPacks.com</span></a> | <a href=\"https://github.com/yuzu-emu\"><span style=\" text-decoration: underline; color:#039be5;\">Source Code</span></a> | <a href=\"https://github.com/yuzu-emu/yuzu/graphs/contributors\"><span style=\" text-decoration: underline; color:#039be5;\">Contributors</span></a> | <a href=\"https://github.com/yuzu-emu/yuzu/blob/master/LICENSE.txt\"><span style=\" text-decoration: underline; color:#039be5;\">License</span></a></p></body></html>", nullptr));
        labelLiability->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p><span style=\" font-size:7pt;\">&quot;Nintendo Switch&quot; is a trademark of Nintendo. yuzu is not affiliated with Nintendo in any way.</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
