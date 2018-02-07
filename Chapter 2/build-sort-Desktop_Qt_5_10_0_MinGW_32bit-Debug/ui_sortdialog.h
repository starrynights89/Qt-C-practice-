/********************************************************************************
** Form generated from reading UI file 'sortdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTDIALOG_H
#define UI_SORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SortDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *verticalSpacer;
    QPushButton *moreButton;
    QGroupBox *groupBox;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QGroupBox *groupBox_3;
    QLabel *label_9;
    QComboBox *comboBox_9;
    QLabel *label_10;
    QComboBox *comboBox_10;
    QGroupBox *groupBox_2;
    QLabel *label_7;
    QComboBox *comboBox_7;
    QLabel *label_8;
    QComboBox *comboBox_8;

    void setupUi(QWidget *SortDialog)
    {
        if (SortDialog->objectName().isEmpty())
            SortDialog->setObjectName(QStringLiteral("SortDialog"));
        SortDialog->resize(287, 298);
        gridLayout = new QGridLayout(SortDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        okButton = new QPushButton(SortDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        verticalLayout->addWidget(okButton);

        cancelButton = new QPushButton(SortDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        verticalLayout->addWidget(cancelButton);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        moreButton = new QPushButton(SortDialog);
        moreButton->setObjectName(QStringLiteral("moreButton"));
        moreButton->setCheckable(true);

        verticalLayout->addWidget(moreButton);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        groupBox = new QGroupBox(SortDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 24, 39, 16));
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(51, 25, 71, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(12, 51, 32, 16));
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(51, 51, 101, 20));

        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_3 = new QGroupBox(SortDialog);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(40);
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 24, 39, 16));
        comboBox_9 = new QComboBox(groupBox_3);
        comboBox_9->addItem(QString());
        comboBox_9->setObjectName(QStringLiteral("comboBox_9"));
        comboBox_9->setGeometry(QRect(51, 25, 71, 20));
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(12, 51, 32, 16));
        comboBox_10 = new QComboBox(groupBox_3);
        comboBox_10->addItem(QString());
        comboBox_10->addItem(QString());
        comboBox_10->setObjectName(QStringLiteral("comboBox_10"));
        comboBox_10->setGeometry(QRect(51, 51, 101, 20));

        gridLayout->addWidget(groupBox_3, 4, 0, 1, 1);

        groupBox_2 = new QGroupBox(SortDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(40);
        sizePolicy1.setVerticalStretch(40);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 24, 39, 16));
        comboBox_7 = new QComboBox(groupBox_2);
        comboBox_7->addItem(QString());
        comboBox_7->setObjectName(QStringLiteral("comboBox_7"));
        comboBox_7->setGeometry(QRect(51, 25, 71, 20));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(12, 51, 32, 16));
        comboBox_8 = new QComboBox(groupBox_2);
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->setObjectName(QStringLiteral("comboBox_8"));
        comboBox_8->setGeometry(QRect(51, 51, 101, 20));

        gridLayout->addWidget(groupBox_2, 2, 0, 1, 1);

        QWidget::setTabOrder(comboBox, comboBox_2);
        QWidget::setTabOrder(comboBox_2, comboBox_7);
        QWidget::setTabOrder(comboBox_7, comboBox_8);
        QWidget::setTabOrder(comboBox_8, comboBox_9);
        QWidget::setTabOrder(comboBox_9, comboBox_10);
        QWidget::setTabOrder(comboBox_10, okButton);
        QWidget::setTabOrder(okButton, cancelButton);
        QWidget::setTabOrder(cancelButton, moreButton);

        retranslateUi(SortDialog);
        QObject::connect(okButton, SIGNAL(clicked()), SortDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), SortDialog, SLOT(reject()));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), groupBox_2, SLOT(setVisible(bool)));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), groupBox_3, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(SortDialog);
    } // setupUi

    void retranslateUi(QWidget *SortDialog)
    {
        SortDialog->setWindowTitle(QApplication::translate("SortDialog", "Sort", nullptr));
        okButton->setText(QApplication::translate("SortDialog", "OK", nullptr));
        cancelButton->setText(QApplication::translate("SortDialog", "Cancel", nullptr));
        moreButton->setText(QApplication::translate("SortDialog", "&More", nullptr));
        groupBox->setTitle(QApplication::translate("SortDialog", "&Primary Key", nullptr));
        label->setText(QApplication::translate("SortDialog", "Column:", nullptr));
        comboBox->setItemText(0, QApplication::translate("SortDialog", "None", nullptr));

        label_2->setText(QApplication::translate("SortDialog", "Order:", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("SortDialog", "Ascending ", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("SortDialog", "Descending", nullptr));

        groupBox_3->setTitle(QApplication::translate("SortDialog", "&Tertiary Key", nullptr));
        label_9->setText(QApplication::translate("SortDialog", "Column:", nullptr));
        comboBox_9->setItemText(0, QApplication::translate("SortDialog", "None", nullptr));

        label_10->setText(QApplication::translate("SortDialog", "Order:", nullptr));
        comboBox_10->setItemText(0, QApplication::translate("SortDialog", "Ascending ", nullptr));
        comboBox_10->setItemText(1, QApplication::translate("SortDialog", "Descending", nullptr));

        groupBox_2->setTitle(QApplication::translate("SortDialog", "&Secondary Key", nullptr));
        label_7->setText(QApplication::translate("SortDialog", "Column:", nullptr));
        comboBox_7->setItemText(0, QApplication::translate("SortDialog", "None", nullptr));

        label_8->setText(QApplication::translate("SortDialog", "Order:", nullptr));
        comboBox_8->setItemText(0, QApplication::translate("SortDialog", "Ascending ", nullptr));
        comboBox_8->setItemText(1, QApplication::translate("SortDialog", "Descending", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SortDialog: public Ui_SortDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTDIALOG_H
