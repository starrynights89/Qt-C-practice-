/********************************************************************************
** Form generated from reading UI file 'age_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGE_WIDGET_H
#define UI_AGE_WIDGET_H

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

class Ui_age_widget
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *age_widget)
    {
        if (age_widget->objectName().isEmpty())
            age_widget->setObjectName(QStringLiteral("age_widget"));
        age_widget->resize(400, 300);
        menuBar = new QMenuBar(age_widget);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        age_widget->setMenuBar(menuBar);
        mainToolBar = new QToolBar(age_widget);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        age_widget->addToolBar(mainToolBar);
        centralWidget = new QWidget(age_widget);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        age_widget->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(age_widget);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        age_widget->setStatusBar(statusBar);

        retranslateUi(age_widget);

        QMetaObject::connectSlotsByName(age_widget);
    } // setupUi

    void retranslateUi(QMainWindow *age_widget)
    {
        age_widget->setWindowTitle(QApplication::translate("age_widget", "age_widget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class age_widget: public Ui_age_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGE_WIDGET_H
