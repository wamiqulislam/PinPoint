/********************************************************************************
** Form generated from reading UI file 'optionswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSWINDOW_H
#define UI_OPTIONSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionsWindow
{
public:
    QWidget *centralwidget;
    QPushButton *close;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSlider *volumeslider;
    QLabel *volumepercentage;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *mute;
    QPushButton *audio1;
    QPushButton *audio2;
    QPushButton *audio3;
    QPushButton *audio4;
    QCheckBox *hard;
    QMenuBar *menubar;

    void setupUi(QMainWindow *OptionsWindow)
    {
        if (OptionsWindow->objectName().isEmpty())
            OptionsWindow->setObjectName("OptionsWindow");
        OptionsWindow->resize(568, 613);
        OptionsWindow->setMaximumSize(QSize(568, 613));
        OptionsWindow->setStyleSheet(QString::fromUtf8("QSlider{\n"
"color: black;\n"
"}"));
        centralwidget = new QWidget(OptionsWindow);
        centralwidget->setObjectName("centralwidget");
        close = new QPushButton(centralwidget);
        close->setObjectName("close");
        close->setGeometry(QRect(235, 470, 101, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        close->setFont(font);
        close->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 140, 551, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"    background-color: #d9990f;\n"
"    border: 2px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}"));

        horizontalLayout_2->addWidget(label);

        volumeslider = new QSlider(layoutWidget);
        volumeslider->setObjectName("volumeslider");
        volumeslider->setStyleSheet(QString::fromUtf8("QSlider{\n"
"background: gray;\n"
"	color: white;\n"
"    background-color: gray;\n"
"    border: 2px solid rgb(102, 102, 102);\n"
"    border-radius: 5px;\n"
"}\n"
"\n"
"QSlider::handle{\n"
"    background-color: #d9990f;\n"
"    border: 2px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}"));
        volumeslider->setMaximum(100);
        volumeslider->setValue(50);
        volumeslider->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_2->addWidget(volumeslider);

        volumepercentage = new QLabel(layoutWidget);
        volumepercentage->setObjectName("volumepercentage");
        volumepercentage->setFont(font1);
        volumepercentage->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"    background-color: #d9990f;\n"
"    border: 2px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}"));

        horizontalLayout_2->addWidget(volumepercentage);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 568, 613));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Graphics/compassmap.png")));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(180, 30, 231, 81));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Graphics/optionsorange.png")));
        mute = new QCheckBox(centralwidget);
        mute->setObjectName("mute");
        mute->setGeometry(QRect(16, 260, 101, 21));
        mute->setFont(font1);
        mute->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"	color: white;\n"
"    background-color: #d9990f;\n"
"    border: 2px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        audio1 = new QPushButton(centralwidget);
        audio1->setObjectName("audio1");
        audio1->setGeometry(QRect(127, 260, 101, 21));
        audio1->setFont(font1);
        audio1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        audio2 = new QPushButton(centralwidget);
        audio2->setObjectName("audio2");
        audio2->setGeometry(QRect(238, 260, 101, 21));
        audio2->setFont(font1);
        audio2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        audio3 = new QPushButton(centralwidget);
        audio3->setObjectName("audio3");
        audio3->setGeometry(QRect(349, 260, 101, 21));
        audio3->setFont(font1);
        audio3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        audio4 = new QPushButton(centralwidget);
        audio4->setObjectName("audio4");
        audio4->setGeometry(QRect(460, 260, 101, 21));
        audio4->setFont(font1);
        audio4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        hard = new QCheckBox(centralwidget);
        hard->setObjectName("hard");
        hard->setGeometry(QRect(235, 360, 108, 25));
        hard->setFont(font1);
        hard->setStyleSheet(QString::fromUtf8("QCheckBox{\n"
"	color: white;\n"
"    background-color: #d9990f;\n"
"    border: 2px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
""));
        hard->setChecked(false);
        OptionsWindow->setCentralWidget(centralwidget);
        label_2->raise();
        close->raise();
        layoutWidget->raise();
        label_3->raise();
        mute->raise();
        audio1->raise();
        audio2->raise();
        audio3->raise();
        audio4->raise();
        hard->raise();
        menubar = new QMenuBar(OptionsWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 568, 22));
        OptionsWindow->setMenuBar(menubar);

        retranslateUi(OptionsWindow);

        QMetaObject::connectSlotsByName(OptionsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *OptionsWindow)
    {
        OptionsWindow->setWindowTitle(QCoreApplication::translate("OptionsWindow", "Options", nullptr));
        close->setText(QCoreApplication::translate("OptionsWindow", "Close", nullptr));
        label->setText(QCoreApplication::translate("OptionsWindow", "Volume", nullptr));
        volumepercentage->setText(QCoreApplication::translate("OptionsWindow", "50%", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        mute->setText(QCoreApplication::translate("OptionsWindow", "Mute", nullptr));
        audio1->setText(QCoreApplication::translate("OptionsWindow", "Audio 1", nullptr));
        audio2->setText(QCoreApplication::translate("OptionsWindow", "Audio 2", nullptr));
        audio3->setText(QCoreApplication::translate("OptionsWindow", "Audio 3", nullptr));
        audio4->setText(QCoreApplication::translate("OptionsWindow", "Audio 4", nullptr));
        hard->setText(QCoreApplication::translate("OptionsWindow", "Hard Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionsWindow: public Ui_OptionsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSWINDOW_H
