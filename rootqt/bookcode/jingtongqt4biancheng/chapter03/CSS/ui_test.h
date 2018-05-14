/********************************************************************************
** Form generated from reading UI file 'test.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_H
#define UI_TEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test
{
public:
    QFrame *frame;
    QLabel *lblTotal;
    QPushButton *btnNext;
    QSpinBox *spinBox;
    QLabel *lblQuestion;
    QPushButton *btnGoto;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *vboxLayout;
    QRadioButton *radioA;
    QRadioButton *radioB;
    QRadioButton *radioC;
    QRadioButton *radioD;
    QPushButton *btnPrev;
    QLabel *lblRemain;
    QLabel *label_4;
    QPushButton *btnCommit;
    QComboBox *comboBox;

    void setupUi(QWidget *test)
    {
        if (test->objectName().isEmpty())
            test->setObjectName(QString::fromUtf8("test"));
        test->resize(636, 469);
        frame = new QFrame(test);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 621, 451));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lblTotal = new QLabel(frame);
        lblTotal->setObjectName(QString::fromUtf8("lblTotal"));
        lblTotal->setGeometry(QRect(100, 70, 131, 20));
        btnNext = new QPushButton(frame);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));
        btnNext->setGeometry(QRect(270, 410, 75, 23));
        spinBox = new QSpinBox(frame);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(80, 410, 46, 22));
        spinBox->setMinimum(1);
        spinBox->setMaximum(100);
        lblQuestion = new QLabel(frame);
        lblQuestion->setObjectName(QString::fromUtf8("lblQuestion"));
        lblQuestion->setGeometry(QRect(60, 120, 501, 20));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblQuestion->sizePolicy().hasHeightForWidth());
        lblQuestion->setSizePolicy(sizePolicy);
        btnGoto = new QPushButton(frame);
        btnGoto->setObjectName(QString::fromUtf8("btnGoto"));
        btnGoto->setGeometry(QRect(150, 410, 75, 23));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(340, 170, 211, 201));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 171, 151));
        vboxLayout = new QVBoxLayout(layoutWidget);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        radioA = new QRadioButton(layoutWidget);
        radioA->setObjectName(QString::fromUtf8("radioA"));

        vboxLayout->addWidget(radioA);

        radioB = new QRadioButton(layoutWidget);
        radioB->setObjectName(QString::fromUtf8("radioB"));

        vboxLayout->addWidget(radioB);

        radioC = new QRadioButton(layoutWidget);
        radioC->setObjectName(QString::fromUtf8("radioC"));

        vboxLayout->addWidget(radioC);

        radioD = new QRadioButton(layoutWidget);
        radioD->setObjectName(QString::fromUtf8("radioD"));

        vboxLayout->addWidget(radioD);

        btnPrev = new QPushButton(frame);
        btnPrev->setObjectName(QString::fromUtf8("btnPrev"));
        btnPrev->setGeometry(QRect(380, 410, 75, 23));
        lblRemain = new QLabel(frame);
        lblRemain->setObjectName(QString::fromUtf8("lblRemain"));
        lblRemain->setGeometry(QRect(380, 70, 141, 20));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 190, 234, 140));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/cop.jpg")));
        btnCommit = new QPushButton(frame);
        btnCommit->setObjectName(QString::fromUtf8("btnCommit"));
        btnCommit->setGeometry(QRect(490, 410, 75, 23));
        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(450, 30, 141, 22));

        retranslateUi(test);

        QMetaObject::connectSlotsByName(test);
    } // setupUi

    void retranslateUi(QWidget *test)
    {
        test->setWindowTitle(QApplication::translate("test", "\344\272\244\350\247\204\346\250\241\346\213\237\350\200\203\350\257\225", 0, QApplication::UnicodeUTF8));
        lblTotal->setText(QApplication::translate("test", "\350\200\203\350\257\225\346\227\266\351\227\26445\345\210\206\351\222\237", 0, QApplication::UnicodeUTF8));
        btnNext->setText(QApplication::translate("test", "\344\270\213\344\270\200\351\242\230", 0, QApplication::UnicodeUTF8));
        lblQuestion->setText(QApplication::translate("test", "1:\345\246\202\345\233\276\346\211\200\347\244\272\347\232\204\344\272\244\351\200\232\350\255\246\345\257\237\346\214\207\346\214\245\346\211\213\345\212\277\346\230\257\347\244\272\346\204\217\344\272\244\351\200\232\350\277\235\346\263\225\350\241\214\344\270\272\350\275\246\350\276\206( ) \343\200\202", 0, QApplication::UnicodeUTF8));
        btnGoto->setText(QApplication::translate("test", "\345\210\260\346\214\207\345\256\232\351\242\230\345\217\267", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("test", "\351\200\211\351\241\271", 0, QApplication::UnicodeUTF8));
        radioA->setText(QApplication::translate("test", "A.\351\235\240\350\276\271\345\201\234\350\275\246", 0, QApplication::UnicodeUTF8));
        radioB->setText(QApplication::translate("test", "B.\347\233\264\350\241\214", 0, QApplication::UnicodeUTF8));
        radioC->setText(QApplication::translate("test", "C.\345\217\263\350\275\254\345\274\257", 0, QApplication::UnicodeUTF8));
        radioD->setText(QApplication::translate("test", "D.\345\267\246\350\275\254\345\274\257", 0, QApplication::UnicodeUTF8));
        btnPrev->setText(QApplication::translate("test", "\344\270\212\344\270\200\351\242\230", 0, QApplication::UnicodeUTF8));
        lblRemain->setText(QApplication::translate("test", "\345\211\251\344\275\231\346\227\266\351\227\26445\345\210\206\351\222\237", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        btnCommit->setText(QApplication::translate("test", "\344\272\244\345\215\267", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("test", "\346\227\240\346\240\267\345\274\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("test", "css1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("test", "css2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("test", "css3", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class test: public Ui_test {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_H
