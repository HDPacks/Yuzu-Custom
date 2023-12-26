/********************************************************************************
** Form generated from reading UI file 'direct_connect.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIRECT_CONNECT_H
#define UI_DIRECT_CONNECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DirectConnect
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QWidget *ip_container;
    QHBoxLayout *ip_layout;
    QLabel *label_2;
    QLineEdit *ip;
    QLabel *label_3;
    QLineEdit *port;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *nickname;
    QLabel *label;
    QLineEdit *password;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *connect;

    void setupUi(QWidget *DirectConnect)
    {
        if (DirectConnect->objectName().isEmpty())
            DirectConnect->setObjectName(QString::fromUtf8("DirectConnect"));
        DirectConnect->resize(455, 161);
        verticalLayout = new QVBoxLayout(DirectConnect);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        ip_container = new QWidget(DirectConnect);
        ip_container->setObjectName(QString::fromUtf8("ip_container"));
        ip_layout = new QHBoxLayout(ip_container);
        ip_layout->setObjectName(QString::fromUtf8("ip_layout"));
        ip_layout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(ip_container);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        ip_layout->addWidget(label_2);

        ip = new QLineEdit(ip_container);
        ip->setObjectName(QString::fromUtf8("ip"));
        ip->setMaxLength(253);

        ip_layout->addWidget(ip);

        label_3 = new QLabel(ip_container);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        ip_layout->addWidget(label_3);

        port = new QLineEdit(ip_container);
        port->setObjectName(QString::fromUtf8("port"));
        port->setMaxLength(5);
        port->setPlaceholderText(QString::fromUtf8("24872"));
        port->setMaximumSize(QSize(65, 50));

        ip_layout->addWidget(port);


        horizontalLayout->addWidget(ip_container);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(DirectConnect);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        nickname = new QLineEdit(DirectConnect);
        nickname->setObjectName(QString::fromUtf8("nickname"));
        nickname->setMaxLength(20);

        horizontalLayout_2->addWidget(nickname);

        label = new QLabel(DirectConnect);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        password = new QLineEdit(DirectConnect);
        password->setObjectName(QString::fromUtf8("password"));

        horizontalLayout_2->addWidget(password);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        connect = new QPushButton(DirectConnect);
        connect->setObjectName(QString::fromUtf8("connect"));

        horizontalLayout_3->addWidget(connect);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(verticalLayout_3);


        retranslateUi(DirectConnect);

        QMetaObject::connectSlotsByName(DirectConnect);
    } // setupUi

    void retranslateUi(QWidget *DirectConnect)
    {
        DirectConnect->setWindowTitle(QCoreApplication::translate("DirectConnect", "Direct Connect", nullptr));
        label_2->setText(QCoreApplication::translate("DirectConnect", "Server Address", nullptr));
#if QT_CONFIG(tooltip)
        ip->setToolTip(QCoreApplication::translate("DirectConnect", "<html><head/><body><p>Server address of the host</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("DirectConnect", "Port", nullptr));
#if QT_CONFIG(tooltip)
        port->setToolTip(QCoreApplication::translate("DirectConnect", "<html><head/><body><p>Port number the host is listening on</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("DirectConnect", "Nickname", nullptr));
        label->setText(QCoreApplication::translate("DirectConnect", "Password", nullptr));
        connect->setText(QCoreApplication::translate("DirectConnect", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DirectConnect: public Ui_DirectConnect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIRECT_CONNECT_H
