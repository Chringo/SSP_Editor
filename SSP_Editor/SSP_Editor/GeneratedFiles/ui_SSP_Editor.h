/********************************************************************************
** Form generated from reading UI file 'SSP_Editor.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SSP_EDITOR_H
#define UI_SSP_EDITOR_H

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

class Ui_SSP_EditorClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SSP_EditorClass)
    {
        if (SSP_EditorClass->objectName().isEmpty())
            SSP_EditorClass->setObjectName(QStringLiteral("SSP_EditorClass"));
        SSP_EditorClass->resize(600, 400);
        menuBar = new QMenuBar(SSP_EditorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        SSP_EditorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SSP_EditorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SSP_EditorClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(SSP_EditorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SSP_EditorClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SSP_EditorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SSP_EditorClass->setStatusBar(statusBar);

        retranslateUi(SSP_EditorClass);

        QMetaObject::connectSlotsByName(SSP_EditorClass);
    } // setupUi

    void retranslateUi(QMainWindow *SSP_EditorClass)
    {
        SSP_EditorClass->setWindowTitle(QApplication::translate("SSP_EditorClass", "SSP_Editor", 0));
    } // retranslateUi

};

namespace Ui {
    class SSP_EditorClass: public Ui_SSP_EditorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SSP_EDITOR_H
