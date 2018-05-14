/********************************************************************************
** Form generated from reading UI file 'ctrlform.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CTRLFORM_H
#define UI_CTRLFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CtrlForm
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QRadioButton *widgetRadioBtn;
    QRadioButton *sheetRadioBtn;
    QRadioButton *toolRadioBtn;
    QRadioButton *subwindowRadioBtn;
    QRadioButton *windowRadioBtn;
    QRadioButton *drawerRadioBtn;
    QRadioButton *tooltipRadioBtn;
    QRadioButton *dialogRadioBtn;
    QRadioButton *popupRadioBtn;
    QRadioButton *splashscreenRadioBtn;
    QVBoxLayout *vboxLayout1;
    QGroupBox *groupBox_2;
    QHBoxLayout *hboxLayout1;
    QRadioButton *nullRadioBtn;
    QRadioButton *thisRadioBtn;
    QGroupBox *groupBox_3;
    QHBoxLayout *hboxLayout2;
    QHBoxLayout *hboxLayout3;
    QLabel *label;
    QSpinBox *xSpinBox;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout4;
    QLabel *label_2;
    QSpinBox *ySpinBox;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout1;
    QCheckBox *fsdialogCheckBox;
    QCheckBox *titleCheckBox;
    QCheckBox *helpCheckBox;
    QCheckBox *owndcCheckBox;
    QCheckBox *menuCheckBox;
    QCheckBox *shadeCheckBox;
    QCheckBox *managerCheckBox;
    QCheckBox *minCheckBox;
    QCheckBox *topCheckBox;
    QCheckBox *framelessCheckBox;
    QCheckBox *maxCheckBox;
    QCheckBox *customizeCheckBox;
    QCheckBox *minmaxCheckBox;

    void setupUi(QWidget *CtrlForm)
    {
        if (CtrlForm->objectName().isEmpty())
            CtrlForm->setObjectName(QString::fromUtf8("CtrlForm"));
        CtrlForm->resize(629, 302);
        vboxLayout = new QVBoxLayout(CtrlForm);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        groupBox = new QGroupBox(CtrlForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widgetRadioBtn = new QRadioButton(groupBox);
        widgetRadioBtn->setObjectName(QString::fromUtf8("widgetRadioBtn"));

        gridLayout->addWidget(widgetRadioBtn, 0, 0, 1, 1);

        sheetRadioBtn = new QRadioButton(groupBox);
        sheetRadioBtn->setObjectName(QString::fromUtf8("sheetRadioBtn"));

        gridLayout->addWidget(sheetRadioBtn, 0, 1, 1, 1);

        toolRadioBtn = new QRadioButton(groupBox);
        toolRadioBtn->setObjectName(QString::fromUtf8("toolRadioBtn"));

        gridLayout->addWidget(toolRadioBtn, 0, 2, 1, 1);

        subwindowRadioBtn = new QRadioButton(groupBox);
        subwindowRadioBtn->setObjectName(QString::fromUtf8("subwindowRadioBtn"));

        gridLayout->addWidget(subwindowRadioBtn, 0, 3, 1, 1);

        windowRadioBtn = new QRadioButton(groupBox);
        windowRadioBtn->setObjectName(QString::fromUtf8("windowRadioBtn"));

        gridLayout->addWidget(windowRadioBtn, 1, 0, 1, 1);

        drawerRadioBtn = new QRadioButton(groupBox);
        drawerRadioBtn->setObjectName(QString::fromUtf8("drawerRadioBtn"));

        gridLayout->addWidget(drawerRadioBtn, 1, 1, 1, 1);

        tooltipRadioBtn = new QRadioButton(groupBox);
        tooltipRadioBtn->setObjectName(QString::fromUtf8("tooltipRadioBtn"));

        gridLayout->addWidget(tooltipRadioBtn, 1, 2, 1, 1);

        dialogRadioBtn = new QRadioButton(groupBox);
        dialogRadioBtn->setObjectName(QString::fromUtf8("dialogRadioBtn"));

        gridLayout->addWidget(dialogRadioBtn, 2, 0, 1, 1);

        popupRadioBtn = new QRadioButton(groupBox);
        popupRadioBtn->setObjectName(QString::fromUtf8("popupRadioBtn"));

        gridLayout->addWidget(popupRadioBtn, 2, 1, 1, 1);

        splashscreenRadioBtn = new QRadioButton(groupBox);
        splashscreenRadioBtn->setObjectName(QString::fromUtf8("splashscreenRadioBtn"));

        gridLayout->addWidget(splashscreenRadioBtn, 2, 2, 1, 1);


        hboxLayout->addWidget(groupBox);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        groupBox_2 = new QGroupBox(CtrlForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        hboxLayout1 = new QHBoxLayout(groupBox_2);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        hboxLayout1->setContentsMargins(-1, 5, -1, 5);
        nullRadioBtn = new QRadioButton(groupBox_2);
        nullRadioBtn->setObjectName(QString::fromUtf8("nullRadioBtn"));

        hboxLayout1->addWidget(nullRadioBtn);

        thisRadioBtn = new QRadioButton(groupBox_2);
        thisRadioBtn->setObjectName(QString::fromUtf8("thisRadioBtn"));

        hboxLayout1->addWidget(thisRadioBtn);


        vboxLayout1->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(CtrlForm);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        hboxLayout2 = new QHBoxLayout(groupBox_3);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        hboxLayout2->setContentsMargins(-1, 2, -1, 5);
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout3->addWidget(label);

        xSpinBox = new QSpinBox(groupBox_3);
        xSpinBox->setObjectName(QString::fromUtf8("xSpinBox"));

        hboxLayout3->addWidget(xSpinBox);


        hboxLayout2->addLayout(hboxLayout3);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout4->addWidget(label_2);

        ySpinBox = new QSpinBox(groupBox_3);
        ySpinBox->setObjectName(QString::fromUtf8("ySpinBox"));

        hboxLayout4->addWidget(ySpinBox);


        hboxLayout2->addLayout(hboxLayout4);


        vboxLayout1->addWidget(groupBox_3);


        hboxLayout->addLayout(vboxLayout1);


        vboxLayout->addLayout(hboxLayout);

        groupBox_4 = new QGroupBox(CtrlForm);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout1 = new QGridLayout(groupBox_4);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        fsdialogCheckBox = new QCheckBox(groupBox_4);
        fsdialogCheckBox->setObjectName(QString::fromUtf8("fsdialogCheckBox"));

        gridLayout1->addWidget(fsdialogCheckBox, 0, 0, 1, 1);

        titleCheckBox = new QCheckBox(groupBox_4);
        titleCheckBox->setObjectName(QString::fromUtf8("titleCheckBox"));

        gridLayout1->addWidget(titleCheckBox, 0, 1, 1, 1);

        helpCheckBox = new QCheckBox(groupBox_4);
        helpCheckBox->setObjectName(QString::fromUtf8("helpCheckBox"));

        gridLayout1->addWidget(helpCheckBox, 0, 2, 1, 1);

        owndcCheckBox = new QCheckBox(groupBox_4);
        owndcCheckBox->setObjectName(QString::fromUtf8("owndcCheckBox"));

        gridLayout1->addWidget(owndcCheckBox, 1, 0, 1, 1);

        menuCheckBox = new QCheckBox(groupBox_4);
        menuCheckBox->setObjectName(QString::fromUtf8("menuCheckBox"));

        gridLayout1->addWidget(menuCheckBox, 1, 1, 1, 1);

        shadeCheckBox = new QCheckBox(groupBox_4);
        shadeCheckBox->setObjectName(QString::fromUtf8("shadeCheckBox"));

        gridLayout1->addWidget(shadeCheckBox, 1, 2, 1, 1);

        managerCheckBox = new QCheckBox(groupBox_4);
        managerCheckBox->setObjectName(QString::fromUtf8("managerCheckBox"));

        gridLayout1->addWidget(managerCheckBox, 2, 0, 1, 1);

        minCheckBox = new QCheckBox(groupBox_4);
        minCheckBox->setObjectName(QString::fromUtf8("minCheckBox"));

        gridLayout1->addWidget(minCheckBox, 2, 1, 1, 1);

        topCheckBox = new QCheckBox(groupBox_4);
        topCheckBox->setObjectName(QString::fromUtf8("topCheckBox"));

        gridLayout1->addWidget(topCheckBox, 2, 2, 1, 1);

        framelessCheckBox = new QCheckBox(groupBox_4);
        framelessCheckBox->setObjectName(QString::fromUtf8("framelessCheckBox"));

        gridLayout1->addWidget(framelessCheckBox, 3, 0, 1, 1);

        maxCheckBox = new QCheckBox(groupBox_4);
        maxCheckBox->setObjectName(QString::fromUtf8("maxCheckBox"));

        gridLayout1->addWidget(maxCheckBox, 3, 1, 1, 1);

        customizeCheckBox = new QCheckBox(groupBox_4);
        customizeCheckBox->setObjectName(QString::fromUtf8("customizeCheckBox"));

        gridLayout1->addWidget(customizeCheckBox, 4, 0, 1, 1);

        minmaxCheckBox = new QCheckBox(groupBox_4);
        minmaxCheckBox->setObjectName(QString::fromUtf8("minmaxCheckBox"));

        gridLayout1->addWidget(minmaxCheckBox, 4, 1, 1, 1);


        vboxLayout->addWidget(groupBox_4);


        retranslateUi(CtrlForm);

        QMetaObject::connectSlotsByName(CtrlForm);
    } // setupUi

    void retranslateUi(QWidget *CtrlForm)
    {
        CtrlForm->setWindowTitle(QApplication::translate("CtrlForm", "\347\252\227\345\217\243\346\240\207\345\277\227\345\222\214\345\207\240\344\275\225\345\270\203\345\261\200", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("CtrlForm", "\347\252\227\345\217\243\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        widgetRadioBtn->setText(QApplication::translate("CtrlForm", "Widget", 0, QApplication::UnicodeUTF8));
        sheetRadioBtn->setText(QApplication::translate("CtrlForm", "Sheet", 0, QApplication::UnicodeUTF8));
        toolRadioBtn->setText(QApplication::translate("CtrlForm", "Tool", 0, QApplication::UnicodeUTF8));
        subwindowRadioBtn->setText(QApplication::translate("CtrlForm", "SubWindow", 0, QApplication::UnicodeUTF8));
        windowRadioBtn->setText(QApplication::translate("CtrlForm", "Window", 0, QApplication::UnicodeUTF8));
        drawerRadioBtn->setText(QApplication::translate("CtrlForm", "Drawer", 0, QApplication::UnicodeUTF8));
        tooltipRadioBtn->setText(QApplication::translate("CtrlForm", "ToolTip", 0, QApplication::UnicodeUTF8));
        dialogRadioBtn->setText(QApplication::translate("CtrlForm", "Dialog", 0, QApplication::UnicodeUTF8));
        popupRadioBtn->setText(QApplication::translate("CtrlForm", "Popup", 0, QApplication::UnicodeUTF8));
        splashscreenRadioBtn->setText(QApplication::translate("CtrlForm", "SplashScreen", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("CtrlForm", "\347\210\266\347\252\227\345\217\243\351\203\250\344\273\266", 0, QApplication::UnicodeUTF8));
        nullRadioBtn->setText(QApplication::translate("CtrlForm", "\346\227\240\347\210\266\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
        thisRadioBtn->setText(QApplication::translate("CtrlForm", "\346\234\254\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("CtrlForm", "\347\247\273\345\212\250", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CtrlForm", "X\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CtrlForm", "Y\357\274\232", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("CtrlForm", "\347\252\227\345\217\243\346\217\220\347\244\272", 0, QApplication::UnicodeUTF8));
        fsdialogCheckBox->setText(QApplication::translate("CtrlForm", "MSWindowsFixedSizeDialogHint", 0, QApplication::UnicodeUTF8));
        titleCheckBox->setText(QApplication::translate("CtrlForm", "WindowTitleHint", 0, QApplication::UnicodeUTF8));
        helpCheckBox->setText(QApplication::translate("CtrlForm", "WindowContextHelpButtonHint", 0, QApplication::UnicodeUTF8));
        owndcCheckBox->setText(QApplication::translate("CtrlForm", "MSWindowsOwnDC", 0, QApplication::UnicodeUTF8));
        menuCheckBox->setText(QApplication::translate("CtrlForm", "WindowSystemMenuHint", 0, QApplication::UnicodeUTF8));
        shadeCheckBox->setText(QApplication::translate("CtrlForm", "WindowShadeButtonHint", 0, QApplication::UnicodeUTF8));
        managerCheckBox->setText(QApplication::translate("CtrlForm", "X11BypassWindowMagagerHint", 0, QApplication::UnicodeUTF8));
        minCheckBox->setText(QApplication::translate("CtrlForm", "WindowMinimizeButtonHint", 0, QApplication::UnicodeUTF8));
        topCheckBox->setText(QApplication::translate("CtrlForm", "WindowStaysOnTopHint", 0, QApplication::UnicodeUTF8));
        framelessCheckBox->setText(QApplication::translate("CtrlForm", "FramelessWindowHint", 0, QApplication::UnicodeUTF8));
        maxCheckBox->setText(QApplication::translate("CtrlForm", "WindowMaximizeButtonHint", 0, QApplication::UnicodeUTF8));
        customizeCheckBox->setText(QApplication::translate("CtrlForm", "CustomizeWindowHint", 0, QApplication::UnicodeUTF8));
        minmaxCheckBox->setText(QApplication::translate("CtrlForm", "WindowMinMaxButtonsHint", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CtrlForm: public Ui_CtrlForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CTRLFORM_H
