/********************************************************************************
** Form generated from reading UI file 'compatdb.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPATDB_H
#define UI_COMPATDB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_CompatDB
{
public:
    QWizardPage *wizard_Info;
    QVBoxLayout *verticalLayout;
    QLabel *lbl_Spiel;
    QSpacerItem *verticalSpacer_2;
    QWizardPage *wizard_GameBoot;
    QFormLayout *formLayout1;
    QLabel *lbl_Independent1;
    QSpacerItem *verticalSpacer1;
    QRadioButton *radioButton_GameBoot_Yes;
    QRadioButton *radioButton_GameBoot_No;
    QWizardPage *wizard_GamePlay;
    QFormLayout *formLayout2;
    QRadioButton *radioButton_Gameplay_Yes;
    QRadioButton *radioButton_Gameplay_No;
    QLabel *lbl_Independent2;
    QSpacerItem *verticalSpacer2;
    QWizardPage *wizard_NoFreeze;
    QFormLayout *formLayout3;
    QRadioButton *radioButton_NoFreeze_Yes;
    QRadioButton *radioButton_NoFreeze_No;
    QLabel *lbl_Independent3;
    QSpacerItem *verticalSpacer3;
    QWizardPage *wizard_Complete;
    QFormLayout *formLayout4;
    QRadioButton *radioButton_Complete_Yes;
    QRadioButton *radioButton_Complete_No;
    QLabel *lbl_Independent4;
    QSpacerItem *verticalSpacer4;
    QWizardPage *wizard_Graphical;
    QFormLayout *formLayout5;
    QRadioButton *radioButton_Graphical_Major;
    QRadioButton *radioButton_Graphical_Minor;
    QRadioButton *radioButton_Graphical_No;
    QLabel *lbl_Independent5;
    QSpacerItem *verticalSpacer5;
    QWizardPage *wizard_Audio;
    QFormLayout *formLayout6;
    QRadioButton *radioButton_Audio_Major;
    QRadioButton *radioButton_Audio_Minor;
    QRadioButton *radioButton_Audio_No;
    QLabel *lbl_Independent6;
    QSpacerItem *verticalSpacer6;
    QWizardPage *wizard_ThankYou;

    void setupUi(QWizard *CompatDB)
    {
        if (CompatDB->objectName().isEmpty())
            CompatDB->setObjectName(QString::fromUtf8("CompatDB"));
        CompatDB->resize(600, 482);
        CompatDB->setMinimumSize(QSize(500, 410));
        CompatDB->setOptions(QWizard::DisabledBackButtonOnLastPage|QWizard::HelpButtonOnRight|QWizard::NoBackButtonOnStartPage);
        wizard_Info = new QWizardPage();
        wizard_Info->setObjectName(QString::fromUtf8("wizard_Info"));
        verticalLayout = new QVBoxLayout(wizard_Info);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbl_Spiel = new QLabel(wizard_Info);
        lbl_Spiel->setObjectName(QString::fromUtf8("lbl_Spiel"));
        lbl_Spiel->setWordWrap(true);
        lbl_Spiel->setOpenExternalLinks(true);

        verticalLayout->addWidget(lbl_Spiel);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        CompatDB->setPage(0, wizard_Info);
        wizard_GameBoot = new QWizardPage();
        wizard_GameBoot->setObjectName(QString::fromUtf8("wizard_GameBoot"));
        formLayout1 = new QFormLayout(wizard_GameBoot);
        formLayout1->setObjectName(QString::fromUtf8("formLayout1"));
        lbl_Independent1 = new QLabel(wizard_GameBoot);
        lbl_Independent1->setObjectName(QString::fromUtf8("lbl_Independent1"));
        QFont font;
        font.setPointSize(10);
        lbl_Independent1->setFont(font);
        lbl_Independent1->setWordWrap(true);

        formLayout1->setWidget(0, QFormLayout::SpanningRole, lbl_Independent1);

        verticalSpacer1 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout1->setItem(1, QFormLayout::SpanningRole, verticalSpacer1);

        radioButton_GameBoot_Yes = new QRadioButton(wizard_GameBoot);
        radioButton_GameBoot_Yes->setObjectName(QString::fromUtf8("radioButton_GameBoot_Yes"));

        formLayout1->setWidget(2, QFormLayout::LabelRole, radioButton_GameBoot_Yes);

        radioButton_GameBoot_No = new QRadioButton(wizard_GameBoot);
        radioButton_GameBoot_No->setObjectName(QString::fromUtf8("radioButton_GameBoot_No"));

        formLayout1->setWidget(4, QFormLayout::LabelRole, radioButton_GameBoot_No);

        CompatDB->setPage(1, wizard_GameBoot);
        wizard_GamePlay = new QWizardPage();
        wizard_GamePlay->setObjectName(QString::fromUtf8("wizard_GamePlay"));
        formLayout2 = new QFormLayout(wizard_GamePlay);
        formLayout2->setObjectName(QString::fromUtf8("formLayout2"));
        radioButton_Gameplay_Yes = new QRadioButton(wizard_GamePlay);
        radioButton_Gameplay_Yes->setObjectName(QString::fromUtf8("radioButton_Gameplay_Yes"));

        formLayout2->setWidget(2, QFormLayout::LabelRole, radioButton_Gameplay_Yes);

        radioButton_Gameplay_No = new QRadioButton(wizard_GamePlay);
        radioButton_Gameplay_No->setObjectName(QString::fromUtf8("radioButton_Gameplay_No"));

        formLayout2->setWidget(4, QFormLayout::LabelRole, radioButton_Gameplay_No);

        lbl_Independent2 = new QLabel(wizard_GamePlay);
        lbl_Independent2->setObjectName(QString::fromUtf8("lbl_Independent2"));
        lbl_Independent2->setFont(font);
        lbl_Independent2->setWordWrap(true);

        formLayout2->setWidget(0, QFormLayout::SpanningRole, lbl_Independent2);

        verticalSpacer2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout2->setItem(1, QFormLayout::SpanningRole, verticalSpacer2);

        CompatDB->setPage(2, wizard_GamePlay);
        wizard_NoFreeze = new QWizardPage();
        wizard_NoFreeze->setObjectName(QString::fromUtf8("wizard_NoFreeze"));
        formLayout3 = new QFormLayout(wizard_NoFreeze);
        formLayout3->setObjectName(QString::fromUtf8("formLayout3"));
        radioButton_NoFreeze_Yes = new QRadioButton(wizard_NoFreeze);
        radioButton_NoFreeze_Yes->setObjectName(QString::fromUtf8("radioButton_NoFreeze_Yes"));

        formLayout3->setWidget(2, QFormLayout::LabelRole, radioButton_NoFreeze_Yes);

        radioButton_NoFreeze_No = new QRadioButton(wizard_NoFreeze);
        radioButton_NoFreeze_No->setObjectName(QString::fromUtf8("radioButton_NoFreeze_No"));

        formLayout3->setWidget(4, QFormLayout::LabelRole, radioButton_NoFreeze_No);

        lbl_Independent3 = new QLabel(wizard_NoFreeze);
        lbl_Independent3->setObjectName(QString::fromUtf8("lbl_Independent3"));
        lbl_Independent3->setFont(font);
        lbl_Independent3->setWordWrap(true);

        formLayout3->setWidget(0, QFormLayout::SpanningRole, lbl_Independent3);

        verticalSpacer3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout3->setItem(1, QFormLayout::SpanningRole, verticalSpacer3);

        CompatDB->setPage(3, wizard_NoFreeze);
        wizard_Complete = new QWizardPage();
        wizard_Complete->setObjectName(QString::fromUtf8("wizard_Complete"));
        formLayout4 = new QFormLayout(wizard_Complete);
        formLayout4->setObjectName(QString::fromUtf8("formLayout4"));
        radioButton_Complete_Yes = new QRadioButton(wizard_Complete);
        radioButton_Complete_Yes->setObjectName(QString::fromUtf8("radioButton_Complete_Yes"));

        formLayout4->setWidget(2, QFormLayout::LabelRole, radioButton_Complete_Yes);

        radioButton_Complete_No = new QRadioButton(wizard_Complete);
        radioButton_Complete_No->setObjectName(QString::fromUtf8("radioButton_Complete_No"));

        formLayout4->setWidget(4, QFormLayout::LabelRole, radioButton_Complete_No);

        lbl_Independent4 = new QLabel(wizard_Complete);
        lbl_Independent4->setObjectName(QString::fromUtf8("lbl_Independent4"));
        lbl_Independent4->setFont(font);
        lbl_Independent4->setWordWrap(true);

        formLayout4->setWidget(0, QFormLayout::SpanningRole, lbl_Independent4);

        verticalSpacer4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout4->setItem(1, QFormLayout::SpanningRole, verticalSpacer4);

        CompatDB->setPage(4, wizard_Complete);
        wizard_Graphical = new QWizardPage();
        wizard_Graphical->setObjectName(QString::fromUtf8("wizard_Graphical"));
        formLayout5 = new QFormLayout(wizard_Graphical);
        formLayout5->setObjectName(QString::fromUtf8("formLayout5"));
        radioButton_Graphical_Major = new QRadioButton(wizard_Graphical);
        radioButton_Graphical_Major->setObjectName(QString::fromUtf8("radioButton_Graphical_Major"));

        formLayout5->setWidget(2, QFormLayout::LabelRole, radioButton_Graphical_Major);

        radioButton_Graphical_Minor = new QRadioButton(wizard_Graphical);
        radioButton_Graphical_Minor->setObjectName(QString::fromUtf8("radioButton_Graphical_Minor"));

        formLayout5->setWidget(4, QFormLayout::LabelRole, radioButton_Graphical_Minor);

        radioButton_Graphical_No = new QRadioButton(wizard_Graphical);
        radioButton_Graphical_No->setObjectName(QString::fromUtf8("radioButton_Graphical_No"));

        formLayout5->setWidget(6, QFormLayout::LabelRole, radioButton_Graphical_No);

        lbl_Independent5 = new QLabel(wizard_Graphical);
        lbl_Independent5->setObjectName(QString::fromUtf8("lbl_Independent5"));
        lbl_Independent5->setFont(font);
        lbl_Independent5->setWordWrap(true);

        formLayout5->setWidget(0, QFormLayout::SpanningRole, lbl_Independent5);

        verticalSpacer5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout5->setItem(1, QFormLayout::SpanningRole, verticalSpacer5);

        CompatDB->setPage(5, wizard_Graphical);
        wizard_Audio = new QWizardPage();
        wizard_Audio->setObjectName(QString::fromUtf8("wizard_Audio"));
        formLayout6 = new QFormLayout(wizard_Audio);
        formLayout6->setObjectName(QString::fromUtf8("formLayout6"));
        radioButton_Audio_Major = new QRadioButton(wizard_Audio);
        radioButton_Audio_Major->setObjectName(QString::fromUtf8("radioButton_Audio_Major"));

        formLayout6->setWidget(2, QFormLayout::LabelRole, radioButton_Audio_Major);

        radioButton_Audio_Minor = new QRadioButton(wizard_Audio);
        radioButton_Audio_Minor->setObjectName(QString::fromUtf8("radioButton_Audio_Minor"));

        formLayout6->setWidget(4, QFormLayout::LabelRole, radioButton_Audio_Minor);

        radioButton_Audio_No = new QRadioButton(wizard_Audio);
        radioButton_Audio_No->setObjectName(QString::fromUtf8("radioButton_Audio_No"));

        formLayout6->setWidget(6, QFormLayout::LabelRole, radioButton_Audio_No);

        lbl_Independent6 = new QLabel(wizard_Audio);
        lbl_Independent6->setObjectName(QString::fromUtf8("lbl_Independent6"));
        lbl_Independent6->setFont(font);
        lbl_Independent6->setWordWrap(true);

        formLayout6->setWidget(0, QFormLayout::SpanningRole, lbl_Independent6);

        verticalSpacer6 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout6->setItem(1, QFormLayout::SpanningRole, verticalSpacer6);

        CompatDB->setPage(6, wizard_Audio);
        wizard_ThankYou = new QWizardPage();
        wizard_ThankYou->setObjectName(QString::fromUtf8("wizard_ThankYou"));
        CompatDB->setPage(7, wizard_ThankYou);

        retranslateUi(CompatDB);

        QMetaObject::connectSlotsByName(CompatDB);
    } // setupUi

    void retranslateUi(QWizard *CompatDB)
    {
        CompatDB->setWindowTitle(QCoreApplication::translate("CompatDB", "Report Compatibility", nullptr));
        wizard_Info->setTitle(QCoreApplication::translate("CompatDB", "Report Game Compatibility", nullptr));
        lbl_Spiel->setText(QCoreApplication::translate("CompatDB", "<html><head/><body><p><span style=\" font-size:10pt;\">Should you choose to submit a test case to the </span><a href=\"https://yuzu-emu.org/game/\"><span style=\" font-size:10pt; text-decoration: underline; color:#0000ff;\">yuzu Compatibility List</span></a><span style=\" font-size:10pt;\">, The following information will be collected and displayed on the site:</span></p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Hardware Information (CPU / GPU / Operating System)</li><li style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Which version of yuzu you are running</li><li style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The connected yuzu account</li></ul></body></html>", nullptr));
        wizard_GameBoot->setTitle(QCoreApplication::translate("CompatDB", "Report Game Compatibility", nullptr));
        lbl_Independent1->setText(QCoreApplication::translate("CompatDB", "<html><head/><body><p>Does the game boot?</p></body></html>", nullptr));
        radioButton_GameBoot_Yes->setText(QCoreApplication::translate("CompatDB", "Yes   The game starts to output video or audio", nullptr));
        radioButton_GameBoot_No->setText(QCoreApplication::translate("CompatDB", "No    The game doesn't get past the \"Launching...\" screen", nullptr));
        wizard_GamePlay->setTitle(QCoreApplication::translate("CompatDB", "Report Game Compatibility", nullptr));
        radioButton_Gameplay_Yes->setText(QCoreApplication::translate("CompatDB", "Yes   The game gets past the intro/menu and into gameplay", nullptr));
        radioButton_Gameplay_No->setText(QCoreApplication::translate("CompatDB", "No    The game crashes or freezes while loading or using the menu", nullptr));
        lbl_Independent2->setText(QCoreApplication::translate("CompatDB", "<html><head/><body><p>Does the game reach gameplay?</p></body></html>", nullptr));
        wizard_NoFreeze->setTitle(QCoreApplication::translate("CompatDB", "Report Game Compatibility", nullptr));
        radioButton_NoFreeze_Yes->setText(QCoreApplication::translate("CompatDB", "Yes   The game works without crashes", nullptr));
        radioButton_NoFreeze_No->setText(QCoreApplication::translate("CompatDB", "No    The game crashes or freezes during gameplay", nullptr));
        lbl_Independent3->setText(QCoreApplication::translate("CompatDB", "<html><head/><body><p>Does the game work without crashing, freezing or locking up during gameplay?</p></body></html>", nullptr));
        wizard_Complete->setTitle(QCoreApplication::translate("CompatDB", "Report Game Compatibility", nullptr));
        radioButton_Complete_Yes->setText(QCoreApplication::translate("CompatDB", "Yes   The game can be finished without any workarounds", nullptr));
        radioButton_Complete_No->setText(QCoreApplication::translate("CompatDB", "No    The game can't progress past a certain area", nullptr));
        lbl_Independent4->setText(QCoreApplication::translate("CompatDB", "<html><head/><body><p>Is the game completely playable from start to finish?</p></body></html>", nullptr));
        wizard_Graphical->setTitle(QCoreApplication::translate("CompatDB", "Report Game Compatibility", nullptr));
        radioButton_Graphical_Major->setText(QCoreApplication::translate("CompatDB", "Major   The game has major graphical errors", nullptr));
        radioButton_Graphical_Minor->setText(QCoreApplication::translate("CompatDB", "Minor   The game has minor graphical errors", nullptr));
        radioButton_Graphical_No->setText(QCoreApplication::translate("CompatDB", "None     Everything is rendered as it looks on the Nintendo Switch", nullptr));
        lbl_Independent5->setText(QCoreApplication::translate("CompatDB", "<html><head/><body><p>Does the game have any graphical glitches?</p></body></html>", nullptr));
        wizard_Audio->setTitle(QCoreApplication::translate("CompatDB", "Report Game Compatibility", nullptr));
        radioButton_Audio_Major->setText(QCoreApplication::translate("CompatDB", "Major   The game has major audio errors", nullptr));
        radioButton_Audio_Minor->setText(QCoreApplication::translate("CompatDB", "Minor   The game has minor audio errors", nullptr));
        radioButton_Audio_No->setText(QCoreApplication::translate("CompatDB", "None     Audio is played perfectly", nullptr));
        lbl_Independent6->setText(QCoreApplication::translate("CompatDB", "<html><head/><body><p>Does the game have any audio glitches / missing effects?</p></body></html>", nullptr));
        wizard_ThankYou->setTitle(QCoreApplication::translate("CompatDB", "Thank you for your submission!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CompatDB: public Ui_CompatDB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPATDB_H
