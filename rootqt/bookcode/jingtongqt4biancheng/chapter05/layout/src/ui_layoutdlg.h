/********************************************************************************
** Form generated from reading UI file 'layoutdlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYOUTDLG_H
#define UI_LAYOUTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_LayoutDlg
{
public:
    QGridLayout *gridLayout;
    QPushButton *constraintPushBtn;
    QPushButton *showPushBtn;
    QPushButton *lpolicyPushBtn;
    QPushButton *rpolicyPushBtn;
    QPushButton *lstretchPushBtn;
    QPushButton *rstretchPushBtn;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QTextEdit *lTextEdit;
    QTextEdit *rTextEdit;

    void setupUi(QDialog *LayoutDlg)
    {
        if (LayoutDlg->objectName().isEmpty())
            LayoutDlg->setObjectName(QString::fromUtf8("LayoutDlg"));
        LayoutDlg->resize(316, 255);
        gridLayout = new QGridLayout(LayoutDlg);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        constraintPushBtn = new QPushButton(LayoutDlg);
        constraintPushBtn->setObjectName(QString::fromUtf8("constraintPushBtn"));

        gridLayout->addWidget(constraintPushBtn, 0, 0, 1, 1);

        showPushBtn = new QPushButton(LayoutDlg);
        showPushBtn->setObjectName(QString::fromUtf8("showPushBtn"));

        gridLayout->addWidget(showPushBtn, 0, 1, 1, 1);

        lpolicyPushBtn = new QPushButton(LayoutDlg);
        lpolicyPushBtn->setObjectName(QString::fromUtf8("lpolicyPushBtn"));

        gridLayout->addWidget(lpolicyPushBtn, 1, 0, 1, 1);

        rpolicyPushBtn = new QPushButton(LayoutDlg);
        rpolicyPushBtn->setObjectName(QString::fromUtf8("rpolicyPushBtn"));

        gridLayout->addWidget(rpolicyPushBtn, 1, 1, 1, 1);

        lstretchPushBtn = new QPushButton(LayoutDlg);
        lstretchPushBtn->setObjectName(QString::fromUtf8("lstretchPushBtn"));

        gridLayout->addWidget(lstretchPushBtn, 2, 0, 1, 1);

        rstretchPushBtn = new QPushButton(LayoutDlg);
        rstretchPushBtn->setObjectName(QString::fromUtf8("rstretchPushBtn"));

        gridLayout->addWidget(rstretchPushBtn, 2, 1, 1, 1);

        groupBox = new QGroupBox(LayoutDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        hboxLayout = new QHBoxLayout(groupBox);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        lTextEdit = new QTextEdit(groupBox);
        lTextEdit->setObjectName(QString::fromUtf8("lTextEdit"));

        hboxLayout->addWidget(lTextEdit);

        rTextEdit = new QTextEdit(groupBox);
        rTextEdit->setObjectName(QString::fromUtf8("rTextEdit"));

        hboxLayout->addWidget(rTextEdit);


        gridLayout->addWidget(groupBox, 3, 0, 1, 2);


        retranslateUi(LayoutDlg);

        QMetaObject::connectSlotsByName(LayoutDlg);
    } // setupUi

    void retranslateUi(QDialog *LayoutDlg)
    {
        LayoutDlg->setWindowTitle(QApplication::translate("LayoutDlg", "\345\270\203\345\261\200\347\256\241\347\220\206\345\231\250\345\272\224\347\224\250", 0, QApplication::UnicodeUTF8));
        constraintPushBtn->setText(QApplication::translate("LayoutDlg", "\347\252\227\345\217\243\345\260\272\345\257\270\347\272\246\346\235\237", 0, QApplication::UnicodeUTF8));
        showPushBtn->setText(QApplication::translate("LayoutDlg", "\347\274\226\350\276\221\346\241\206\347\216\260\351\232\220", 0, QApplication::UnicodeUTF8));
        lpolicyPushBtn->setText(QApplication::translate("LayoutDlg", "\345\267\246\347\274\226\350\276\221\346\241\206\347\255\226\347\225\245", 0, QApplication::UnicodeUTF8));
        rpolicyPushBtn->setText(QApplication::translate("LayoutDlg", "\345\217\263\347\274\226\350\276\221\346\241\206\347\255\226\347\225\245", 0, QApplication::UnicodeUTF8));
        lstretchPushBtn->setText(QApplication::translate("LayoutDlg", "\345\267\246\347\274\226\350\276\221\346\241\206\344\274\270\347\274\251", 0, QApplication::UnicodeUTF8));
        rstretchPushBtn->setText(QApplication::translate("LayoutDlg", "\345\217\263\347\274\226\350\276\221\346\241\206\344\274\270\347\274\251", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("LayoutDlg", "\346\274\224\347\244\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LayoutDlg: public Ui_LayoutDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYOUTDLG_H
