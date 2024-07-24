/********************************************************************************
** Form generated from reading UI file 'QT_Test.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_TEST_H
#define UI_QT_TEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QT_Test
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *QT_Test)
    {
        if (QT_Test->objectName().isEmpty())
            QT_Test->setObjectName(QString::fromUtf8("QT_Test"));
        QT_Test->resize(800, 600);
        centralwidget = new QWidget(QT_Test);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QT_Test->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QT_Test);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        QT_Test->setMenuBar(menubar);
        statusbar = new QStatusBar(QT_Test);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QT_Test->setStatusBar(statusbar);

        retranslateUi(QT_Test);

        QMetaObject::connectSlotsByName(QT_Test);
    } // setupUi

    void retranslateUi(QMainWindow *QT_Test)
    {
        QT_Test->setWindowTitle(QCoreApplication::translate("QT_Test", "QT_Test", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QT_Test: public Ui_QT_Test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_TEST_H
