/********************************************************************************
** Form generated from reading UI file 'moderation_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODERATION_DIALOG_H
#define UI_MODERATION_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ModerationDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *ban_list_group_box;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *refresh;
    QPushButton *unban;
    QTreeView *ban_list_view;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ModerationDialog)
    {
        if (ModerationDialog->objectName().isEmpty())
            ModerationDialog->setObjectName(QString::fromUtf8("ModerationDialog"));
        ModerationDialog->resize(500, 300);
        vboxLayout = new QVBoxLayout(ModerationDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        ban_list_group_box = new QGroupBox(ModerationDialog);
        ban_list_group_box->setObjectName(QString::fromUtf8("ban_list_group_box"));
        vboxLayout1 = new QVBoxLayout(ban_list_group_box);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer);

        refresh = new QPushButton(ban_list_group_box);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        refresh->setEnabled(false);

        hboxLayout->addWidget(refresh);

        unban = new QPushButton(ban_list_group_box);
        unban->setObjectName(QString::fromUtf8("unban"));
        unban->setEnabled(false);

        hboxLayout->addWidget(unban);


        vboxLayout1->addLayout(hboxLayout);

        ban_list_view = new QTreeView(ban_list_group_box);
        ban_list_view->setObjectName(QString::fromUtf8("ban_list_view"));

        vboxLayout1->addWidget(ban_list_view);


        vboxLayout->addWidget(ban_list_group_box);

        buttonBox = new QDialogButtonBox(ModerationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(ModerationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ModerationDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(ModerationDialog);
    } // setupUi

    void retranslateUi(QDialog *ModerationDialog)
    {
        ModerationDialog->setWindowTitle(QCoreApplication::translate("ModerationDialog", "Moderation", nullptr));
        ban_list_group_box->setTitle(QCoreApplication::translate("ModerationDialog", "Ban List", nullptr));
        refresh->setText(QCoreApplication::translate("ModerationDialog", "Refreshing", nullptr));
        unban->setText(QCoreApplication::translate("ModerationDialog", "Unban", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModerationDialog: public Ui_ModerationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODERATION_DIALOG_H
