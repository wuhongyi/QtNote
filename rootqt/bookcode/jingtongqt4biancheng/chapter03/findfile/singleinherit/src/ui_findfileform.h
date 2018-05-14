/********************************************************************************
** Form generated from reading UI file 'findfileform.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDFILEFORM_H
#define UI_FINDFILEFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindFileForm
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *frame;
    QVBoxLayout *vboxLayout1;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *nameComboBox;
    QLabel *label_2;
    QLineEdit *txtLineEdit;
    QLabel *label_3;
    QComboBox *dirComboBox;
    QPushButton *browsePushBtn;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QCheckBox *sensitiveCheckBox;
    QCheckBox *subfolderCheckBox;
    QSpacerItem *spacerItem1;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem2;
    QPushButton *findPushBtn;
    QSpacerItem *spacerItem3;
    QPushButton *stopPushBtn;
    QSpacerItem *spacerItem4;
    QPushButton *closePushBtn;
    QSpacerItem *spacerItem5;
    QLabel *label_4;
    QTableWidget *resultTableWidget;
    QHBoxLayout *hboxLayout2;
    QLabel *statusLabel;
    QLabel *resultLabel;

    void setupUi(QWidget *FindFileForm)
    {
        if (FindFileForm->objectName().isEmpty())
            FindFileForm->setObjectName(QString::fromUtf8("FindFileForm"));
        FindFileForm->resize(498, 464);
        const QIcon icon = QIcon(QString::fromUtf8(":/new/prefix1/findfile.png"));
        FindFileForm->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(FindFileForm);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        frame = new QFrame(FindFileForm);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frame);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        nameComboBox = new QComboBox(frame);
        nameComboBox->setObjectName(QString::fromUtf8("nameComboBox"));
        nameComboBox->setEditable(true);

        gridLayout->addWidget(nameComboBox, 0, 1, 1, 2);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        txtLineEdit = new QLineEdit(frame);
        txtLineEdit->setObjectName(QString::fromUtf8("txtLineEdit"));

        gridLayout->addWidget(txtLineEdit, 1, 1, 1, 2);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        dirComboBox = new QComboBox(frame);
        dirComboBox->setObjectName(QString::fromUtf8("dirComboBox"));
        dirComboBox->setEditable(true);

        gridLayout->addWidget(dirComboBox, 2, 1, 1, 1);

        browsePushBtn = new QPushButton(frame);
        browsePushBtn->setObjectName(QString::fromUtf8("browsePushBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(browsePushBtn->sizePolicy().hasHeightForWidth());
        browsePushBtn->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(browsePushBtn, 2, 2, 1, 1);


        vboxLayout1->addLayout(gridLayout);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        sensitiveCheckBox = new QCheckBox(frame);
        sensitiveCheckBox->setObjectName(QString::fromUtf8("sensitiveCheckBox"));

        hboxLayout->addWidget(sensitiveCheckBox);

        subfolderCheckBox = new QCheckBox(frame);
        subfolderCheckBox->setObjectName(QString::fromUtf8("subfolderCheckBox"));

        hboxLayout->addWidget(subfolderCheckBox);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        vboxLayout1->addLayout(hboxLayout);


        vboxLayout->addWidget(frame);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        findPushBtn = new QPushButton(FindFileForm);
        findPushBtn->setObjectName(QString::fromUtf8("findPushBtn"));

        hboxLayout1->addWidget(findPushBtn);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);

        stopPushBtn = new QPushButton(FindFileForm);
        stopPushBtn->setObjectName(QString::fromUtf8("stopPushBtn"));

        hboxLayout1->addWidget(stopPushBtn);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem4);

        closePushBtn = new QPushButton(FindFileForm);
        closePushBtn->setObjectName(QString::fromUtf8("closePushBtn"));

        hboxLayout1->addWidget(closePushBtn);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem5);


        vboxLayout->addLayout(hboxLayout1);

        label_4 = new QLabel(FindFileForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        vboxLayout->addWidget(label_4);

        resultTableWidget = new QTableWidget(FindFileForm);
        if (resultTableWidget->columnCount() < 4)
            resultTableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        resultTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        resultTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        resultTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        resultTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        resultTableWidget->setObjectName(QString::fromUtf8("resultTableWidget"));

        vboxLayout->addWidget(resultTableWidget);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        statusLabel = new QLabel(FindFileForm);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy2);
        statusLabel->setFrameShape(QFrame::WinPanel);
        statusLabel->setFrameShadow(QFrame::Sunken);

        hboxLayout2->addWidget(statusLabel);

        resultLabel = new QLabel(FindFileForm);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(3);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(resultLabel->sizePolicy().hasHeightForWidth());
        resultLabel->setSizePolicy(sizePolicy3);
        resultLabel->setFrameShape(QFrame::WinPanel);
        resultLabel->setFrameShadow(QFrame::Sunken);

        hboxLayout2->addWidget(resultLabel);


        vboxLayout->addLayout(hboxLayout2);


        retranslateUi(FindFileForm);

        QMetaObject::connectSlotsByName(FindFileForm);
    } // setupUi

    void retranslateUi(QWidget *FindFileForm)
    {
        FindFileForm->setWindowTitle(QApplication::translate("FindFileForm", "\346\237\245\346\211\276\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FindFileForm", "\345\220\215\344\270\272\357\274\232", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("FindFileForm", "\345\214\205\345\220\253\346\226\207\346\234\254\357\274\232", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FindFileForm", "\346\237\245\346\211\276\344\275\215\347\275\256\357\274\232", 0, QApplication::UnicodeUTF8));
        browsePushBtn->setText(QApplication::translate("FindFileForm", "\346\265\217\350\247\210...", 0, QApplication::UnicodeUTF8));
        sensitiveCheckBox->setText(QApplication::translate("FindFileForm", "\345\214\272\345\210\206\345\244\247\345\260\217\345\206\231", 0, QApplication::UnicodeUTF8));
        subfolderCheckBox->setText(QApplication::translate("FindFileForm", "\345\214\205\345\220\253\345\255\220\346\226\207\344\273\266\345\244\271", 0, QApplication::UnicodeUTF8));
        findPushBtn->setText(QApplication::translate("FindFileForm", "\346\237\245\346\211\276", 0, QApplication::UnicodeUTF8));
        stopPushBtn->setText(QApplication::translate("FindFileForm", "\345\201\234\346\255\242", 0, QApplication::UnicodeUTF8));
        closePushBtn->setText(QApplication::translate("FindFileForm", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("FindFileForm", "\346\237\245\346\211\276\347\273\223\346\236\234", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = resultTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("FindFileForm", "\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = resultTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("FindFileForm", "\345\244\247\345\260\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = resultTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("FindFileForm", "\344\277\256\346\224\271\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = resultTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("FindFileForm", "\346\235\203\351\231\220", 0, QApplication::UnicodeUTF8));
        statusLabel->setText(QApplication::translate("FindFileForm", "\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        resultLabel->setText(QApplication::translate("FindFileForm", "\346\237\245\346\211\276\347\273\223\346\236\234", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FindFileForm: public Ui_FindFileForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDFILEFORM_H
