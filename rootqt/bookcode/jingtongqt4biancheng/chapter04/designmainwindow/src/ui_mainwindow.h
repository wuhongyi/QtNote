/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actNew;
    QAction *actOpen;
    QAction *actClose;
    QAction *actSave;
    QAction *actASave;
    QAction *actQuit;
    QAction *actUndo;
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actAll;
    QAction *actFind;
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_T;
    QToolBar *fileToolBar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(548, 540);
        actNew = new QAction(MainWindow);
        actNew->setObjectName(QString::fromUtf8("actNew"));
        const QIcon icon = QIcon(QString::fromUtf8(":/new/prefix1/new.png"));
        actNew->setIcon(icon);
        actOpen = new QAction(MainWindow);
        actOpen->setObjectName(QString::fromUtf8("actOpen"));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/new/prefix1/open.png"));
        actOpen->setIcon(icon1);
        actClose = new QAction(MainWindow);
        actClose->setObjectName(QString::fromUtf8("actClose"));
        actSave = new QAction(MainWindow);
        actSave->setObjectName(QString::fromUtf8("actSave"));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/new/prefix1/save.png"));
        actSave->setIcon(icon2);
        actASave = new QAction(MainWindow);
        actASave->setObjectName(QString::fromUtf8("actASave"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/new/prefix1/asave.png"));
        actASave->setIcon(icon3);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        actUndo = new QAction(MainWindow);
        actUndo->setObjectName(QString::fromUtf8("actUndo"));
        const QIcon icon4 = QIcon(QString::fromUtf8(":/new/prefix1/undo.png"));
        actUndo->setIcon(icon4);
        actCut = new QAction(MainWindow);
        actCut->setObjectName(QString::fromUtf8("actCut"));
        const QIcon icon5 = QIcon(QString::fromUtf8(":/new/prefix1/cut.png"));
        actCut->setIcon(icon5);
        actCopy = new QAction(MainWindow);
        actCopy->setObjectName(QString::fromUtf8("actCopy"));
        const QIcon icon6 = QIcon(QString::fromUtf8(":/new/prefix1/copy.png"));
        actCopy->setIcon(icon6);
        actPaste = new QAction(MainWindow);
        actPaste->setObjectName(QString::fromUtf8("actPaste"));
        const QIcon icon7 = QIcon(QString::fromUtf8(":/new/prefix1/paste.png"));
        actPaste->setIcon(icon7);
        actAll = new QAction(MainWindow);
        actAll->setObjectName(QString::fromUtf8("actAll"));
        actFind = new QAction(MainWindow);
        actFind->setObjectName(QString::fromUtf8("actFind"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        vboxLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 548, 28));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName(QString::fromUtf8("menu_F"));
        menu_E = new QMenu(menubar);
        menu_E->setObjectName(QString::fromUtf8("menu_E"));
        menu_T = new QMenu(menubar);
        menu_T->setObjectName(QString::fromUtf8("menu_T"));
        MainWindow->setMenuBar(menubar);
        fileToolBar = new QToolBar(MainWindow);
        fileToolBar->setObjectName(QString::fromUtf8("fileToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, fileToolBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(MainWindow);
        toolBar_3->setObjectName(QString::fromUtf8("toolBar_3"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_3);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_T->menuAction());
        menu_F->addAction(actNew);
        menu_F->addAction(actOpen);
        menu_F->addAction(actClose);
        menu_F->addSeparator();
        menu_F->addAction(actSave);
        menu_F->addAction(actASave);
        menu_F->addSeparator();
        menu_F->addAction(actQuit);
        menu_E->addAction(actUndo);
        menu_E->addSeparator();
        menu_E->addAction(actAll);
        menu_E->addAction(actCut);
        menu_E->addAction(actCopy);
        menu_E->addAction(actPaste);
        menu_E->addSeparator();
        menu_T->addAction(actFind);
        fileToolBar->addAction(actNew);
        fileToolBar->addAction(actOpen);
        fileToolBar->addAction(actSave);
        fileToolBar->addAction(actASave);
        toolBar->addAction(actUndo);
        toolBar->addAction(actCut);
        toolBar->addAction(actCopy);
        toolBar->addAction(actPaste);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actNew->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", 0, QApplication::UnicodeUTF8));
        actNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", 0, QApplication::UnicodeUTF8));
        actOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actClose->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255(&C)", 0, QApplication::UnicodeUTF8));
        actSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)...", 0, QApplication::UnicodeUTF8));
        actSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actASave->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&A)...", 0, QApplication::UnicodeUTF8));
        actQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272(&X)", 0, QApplication::UnicodeUTF8));
        actUndo->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200(&U)", 0, QApplication::UnicodeUTF8));
        actUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        actCut->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207(&X)", 0, QApplication::UnicodeUTF8));
        actCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actCopy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266(&C)", 0, QApplication::UnicodeUTF8));
        actCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actPaste->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264(&P)", 0, QApplication::UnicodeUTF8));
        actPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actAll->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211(&A)", 0, QApplication::UnicodeUTF8));
        actAll->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        actFind->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276\346\226\207\344\273\266(&F)", 0, QApplication::UnicodeUTF8));
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", 0, QApplication::UnicodeUTF8));
        menu_E->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", 0, QApplication::UnicodeUTF8));
        menu_T->setTitle(QApplication::translate("MainWindow", "\345\267\245\345\205\267(&T)", 0, QApplication::UnicodeUTF8));
        fileToolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
        toolBar_2->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", 0, QApplication::UnicodeUTF8));
        toolBar_3->setWindowTitle(QApplication::translate("MainWindow", "toolBar_3", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
