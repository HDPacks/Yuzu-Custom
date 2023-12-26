/********************************************************************************
** Form generated from reading UI file 'configure_web.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_WEB_H
#define UI_CONFIGURE_WEB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigureWeb
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBoxWebConfig;
    QVBoxLayout *verticalLayoutYuzuWebService;
    QLabel *web_credentials_disclaimer;
    QGridLayout *gridLayoutYuzuUsername;
    QPushButton *button_verify_login;
    QLabel *web_signup_link;
    QLabel *username;
    QLabel *label_token;
    QLabel *label_token_verified;
    QLabel *label_username;
    QLineEdit *edit_token;
    QLabel *web_token_info_link;
    QSpacerItem *horizontalSpacer;
    QLabel *label_disable_info;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *toggle_telemetry;
    QLabel *telemetry_learn_more;
    QGridLayout *gridLayoutTelemetryId;
    QLabel *label_telemetry_id;
    QPushButton *button_regenerate_telemetry_id;
    QGroupBox *discord_group;
    QVBoxLayout *verticalLayout_21;
    QCheckBox *toggle_discordrpc;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ConfigureWeb)
    {
        if (ConfigureWeb->objectName().isEmpty())
            ConfigureWeb->setObjectName(QString::fromUtf8("ConfigureWeb"));
        ConfigureWeb->resize(926, 561);
        verticalLayout = new QVBoxLayout(ConfigureWeb);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBoxWebConfig = new QGroupBox(ConfigureWeb);
        groupBoxWebConfig->setObjectName(QString::fromUtf8("groupBoxWebConfig"));
        verticalLayoutYuzuWebService = new QVBoxLayout(groupBoxWebConfig);
        verticalLayoutYuzuWebService->setObjectName(QString::fromUtf8("verticalLayoutYuzuWebService"));
        web_credentials_disclaimer = new QLabel(groupBoxWebConfig);
        web_credentials_disclaimer->setObjectName(QString::fromUtf8("web_credentials_disclaimer"));

        verticalLayoutYuzuWebService->addWidget(web_credentials_disclaimer);

        gridLayoutYuzuUsername = new QGridLayout();
        gridLayoutYuzuUsername->setObjectName(QString::fromUtf8("gridLayoutYuzuUsername"));
        button_verify_login = new QPushButton(groupBoxWebConfig);
        button_verify_login->setObjectName(QString::fromUtf8("button_verify_login"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_verify_login->sizePolicy().hasHeightForWidth());
        button_verify_login->setSizePolicy(sizePolicy);
        button_verify_login->setLayoutDirection(Qt::RightToLeft);

        gridLayoutYuzuUsername->addWidget(button_verify_login, 2, 3, 1, 1);

        web_signup_link = new QLabel(groupBoxWebConfig);
        web_signup_link->setObjectName(QString::fromUtf8("web_signup_link"));

        gridLayoutYuzuUsername->addWidget(web_signup_link, 2, 0, 1, 1);

        username = new QLabel(groupBoxWebConfig);
        username->setObjectName(QString::fromUtf8("username"));

        gridLayoutYuzuUsername->addWidget(username, 0, 1, 1, 3);

        label_token = new QLabel(groupBoxWebConfig);
        label_token->setObjectName(QString::fromUtf8("label_token"));

        gridLayoutYuzuUsername->addWidget(label_token, 1, 0, 1, 1);

        label_token_verified = new QLabel(groupBoxWebConfig);
        label_token_verified->setObjectName(QString::fromUtf8("label_token_verified"));

        gridLayoutYuzuUsername->addWidget(label_token_verified, 1, 4, 1, 1);

        label_username = new QLabel(groupBoxWebConfig);
        label_username->setObjectName(QString::fromUtf8("label_username"));

        gridLayoutYuzuUsername->addWidget(label_username, 0, 0, 1, 1);

        edit_token = new QLineEdit(groupBoxWebConfig);
        edit_token->setObjectName(QString::fromUtf8("edit_token"));
        edit_token->setMaxLength(80);
        edit_token->setEchoMode(QLineEdit::Password);

        gridLayoutYuzuUsername->addWidget(edit_token, 1, 1, 1, 3);

        web_token_info_link = new QLabel(groupBoxWebConfig);
        web_token_info_link->setObjectName(QString::fromUtf8("web_token_info_link"));

        gridLayoutYuzuUsername->addWidget(web_token_info_link, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayoutYuzuUsername->addItem(horizontalSpacer, 2, 2, 1, 1);


        verticalLayoutYuzuWebService->addLayout(gridLayoutYuzuUsername);


        verticalLayout_3->addWidget(groupBoxWebConfig);

        label_disable_info = new QLabel(ConfigureWeb);
        label_disable_info->setObjectName(QString::fromUtf8("label_disable_info"));
        label_disable_info->setWordWrap(true);

        verticalLayout_3->addWidget(label_disable_info);

        groupBox = new QGroupBox(ConfigureWeb);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        toggle_telemetry = new QCheckBox(groupBox);
        toggle_telemetry->setObjectName(QString::fromUtf8("toggle_telemetry"));

        verticalLayout_2->addWidget(toggle_telemetry);

        telemetry_learn_more = new QLabel(groupBox);
        telemetry_learn_more->setObjectName(QString::fromUtf8("telemetry_learn_more"));

        verticalLayout_2->addWidget(telemetry_learn_more);

        gridLayoutTelemetryId = new QGridLayout();
        gridLayoutTelemetryId->setObjectName(QString::fromUtf8("gridLayoutTelemetryId"));
        label_telemetry_id = new QLabel(groupBox);
        label_telemetry_id->setObjectName(QString::fromUtf8("label_telemetry_id"));

        gridLayoutTelemetryId->addWidget(label_telemetry_id, 0, 0, 1, 1);

        button_regenerate_telemetry_id = new QPushButton(groupBox);
        button_regenerate_telemetry_id->setObjectName(QString::fromUtf8("button_regenerate_telemetry_id"));
        sizePolicy.setHeightForWidth(button_regenerate_telemetry_id->sizePolicy().hasHeightForWidth());
        button_regenerate_telemetry_id->setSizePolicy(sizePolicy);
        button_regenerate_telemetry_id->setLayoutDirection(Qt::RightToLeft);

        gridLayoutTelemetryId->addWidget(button_regenerate_telemetry_id, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayoutTelemetryId);


        verticalLayout_3->addWidget(groupBox);


        verticalLayout->addLayout(verticalLayout_3);

        discord_group = new QGroupBox(ConfigureWeb);
        discord_group->setObjectName(QString::fromUtf8("discord_group"));
        verticalLayout_21 = new QVBoxLayout(discord_group);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        toggle_discordrpc = new QCheckBox(discord_group);
        toggle_discordrpc->setObjectName(QString::fromUtf8("toggle_discordrpc"));

        verticalLayout_21->addWidget(toggle_discordrpc);


        verticalLayout->addWidget(discord_group);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ConfigureWeb);

        QMetaObject::connectSlotsByName(ConfigureWeb);
    } // setupUi

    void retranslateUi(QWidget *ConfigureWeb)
    {
        ConfigureWeb->setWindowTitle(QCoreApplication::translate("ConfigureWeb", "Form", nullptr));
#if QT_CONFIG(accessibility)
        ConfigureWeb->setAccessibleName(QCoreApplication::translate("ConfigureWeb", "Web", nullptr));
#endif // QT_CONFIG(accessibility)
        groupBoxWebConfig->setTitle(QCoreApplication::translate("ConfigureWeb", "yuzu Web Service", nullptr));
        web_credentials_disclaimer->setText(QCoreApplication::translate("ConfigureWeb", "By providing your username and token, you agree to allow yuzu to collect additional usage data, which may include user identifying information.", nullptr));
        button_verify_login->setText(QCoreApplication::translate("ConfigureWeb", "Verify", nullptr));
        web_signup_link->setText(QCoreApplication::translate("ConfigureWeb", "Sign up", nullptr));
        label_token->setText(QCoreApplication::translate("ConfigureWeb", "Token: ", nullptr));
        label_username->setText(QCoreApplication::translate("ConfigureWeb", "Username: ", nullptr));
        web_token_info_link->setText(QCoreApplication::translate("ConfigureWeb", "What is my token?", nullptr));
        label_disable_info->setText(QCoreApplication::translate("ConfigureWeb", "Web Service configuration can only be changed when a public room isn't being hosted.", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ConfigureWeb", "Telemetry", nullptr));
        toggle_telemetry->setText(QCoreApplication::translate("ConfigureWeb", "Share anonymous usage data with the yuzu team", nullptr));
        telemetry_learn_more->setText(QCoreApplication::translate("ConfigureWeb", "Learn more", nullptr));
        label_telemetry_id->setText(QCoreApplication::translate("ConfigureWeb", "Telemetry ID:", nullptr));
        button_regenerate_telemetry_id->setText(QCoreApplication::translate("ConfigureWeb", "Regenerate", nullptr));
        discord_group->setTitle(QCoreApplication::translate("ConfigureWeb", "Discord Presence", nullptr));
        toggle_discordrpc->setText(QCoreApplication::translate("ConfigureWeb", "Show Current Game in your Discord Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigureWeb: public Ui_ConfigureWeb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_WEB_H
