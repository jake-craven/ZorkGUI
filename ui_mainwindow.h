/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *NorthBtn;
    QPushButton *EastBtn;
    QPushButton *WestBtn;
    QPushButton *SouthBtn;
    QLabel *label;
    QGraphicsView *layoutImage;
    QWidget *gridLayoutWidget;
    QGridLayout *mapLayout;
    QPushButton *takeAllButton;
    QPushButton *take1Button;
    QListWidget *inventoryList;
    QPushButton *openCrafting;
    QPushButton *placeButton;
    QListWidget *roomItemList;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(864, 665);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(864, 665));
        MainWindow->setMaximumSize(QSize(5000, 5000));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        NorthBtn = new QPushButton(centralWidget);
        NorthBtn->setObjectName(QStringLiteral("NorthBtn"));
        NorthBtn->setGeometry(QRect(103, 430, 93, 28));
        EastBtn = new QPushButton(centralWidget);
        EastBtn->setObjectName(QStringLiteral("EastBtn"));
        EastBtn->setGeometry(QRect(200, 460, 93, 28));
        WestBtn = new QPushButton(centralWidget);
        WestBtn->setObjectName(QStringLiteral("WestBtn"));
        WestBtn->setGeometry(QRect(10, 460, 93, 28));
        SouthBtn = new QPushButton(centralWidget);
        SouthBtn->setObjectName(QStringLiteral("SouthBtn"));
        SouthBtn->setGeometry(QRect(103, 490, 93, 28));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 60, 221, 171));
        layoutImage = new QGraphicsView(centralWidget);
        layoutImage->setObjectName(QStringLiteral("layoutImage"));
        layoutImage->setGeometry(QRect(330, 0, 521, 271));
        sizePolicy.setHeightForWidth(layoutImage->sizePolicy().hasHeightForWidth());
        layoutImage->setSizePolicy(sizePolicy);
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(330, 0, 521, 271));
        mapLayout = new QGridLayout(gridLayoutWidget);
        mapLayout->setSpacing(6);
        mapLayout->setContentsMargins(11, 11, 11, 11);
        mapLayout->setObjectName(QStringLiteral("mapLayout"));
        mapLayout->setContentsMargins(0, 0, 0, 0);
        takeAllButton = new QPushButton(centralWidget);
        takeAllButton->setObjectName(QStringLiteral("takeAllButton"));
        takeAllButton->setGeometry(QRect(540, 400, 75, 23));
        take1Button = new QPushButton(centralWidget);
        take1Button->setObjectName(QStringLiteral("take1Button"));
        take1Button->setGeometry(QRect(540, 480, 75, 23));
        inventoryList = new QListWidget(centralWidget);
        inventoryList->setObjectName(QStringLiteral("inventoryList"));
        inventoryList->setGeometry(QRect(330, 340, 180, 270));
        openCrafting = new QPushButton(centralWidget);
        openCrafting->setObjectName(QStringLiteral("openCrafting"));
        openCrafting->setGeometry(QRect(540, 520, 75, 23));
        placeButton = new QPushButton(centralWidget);
        placeButton->setObjectName(QStringLiteral("placeButton"));
        placeButton->setGeometry(QRect(540, 440, 75, 23));
        roomItemList = new QListWidget(centralWidget);
        roomItemList->setObjectName(QStringLiteral("roomItemList"));
        roomItemList->setGeometry(QRect(630, 340, 180, 270));
        MainWindow->setCentralWidget(centralWidget);
        layoutImage->raise();
        NorthBtn->raise();
        EastBtn->raise();
        WestBtn->raise();
        SouthBtn->raise();
        label->raise();
        gridLayoutWidget->raise();
        takeAllButton->raise();
        take1Button->raise();
        inventoryList->raise();
        openCrafting->raise();
        placeButton->raise();
        roomItemList->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        sizePolicy.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        NorthBtn->setText(QApplication::translate("MainWindow", "North", nullptr));
        EastBtn->setText(QApplication::translate("MainWindow", "East", nullptr));
        WestBtn->setText(QApplication::translate("MainWindow", "West", nullptr));
        SouthBtn->setText(QApplication::translate("MainWindow", "South", nullptr));
        label->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        takeAllButton->setText(QApplication::translate("MainWindow", "Take All", nullptr));
        take1Button->setText(QApplication::translate("MainWindow", "Take", nullptr));
        openCrafting->setText(QApplication::translate("MainWindow", "Craft Items", nullptr));
        placeButton->setText(QApplication::translate("MainWindow", "Place", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
