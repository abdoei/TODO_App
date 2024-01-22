/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *textbox;
    QPushButton *btn_add;
    QPushButton *btn_rmall;
    QPushButton *btn_rm;
    QListWidget *listWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(436, 550);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setAutoFillBackground(false);
        textbox = new QLineEdit(centralwidget);
        textbox->setObjectName(QString::fromUtf8("textbox"));
        textbox->setGeometry(QRect(42, 30, 261, 41));
        btn_add = new QPushButton(centralwidget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setGeometry(QRect(320, 30, 81, 41));
        btn_rmall = new QPushButton(centralwidget);
        btn_rmall->setObjectName(QString::fromUtf8("btn_rmall"));
        btn_rmall->setGeometry(QRect(40, 490, 90, 34));
        btn_rm = new QPushButton(centralwidget);
        btn_rm->setObjectName(QString::fromUtf8("btn_rm"));
        btn_rm->setGeometry(QRect(150, 490, 251, 34));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(40, 91, 361, 381));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "TODO list", nullptr));
        btn_add->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        btn_rmall->setText(QCoreApplication::translate("MainWindow", "Remove All", nullptr));
        btn_rm->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
