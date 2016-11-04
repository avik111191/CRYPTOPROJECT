/********************************************************************************
** Form generated from reading UI file 'cryptoproject.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRYPTOPROJECT_H
#define UI_CRYPTOPROJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CRYPTOPROJECTClass
{
public:
    QWidget *centralWidget;
    QPushButton *LaunchpushButton;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CRYPTOPROJECTClass)
    {
        if (CRYPTOPROJECTClass->objectName().isEmpty())
            CRYPTOPROJECTClass->setObjectName(QStringLiteral("CRYPTOPROJECTClass"));
        CRYPTOPROJECTClass->resize(693, 466);
        centralWidget = new QWidget(CRYPTOPROJECTClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        LaunchpushButton = new QPushButton(centralWidget);
        LaunchpushButton->setObjectName(QStringLiteral("LaunchpushButton"));
        LaunchpushButton->setGeometry(QRect(610, 380, 75, 23));
        listWidget = new QListWidget(centralWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 221, 391));
        CRYPTOPROJECTClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CRYPTOPROJECTClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 693, 21));
        CRYPTOPROJECTClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CRYPTOPROJECTClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CRYPTOPROJECTClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CRYPTOPROJECTClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CRYPTOPROJECTClass->setStatusBar(statusBar);

        retranslateUi(CRYPTOPROJECTClass);

        QMetaObject::connectSlotsByName(CRYPTOPROJECTClass);
    } // setupUi

    void retranslateUi(QMainWindow *CRYPTOPROJECTClass)
    {
        CRYPTOPROJECTClass->setWindowTitle(QApplication::translate("CRYPTOPROJECTClass", "CRYPTOPROJECT", 0));
        LaunchpushButton->setText(QApplication::translate("CRYPTOPROJECTClass", "PushButton", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("CRYPTOPROJECTClass", "Square & Multiply", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class CRYPTOPROJECTClass: public Ui_CRYPTOPROJECTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRYPTOPROJECT_H
