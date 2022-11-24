/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QLineEdit *x;
    QLabel *label_6;
    QLineEdit *y;
    QLabel *label_4;
    QLineEdit *height;
    QLabel *label_2;
    QLineEdit *lenght;
    QLabel *label_3;
    QLineEdit *width;
    QLabel *label_9;
    QLineEdit *radius;
    QCheckBox *isDish;
    QPushButton *PopButton;
    QPushButton *ClearButton;
    QLabel *label_8;
    QLineEdit *path;
    QCheckBox *isNeedToRead;
    QPushButton *LoadDumpData;
    QTableWidget *tableWidget;
    QLabel *label_7;
    QPushButton *addElement;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 10, 61, 21));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 1, 4, 1, 1);

        x = new QLineEdit(centralwidget);
        x->setObjectName(QString::fromUtf8("x"));

        gridLayout->addWidget(x, 1, 5, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 2, 4, 1, 1);

        y = new QLineEdit(centralwidget);
        y->setObjectName(QString::fromUtf8("y"));

        gridLayout->addWidget(y, 2, 5, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 3, 4, 1, 1);

        height = new QLineEdit(centralwidget);
        height->setObjectName(QString::fromUtf8("height"));

        gridLayout->addWidget(height, 3, 5, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 4, 4, 1, 1);

        lenght = new QLineEdit(centralwidget);
        lenght->setObjectName(QString::fromUtf8("lenght"));

        gridLayout->addWidget(lenght, 4, 5, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 5, 4, 1, 1);

        width = new QLineEdit(centralwidget);
        width->setObjectName(QString::fromUtf8("width"));

        gridLayout->addWidget(width, 5, 5, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 6, 4, 1, 1);

        radius = new QLineEdit(centralwidget);
        radius->setObjectName(QString::fromUtf8("radius"));

        gridLayout->addWidget(radius, 6, 5, 1, 1);

        isDish = new QCheckBox(centralwidget);
        isDish->setObjectName(QString::fromUtf8("isDish"));

        gridLayout->addWidget(isDish, 7, 5, 1, 1);

        PopButton = new QPushButton(centralwidget);
        PopButton->setObjectName(QString::fromUtf8("PopButton"));

        gridLayout->addWidget(PopButton, 9, 0, 1, 3);

        ClearButton = new QPushButton(centralwidget);
        ClearButton->setObjectName(QString::fromUtf8("ClearButton"));

        gridLayout->addWidget(ClearButton, 9, 3, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 10, 0, 1, 1);

        path = new QLineEdit(centralwidget);
        path->setObjectName(QString::fromUtf8("path"));

        gridLayout->addWidget(path, 10, 1, 1, 5);

        isNeedToRead = new QCheckBox(centralwidget);
        isNeedToRead->setObjectName(QString::fromUtf8("isNeedToRead"));

        gridLayout->addWidget(isNeedToRead, 11, 0, 1, 2);

        LoadDumpData = new QPushButton(centralwidget);
        LoadDumpData->setObjectName(QString::fromUtf8("LoadDumpData"));

        gridLayout->addWidget(LoadDumpData, 12, 2, 1, 2);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 0, 9, 4);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(label_7, 0, 5, 1, 1);

        addElement = new QPushButton(centralwidget);
        addElement->setObjectName(QString::fromUtf8("addElement"));

        gridLayout->addWidget(addElement, 8, 5, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 3);
        gridLayout->setRowStretch(2, 3);
        gridLayout->setRowStretch(3, 3);
        gridLayout->setRowStretch(4, 3);
        gridLayout->setRowStretch(5, 3);
        gridLayout->setRowStretch(6, 3);
        gridLayout->setRowStretch(7, 3);
        gridLayout->setRowStretch(8, 3);
        gridLayout->setRowStretch(9, 3);
        gridLayout->setRowStretch(10, 3);
        gridLayout->setRowStretch(11, 3);
        gridLayout->setRowStretch(12, 3);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);
        gridLayout->setColumnStretch(3, 3);
        gridLayout->setColumnStretch(4, 2);
        gridLayout->setColumnStretch(5, 2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "x:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "y:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Height:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Lenght:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Width:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Radius:", nullptr));
        isDish->setText(QCoreApplication::translate("MainWindow", "Dish", nullptr));
        PopButton->setText(QCoreApplication::translate("MainWindow", "Pop element", nullptr));
        ClearButton->setText(QCoreApplication::translate("MainWindow", "Clear all", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Path to data:", nullptr));
        isNeedToRead->setText(QCoreApplication::translate("MainWindow", "Read from this path", nullptr));
        LoadDumpData->setText(QCoreApplication::translate("MainWindow", "Load/dump data", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "New element:", nullptr));
        addElement->setText(QCoreApplication::translate("MainWindow", "Add element", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
