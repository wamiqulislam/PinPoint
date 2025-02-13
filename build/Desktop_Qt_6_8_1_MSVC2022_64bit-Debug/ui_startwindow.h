/********************************************************************************
** Form generated from reading UI file 'startwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTWINDOW_H
#define UI_STARTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *label;
    QPushButton *start;
    QPushButton *options;
    QPushButton *exit;
    QMenuBar *menubar;

    void setupUi(QMainWindow *StartWindow)
    {
        if (StartWindow->objectName().isEmpty())
            StartWindow->setObjectName("StartWindow");
        StartWindow->setWindowModality(Qt::WindowModality::WindowModal);
        StartWindow->resize(568, 613);
        StartWindow->setMaximumSize(QSize(568, 613));
        StartWindow->setAutoFillBackground(false);
        StartWindow->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"background: blue;\n"
"\n"
"}"));
        centralwidget = new QWidget(StartWindow);
        centralwidget->setObjectName("centralwidget");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 568, 613));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Graphics/oldmap.png")));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 110, 361, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(48);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Graphics/title.png")));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        start = new QPushButton(centralwidget);
        start->setObjectName("start");
        start->setGeometry(QRect(142, 260, 284, 30));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        start->setFont(font1);
        start->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"    background-color: #d9990f;\n"
"    border: 2px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 2px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 2px solid #997603;\n"
"}\n"
""));
        options = new QPushButton(centralwidget);
        options->setObjectName("options");
        options->setGeometry(QRect(142, 310, 284, 30));
        options->setFont(font1);
        options->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"    background-color: #d9990f;\n"
"    border: 2px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 2px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 2px solid #997603;\n"
"}\n"
""));
        exit = new QPushButton(centralwidget);
        exit->setObjectName("exit");
        exit->setGeometry(QRect(142, 360, 284, 30));
        exit->setFont(font1);
        exit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"    background-color: #d9990f;\n"
"    border: 2px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 2px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 2px solid #997603;\n"
"}\n"
""));
        StartWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(StartWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 568, 22));
        StartWindow->setMenuBar(menubar);

        retranslateUi(StartWindow);

        QMetaObject::connectSlotsByName(StartWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StartWindow)
    {
        StartWindow->setWindowTitle(QCoreApplication::translate("StartWindow", "Pin Point", nullptr));
        label_2->setText(QString());
        label->setText(QString());
        start->setText(QCoreApplication::translate("StartWindow", "Start", nullptr));
        options->setText(QCoreApplication::translate("StartWindow", "Options", nullptr));
        exit->setText(QCoreApplication::translate("StartWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartWindow: public Ui_StartWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTWINDOW_H
