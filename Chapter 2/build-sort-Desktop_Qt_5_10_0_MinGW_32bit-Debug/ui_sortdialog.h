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
#include <QtWidgets/QFormLayout>
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
    QVBoxLayout *verticalLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *verticalSpacer;
    QPushButton *moreButton;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *tertiaryGroupBox;
    QFormLayout *formLayout_3;
    QLabel *label_9;
    QComboBox *tertiaryColumnCombo;
    QLabel *label_10;
    QComboBox *comboBox_10;
    QGroupBox *secondaryGroupBox;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QComboBox *secondaryColumnCombo;
    QLabel *label_8;
    QComboBox *comboBox_8;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *primaryColumnCombo;
    QLabel *label_2;
    QComboBox *comboBox_2;

    void setupUi(QWidget *SortDialog)
    {
        if (SortDialog->objectName().isEmpty())
            SortDialog->setObjectName(QStringLiteral("SortDialog"));
        SortDialog->resize(247, 283);
        gridLayout = new QGridLayout(SortDialog);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        tertiaryGroupBox = new QGroupBox(SortDialog);
        tertiaryGroupBox->setObjectName(QStringLiteral("tertiaryGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tertiaryGroupBox->sizePolicy().hasHeightForWidth());
        tertiaryGroupBox->setSizePolicy(sizePolicy);
        formLayout_3 = new QFormLayout(tertiaryGroupBox);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_9 = new QLabel(tertiaryGroupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_9);

        tertiaryColumnCombo = new QComboBox(tertiaryGroupBox);
        tertiaryColumnCombo->addItem(QString());
        tertiaryColumnCombo->setObjectName(QStringLiteral("tertiaryColumnCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tertiaryColumnCombo->sizePolicy().hasHeightForWidth());
        tertiaryColumnCombo->setSizePolicy(sizePolicy1);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, tertiaryColumnCombo);

        label_10 = new QLabel(tertiaryGroupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_10);

        comboBox_10 = new QComboBox(tertiaryGroupBox);
        comboBox_10->addItem(QString());
        comboBox_10->addItem(QString());
        comboBox_10->setObjectName(QStringLiteral("comboBox_10"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, comboBox_10);


        gridLayout->addWidget(tertiaryGroupBox, 4, 0, 1, 1);

        secondaryGroupBox = new QGroupBox(SortDialog);
        secondaryGroupBox->setObjectName(QStringLiteral("secondaryGroupBox"));
        sizePolicy.setHeightForWidth(secondaryGroupBox->sizePolicy().hasHeightForWidth());
        secondaryGroupBox->setSizePolicy(sizePolicy);
        formLayout_2 = new QFormLayout(secondaryGroupBox);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_7 = new QLabel(secondaryGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        secondaryColumnCombo = new QComboBox(secondaryGroupBox);
        secondaryColumnCombo->addItem(QString());
        secondaryColumnCombo->setObjectName(QStringLiteral("secondaryColumnCombo"));
        sizePolicy1.setHeightForWidth(secondaryColumnCombo->sizePolicy().hasHeightForWidth());
        secondaryColumnCombo->setSizePolicy(sizePolicy1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, secondaryColumnCombo);

        label_8 = new QLabel(secondaryGroupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        comboBox_8 = new QComboBox(secondaryGroupBox);
        comboBox_8->addItem(QString());
        comboBox_8->addItem(QString());
        comboBox_8->setObjectName(QStringLiteral("comboBox_8"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, comboBox_8);


        gridLayout->addWidget(secondaryGroupBox, 2, 0, 1, 1);

        groupBox = new QGroupBox(SortDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        formLayout = new QFormLayout(groupBox);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        primaryColumnCombo = new QComboBox(groupBox);
        primaryColumnCombo->addItem(QString());
        primaryColumnCombo->setObjectName(QStringLiteral("primaryColumnCombo"));
        sizePolicy1.setHeightForWidth(primaryColumnCombo->sizePolicy().hasHeightForWidth());
        primaryColumnCombo->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::FieldRole, primaryColumnCombo);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox_2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        QWidget::setTabOrder(primaryColumnCombo, comboBox_2);
        QWidget::setTabOrder(comboBox_2, comboBox_8);
        QWidget::setTabOrder(comboBox_8, tertiaryColumnCombo);
        QWidget::setTabOrder(tertiaryColumnCombo, comboBox_10);
        QWidget::setTabOrder(comboBox_10, okButton);
        QWidget::setTabOrder(okButton, cancelButton);
        QWidget::setTabOrder(cancelButton, moreButton);

        retranslateUi(SortDialog);
        QObject::connect(okButton, SIGNAL(clicked()), SortDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), SortDialog, SLOT(reject()));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), secondaryGroupBox, SLOT(setVisible(bool)));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), tertiaryGroupBox, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(SortDialog);
    } // setupUi

    void retranslateUi(QWidget *SortDialog)
    {
        SortDialog->setWindowTitle(QApplication::translate("SortDialog", "Sort", nullptr));
        okButton->setText(QApplication::translate("SortDialog", "OK", nullptr));
        cancelButton->setText(QApplication::translate("SortDialog", "Cancel", nullptr));
        moreButton->setText(QApplication::translate("SortDialog", "&More", nullptr));
        tertiaryGroupBox->setTitle(QApplication::translate("SortDialog", "&Tertiary Key", nullptr));
        label_9->setText(QApplication::translate("SortDialog", "Column:", nullptr));
        tertiaryColumnCombo->setItemText(0, QApplication::translate("SortDialog", "None", nullptr));

        label_10->setText(QApplication::translate("SortDialog", "Order:", nullptr));
        comboBox_10->setItemText(0, QApplication::translate("SortDialog", "Ascending ", nullptr));
        comboBox_10->setItemText(1, QApplication::translate("SortDialog", "Descending", nullptr));

        secondaryGroupBox->setTitle(QApplication::translate("SortDialog", "&Secondary Key", nullptr));
        label_7->setText(QApplication::translate("SortDialog", "Column:", nullptr));
        secondaryColumnCombo->setItemText(0, QApplication::translate("SortDialog", "None", nullptr));

        label_8->setText(QApplication::translate("SortDialog", "Order:", nullptr));
        comboBox_8->setItemText(0, QApplication::translate("SortDialog", "Ascending ", nullptr));
        comboBox_8->setItemText(1, QApplication::translate("SortDialog", "Descending", nullptr));

        groupBox->setTitle(QApplication::translate("SortDialog", "&Primary Key", nullptr));
        label->setText(QApplication::translate("SortDialog", "Column:", nullptr));
        primaryColumnCombo->setItemText(0, QApplication::translate("SortDialog", "None", nullptr));

        label_2->setText(QApplication::translate("SortDialog", "Order:", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("SortDialog", "Ascending ", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("SortDialog", "Descending", nullptr));

    } // retranslateUi

};

namespace Ui {
    class SortDialog: public Ui_SortDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTDIALOG_H
