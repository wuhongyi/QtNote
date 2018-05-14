/********************************************************************************
** Form generated from reading UI file 'convert.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERT_H
#define UI_CONVERT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_convertWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *txtSource;
    QPushButton *btnSource;
    QLabel *label_2;
    QLineEdit *txtDest;
    QPushButton *btnDest;
    QSpacerItem *spacerItem;
    QRadioButton *radioGBToUTF;
    QRadioButton *radioUTFToGB;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QPushButton *btnConvert;
    QSpacerItem *spacerItem3;
    QPushButton *btnExit;
    QSpacerItem *spacerItem4;

    void setupUi(QWidget *convertWidget)
    {
        if (convertWidget->objectName().isEmpty())
            convertWidget->setObjectName(QString::fromUtf8("convertWidget"));
        convertWidget->resize(469, 334);
        gridLayout = new QGridLayout(convertWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(convertWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        txtSource = new QLineEdit(convertWidget);
        txtSource->setObjectName(QString::fromUtf8("txtSource"));

        gridLayout->addWidget(txtSource, 0, 2, 1, 4);

        btnSource = new QPushButton(convertWidget);
        btnSource->setObjectName(QString::fromUtf8("btnSource"));

        gridLayout->addWidget(btnSource, 0, 6, 1, 2);

        label_2 = new QLabel(convertWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        txtDest = new QLineEdit(convertWidget);
        txtDest->setObjectName(QString::fromUtf8("txtDest"));

        gridLayout->addWidget(txtDest, 1, 2, 1, 4);

        btnDest = new QPushButton(convertWidget);
        btnDest->setObjectName(QString::fromUtf8("btnDest"));

        gridLayout->addWidget(btnDest, 1, 6, 1, 2);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 3, 0, 1, 2);

        radioGBToUTF = new QRadioButton(convertWidget);
        radioGBToUTF->setObjectName(QString::fromUtf8("radioGBToUTF"));
        radioGBToUTF->setChecked(true);

        gridLayout->addWidget(radioGBToUTF, 3, 2, 1, 2);

        radioUTFToGB = new QRadioButton(convertWidget);
        radioUTFToGB->setObjectName(QString::fromUtf8("radioUTFToGB"));

        gridLayout->addWidget(radioUTFToGB, 3, 4, 1, 2);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 3, 6, 1, 2);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 4, 0, 1, 1);

        btnConvert = new QPushButton(convertWidget);
        btnConvert->setObjectName(QString::fromUtf8("btnConvert"));

        gridLayout->addWidget(btnConvert, 4, 1, 1, 2);

        spacerItem3 = new QSpacerItem(121, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem3, 4, 3, 1, 2);

        btnExit = new QPushButton(convertWidget);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));

        gridLayout->addWidget(btnExit, 4, 5, 1, 2);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem4, 4, 7, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(txtSource);
        label_2->setBuddy(txtDest);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(txtSource, btnSource);
        QWidget::setTabOrder(btnSource, txtDest);
        QWidget::setTabOrder(txtDest, btnDest);
        QWidget::setTabOrder(btnDest, radioGBToUTF);
        QWidget::setTabOrder(radioGBToUTF, radioUTFToGB);
        QWidget::setTabOrder(radioUTFToGB, btnConvert);
        QWidget::setTabOrder(btnConvert, btnExit);

        retranslateUi(convertWidget);

        QMetaObject::connectSlotsByName(convertWidget);
    } // setupUi

    void retranslateUi(QWidget *convertWidget)
    {
        convertWidget->setWindowTitle(QApplication::translate("convertWidget", "\347\274\226\347\240\201\350\275\254\346\215\242", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("convertWidget", "\346\272\220\350\267\257\345\276\204:", 0, QApplication::UnicodeUTF8));
        btnSource->setText(QApplication::translate("convertWidget", "\346\265\217\350\247\210...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("convertWidget", "\347\233\256\346\240\207\350\267\257\345\276\204:", 0, QApplication::UnicodeUTF8));
        txtDest->setText(QApplication::translate("convertWidget", "e:\\tmp", 0, QApplication::UnicodeUTF8));
        btnDest->setText(QApplication::translate("convertWidget", "\346\265\217\350\247\210...", 0, QApplication::UnicodeUTF8));
        radioGBToUTF->setText(QApplication::translate("convertWidget", "GB18030->UTF-8", 0, QApplication::UnicodeUTF8));
        radioUTFToGB->setText(QApplication::translate("convertWidget", "UTF8->GB18030", 0, QApplication::UnicodeUTF8));
        btnConvert->setText(QApplication::translate("convertWidget", "\345\274\200\345\247\213\350\275\254\346\215\242", 0, QApplication::UnicodeUTF8));
        btnExit->setText(QApplication::translate("convertWidget", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class convertWidget: public Ui_convertWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERT_H
