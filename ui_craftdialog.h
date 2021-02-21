/********************************************************************************
** Form generated from reading UI file 'craftdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRAFTDIALOG_H
#define UI_CRAFTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CraftDialog
{
public:
    QComboBox *dropMenu1;
    QComboBox *dropMenu2;
    QPushButton *craftButton;
    QPushButton *cancelButton;
    QLabel *craftedItem;

    void setupUi(QDialog *CraftDialog)
    {
        if (CraftDialog->objectName().isEmpty())
            CraftDialog->setObjectName(QStringLiteral("CraftDialog"));
        CraftDialog->resize(400, 300);
        CraftDialog->setMinimumSize(QSize(400, 300));
        CraftDialog->setMaximumSize(QSize(400, 300));
        dropMenu1 = new QComboBox(CraftDialog);
        dropMenu1->setObjectName(QStringLiteral("dropMenu1"));
        dropMenu1->setGeometry(QRect(30, 20, 140, 22));
        dropMenu1->setEditable(false);
        dropMenu2 = new QComboBox(CraftDialog);
        dropMenu2->setObjectName(QStringLiteral("dropMenu2"));
        dropMenu2->setGeometry(QRect(230, 20, 140, 22));
        dropMenu2->setEditable(false);
        craftButton = new QPushButton(CraftDialog);
        craftButton->setObjectName(QStringLiteral("craftButton"));
        craftButton->setGeometry(QRect(160, 190, 80, 23));
        cancelButton = new QPushButton(CraftDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(160, 230, 80, 23));
        craftedItem = new QLabel(CraftDialog);
        craftedItem->setObjectName(QStringLiteral("craftedItem"));
        craftedItem->setGeometry(QRect(0, 140, 401, 20));
        craftedItem->setScaledContents(true);
        craftedItem->setAlignment(Qt::AlignCenter);
        dropMenu2->raise();
        craftButton->raise();
        cancelButton->raise();
        dropMenu1->raise();
        craftedItem->raise();

        retranslateUi(CraftDialog);

        QMetaObject::connectSlotsByName(CraftDialog);
    } // setupUi

    void retranslateUi(QDialog *CraftDialog)
    {
        CraftDialog->setWindowTitle(QApplication::translate("CraftDialog", "Dialog", nullptr));
        craftButton->setText(QApplication::translate("CraftDialog", "Craft", nullptr));
        cancelButton->setText(QApplication::translate("CraftDialog", "Cancel", nullptr));
        craftedItem->setText(QApplication::translate("CraftDialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CraftDialog: public Ui_CraftDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRAFTDIALOG_H
