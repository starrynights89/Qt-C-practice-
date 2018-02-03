/********************************************************************************
** Form generated from reading UI file 'finddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDDIALOG_H
#define UI_FINDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_finddialog
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *finddialog)
    {
        if (finddialog->objectName().isEmpty())
            finddialog->setObjectName(QStringLiteral("finddialog"));
        finddialog->resize(400, 300);
        menuBar = new QMenuBar(finddialog);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        finddialog->setMenuBar(menuBar);
        mainToolBar = new QToolBar(finddialog);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        finddialog->addToolBar(mainToolBar);
        centralWidget = new QWidget(finddialog);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        finddialog->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(finddialog);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        finddialog->setStatusBar(statusBar);

        retranslateUi(finddialog);

        QMetaObject::connectSlotsByName(finddialog);
    } // setupUi

    void retranslateUi(QMainWindow *finddialog)
    {
        finddialog->setWindowTitle(QApplication::translate("finddialog", "finddialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class finddialog: public Ui_finddialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDDIALOG_H
