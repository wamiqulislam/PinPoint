/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *city;
    QLabel *map;
    QPushButton *islamabad;
    QPushButton *rawalpindi;
    QPushButton *gilgit;
    QPushButton *skardu;
    QPushButton *muzaffarabad;
    QPushButton *chitral;
    QPushButton *abbottabad;
    QPushButton *murree;
    QPushButton *mardan;
    QPushButton *attock;
    QPushButton *bannu;
    QPushButton *mandibahauddin;
    QPushButton *gujranwala;
    QPushButton *jhelum;
    QPushButton *peshawar;
    QPushButton *sialkot;
    QPushButton *dikhan;
    QPushButton *lahore;
    QPushButton *faisalabad;
    QPushButton *rahimyarkhan;
    QPushButton *khushab;
    QPushButton *sargodha;
    QPushButton *bahawalpur;
    QPushButton *dgkhan;
    QPushButton *multan;
    QPushButton *bahawalnagar;
    QPushButton *sahiwal;
    QPushButton *jhang;
    QPushButton *loralai;
    QPushButton *quetta;
    QPushButton *hyderabad;
    QPushButton *nawabshah;
    QPushButton *larkana;
    QPushButton *sukkur;
    QPushButton *chaghai;
    QPushButton *chaman;
    QPushButton *gwadar;
    QPushButton *karachi;
    QLabel *info;
    QLabel *tries;
    QLabel *score;
    QPushButton *mainmenu;
    QLabel *info_background;
    QPushButton *options;
    QLabel *feedback;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(568, 613);
        MainWindow->setMaximumSize(QSize(568, 613));
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        city = new QLabel(centralwidget);
        city->setObjectName("city");
        city->setGeometry(QRect(0, 468, 568, 100));
        QFont font;
        font.setFamilies({QString::fromUtf8("HoloLens MDL2 Assets")});
        font.setPointSize(22);
        city->setFont(font);
        city->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background: #305275;\n"
"	color: white;\n"
" 	border: 5px solid black;\n"
"}"));
        city->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        map = new QLabel(centralwidget);
        map->setObjectName("map");
        map->setGeometry(QRect(0, 0, 568, 468));
        map->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        map->setStyleSheet(QString::fromUtf8("Qlabel{\n"
"border: 5px solid brown;\n"
"}"));
        map->setPixmap(QPixmap(QString::fromUtf8(":/Graphics/Pakistan map.jpg")));
        islamabad = new QPushButton(centralwidget);
        islamabad->setObjectName("islamabad");
        islamabad->setEnabled(true);
        islamabad->setGeometry(QRect(366, 120, 10, 10));
        islamabad->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        rawalpindi = new QPushButton(centralwidget);
        rawalpindi->setObjectName("rawalpindi");
        rawalpindi->setEnabled(true);
        rawalpindi->setGeometry(QRect(363, 130, 10, 10));
        rawalpindi->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        gilgit = new QPushButton(centralwidget);
        gilgit->setObjectName("gilgit");
        gilgit->setEnabled(true);
        gilgit->setGeometry(QRect(395, 52, 10, 10));
        gilgit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        skardu = new QPushButton(centralwidget);
        skardu->setObjectName("skardu");
        skardu->setEnabled(true);
        skardu->setGeometry(QRect(430, 65, 10, 10));
        skardu->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        muzaffarabad = new QPushButton(centralwidget);
        muzaffarabad->setObjectName("muzaffarabad");
        muzaffarabad->setEnabled(true);
        muzaffarabad->setGeometry(QRect(382, 102, 10, 10));
        muzaffarabad->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        chitral = new QPushButton(centralwidget);
        chitral->setObjectName("chitral");
        chitral->setEnabled(true);
        chitral->setGeometry(QRect(330, 50, 10, 10));
        chitral->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        abbottabad = new QPushButton(centralwidget);
        abbottabad->setObjectName("abbottabad");
        abbottabad->setEnabled(true);
        abbottabad->setGeometry(QRect(370, 104, 10, 10));
        abbottabad->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        murree = new QPushButton(centralwidget);
        murree->setObjectName("murree");
        murree->setEnabled(true);
        murree->setGeometry(QRect(376, 115, 10, 10));
        murree->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        mardan = new QPushButton(centralwidget);
        mardan->setObjectName("mardan");
        mardan->setEnabled(true);
        mardan->setGeometry(QRect(330, 110, 10, 10));
        mardan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        attock = new QPushButton(centralwidget);
        attock->setObjectName("attock");
        attock->setEnabled(true);
        attock->setGeometry(QRect(350, 120, 10, 10));
        attock->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        bannu = new QPushButton(centralwidget);
        bannu->setObjectName("bannu");
        bannu->setEnabled(true);
        bannu->setGeometry(QRect(300, 150, 10, 10));
        bannu->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        mandibahauddin = new QPushButton(centralwidget);
        mandibahauddin->setObjectName("mandibahauddin");
        mandibahauddin->setEnabled(true);
        mandibahauddin->setGeometry(QRect(376, 157, 10, 10));
        mandibahauddin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        gujranwala = new QPushButton(centralwidget);
        gujranwala->setObjectName("gujranwala");
        gujranwala->setEnabled(true);
        gujranwala->setGeometry(QRect(397, 172, 10, 10));
        gujranwala->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        jhelum = new QPushButton(centralwidget);
        jhelum->setObjectName("jhelum");
        jhelum->setEnabled(true);
        jhelum->setGeometry(QRect(389, 148, 10, 10));
        jhelum->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        peshawar = new QPushButton(centralwidget);
        peshawar->setObjectName("peshawar");
        peshawar->setEnabled(true);
        peshawar->setGeometry(QRect(316, 118, 10, 10));
        peshawar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        sialkot = new QPushButton(centralwidget);
        sialkot->setObjectName("sialkot");
        sialkot->setEnabled(true);
        sialkot->setGeometry(QRect(410, 160, 10, 10));
        sialkot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        dikhan = new QPushButton(centralwidget);
        dikhan->setObjectName("dikhan");
        dikhan->setEnabled(true);
        dikhan->setGeometry(QRect(307, 180, 10, 10));
        dikhan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        lahore = new QPushButton(centralwidget);
        lahore->setObjectName("lahore");
        lahore->setEnabled(true);
        lahore->setGeometry(QRect(403, 192, 10, 10));
        lahore->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        faisalabad = new QPushButton(centralwidget);
        faisalabad->setObjectName("faisalabad");
        faisalabad->setEnabled(true);
        faisalabad->setGeometry(QRect(370, 192, 10, 10));
        faisalabad->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        rahimyarkhan = new QPushButton(centralwidget);
        rahimyarkhan->setObjectName("rahimyarkhan");
        rahimyarkhan->setEnabled(true);
        rahimyarkhan->setGeometry(QRect(290, 300, 10, 10));
        rahimyarkhan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        khushab = new QPushButton(centralwidget);
        khushab->setObjectName("khushab");
        khushab->setEnabled(true);
        khushab->setGeometry(QRect(347, 166, 10, 10));
        khushab->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        sargodha = new QPushButton(centralwidget);
        sargodha->setObjectName("sargodha");
        sargodha->setEnabled(true);
        sargodha->setGeometry(QRect(358, 172, 10, 10));
        sargodha->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        bahawalpur = new QPushButton(centralwidget);
        bahawalpur->setObjectName("bahawalpur");
        bahawalpur->setEnabled(true);
        bahawalpur->setGeometry(QRect(333, 264, 10, 10));
        bahawalpur->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        dgkhan = new QPushButton(centralwidget);
        dgkhan->setObjectName("dgkhan");
        dgkhan->setEnabled(true);
        dgkhan->setGeometry(QRect(301, 244, 10, 10));
        dgkhan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        multan = new QPushButton(centralwidget);
        multan->setObjectName("multan");
        multan->setEnabled(true);
        multan->setGeometry(QRect(323, 240, 10, 10));
        multan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        bahawalnagar = new QPushButton(centralwidget);
        bahawalnagar->setObjectName("bahawalnagar");
        bahawalnagar->setEnabled(true);
        bahawalnagar->setGeometry(QRect(372, 245, 10, 10));
        bahawalnagar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        sahiwal = new QPushButton(centralwidget);
        sahiwal->setObjectName("sahiwal");
        sahiwal->setEnabled(true);
        sahiwal->setGeometry(QRect(370, 220, 10, 10));
        sahiwal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        jhang = new QPushButton(centralwidget);
        jhang->setObjectName("jhang");
        jhang->setEnabled(true);
        jhang->setGeometry(QRect(344, 199, 10, 10));
        jhang->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        loralai = new QPushButton(centralwidget);
        loralai->setObjectName("loralai");
        loralai->setEnabled(true);
        loralai->setGeometry(QRect(240, 230, 10, 10));
        loralai->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        quetta = new QPushButton(centralwidget);
        quetta->setObjectName("quetta");
        quetta->setEnabled(true);
        quetta->setGeometry(QRect(199, 237, 10, 10));
        quetta->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        hyderabad = new QPushButton(centralwidget);
        hyderabad->setObjectName("hyderabad");
        hyderabad->setEnabled(true);
        hyderabad->setGeometry(QRect(236, 400, 10, 10));
        hyderabad->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        nawabshah = new QPushButton(centralwidget);
        nawabshah->setObjectName("nawabshah");
        nawabshah->setEnabled(true);
        nawabshah->setGeometry(QRect(238, 372, 10, 10));
        nawabshah->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        larkana = new QPushButton(centralwidget);
        larkana->setObjectName("larkana");
        larkana->setEnabled(true);
        larkana->setGeometry(QRect(231, 324, 10, 10));
        larkana->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        sukkur = new QPushButton(centralwidget);
        sukkur->setObjectName("sukkur");
        sukkur->setEnabled(true);
        sukkur->setGeometry(QRect(248, 318, 10, 10));
        sukkur->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        chaghai = new QPushButton(centralwidget);
        chaghai->setObjectName("chaghai");
        chaghai->setEnabled(true);
        chaghai->setGeometry(QRect(132, 270, 10, 10));
        chaghai->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        chaman = new QPushButton(centralwidget);
        chaman->setObjectName("chaman");
        chaman->setEnabled(true);
        chaman->setGeometry(QRect(185, 224, 10, 10));
        chaman->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        gwadar = new QPushButton(centralwidget);
        gwadar->setObjectName("gwadar");
        gwadar->setEnabled(true);
        gwadar->setGeometry(QRect(58, 396, 10, 10));
        gwadar->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        karachi = new QPushButton(centralwidget);
        karachi->setObjectName("karachi");
        karachi->setEnabled(true);
        karachi->setGeometry(QRect(200, 410, 10, 10));
        karachi->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #d9990f;\n"
"    border: 1px solid #a36b02;\n"
"    border-radius: 5px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #e6c41c; \n"
"  border: 1px solid #a38802;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:#c7a20c; \n"
"    border: 1px solid #997603;\n"
"}\n"
""));
        info = new QLabel(centralwidget);
        info->setObjectName("info");
        info->setGeometry(QRect(0, 563, 568, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("HoloLens MDL2 Assets")});
        font1.setPointSize(10);
        info->setFont(font1);
        info->setStyleSheet(QString::fromUtf8("QLabel {\n"
" color: white;\n"
"  border: 5px solid  black;	\n"
"}"));
        info->setAlignment(Qt::AlignmentFlag::AlignCenter);
        tries = new QLabel(centralwidget);
        tries->setObjectName("tries");
        tries->setGeometry(QRect(10, 520, 151, 35));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("HoloLens MDL2 Assets")});
        font2.setPointSize(22);
        font2.setBold(false);
        font2.setItalic(false);
        tries->setFont(font2);
        tries->setStyleSheet(QString::fromUtf8("QLabel {\n"
" color: white;\n"
"}"));
        score = new QLabel(centralwidget);
        score->setObjectName("score");
        score->setGeometry(QRect(10, 480, 141, 35));
        score->setFont(font2);
        score->setStyleSheet(QString::fromUtf8("QLabel {\n"
" color: white;\n"
"}"));
        mainmenu = new QPushButton(centralwidget);
        mainmenu->setObjectName("mainmenu");
        mainmenu->setGeometry(QRect(470, 483, 81, 31));
        mainmenu->setMaximumSize(QSize(568, 613));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        mainmenu->setFont(font3);
        mainmenu->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        info_background = new QLabel(centralwidget);
        info_background->setObjectName("info_background");
        info_background->setGeometry(QRect(0, 563, 568, 50));
        info_background->setFont(font1);
        info_background->setStyleSheet(QString::fromUtf8("QLabel {\n"
" color: white;\n"
"  border: 5px solid black;\n"
"}"));
        info_background->setPixmap(QPixmap(QString::fromUtf8(":/Graphics/wood1.jpg")));
        info_background->setAlignment(Qt::AlignmentFlag::AlignCenter);
        options = new QPushButton(centralwidget);
        options->setObjectName("options");
        options->setGeometry(QRect(470, 520, 81, 31));
        options->setFont(font3);
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
        feedback = new QLabel(centralwidget);
        feedback->setObjectName("feedback");
        feedback->setGeometry(QRect(157, 530, 251, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("HoloLens MDL2 Assets")});
        font4.setPointSize(14);
        feedback->setFont(font4);
        feedback->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: rgb(0, 255, 0); \n"
"}"));
        feedback->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        city->raise();
        info_background->raise();
        map->raise();
        islamabad->raise();
        rawalpindi->raise();
        gilgit->raise();
        skardu->raise();
        muzaffarabad->raise();
        chitral->raise();
        abbottabad->raise();
        murree->raise();
        mardan->raise();
        attock->raise();
        bannu->raise();
        mandibahauddin->raise();
        gujranwala->raise();
        jhelum->raise();
        peshawar->raise();
        sialkot->raise();
        dikhan->raise();
        lahore->raise();
        faisalabad->raise();
        rahimyarkhan->raise();
        khushab->raise();
        sargodha->raise();
        bahawalpur->raise();
        dgkhan->raise();
        multan->raise();
        bahawalnagar->raise();
        sahiwal->raise();
        jhang->raise();
        loralai->raise();
        quetta->raise();
        hyderabad->raise();
        nawabshah->raise();
        larkana->raise();
        sukkur->raise();
        chaghai->raise();
        chaman->raise();
        gwadar->raise();
        karachi->raise();
        info->raise();
        tries->raise();
        score->raise();
        mainmenu->raise();
        options->raise();
        feedback->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Pin Point", nullptr));
        city->setText(QCoreApplication::translate("MainWindow", "City", nullptr));
        map->setText(QString());
        islamabad->setText(QString());
        rawalpindi->setText(QString());
        gilgit->setText(QString());
        skardu->setText(QString());
        muzaffarabad->setText(QString());
        chitral->setText(QString());
        abbottabad->setText(QString());
        murree->setText(QString());
        mardan->setText(QString());
        attock->setText(QString());
        bannu->setText(QString());
        mandibahauddin->setText(QString());
        gujranwala->setText(QString());
        jhelum->setText(QString());
        peshawar->setText(QString());
        sialkot->setText(QString());
        dikhan->setText(QString());
        lahore->setText(QString());
        faisalabad->setText(QString());
        rahimyarkhan->setText(QString());
        khushab->setText(QString());
        sargodha->setText(QString());
        bahawalpur->setText(QString());
        dgkhan->setText(QString());
        multan->setText(QString());
        bahawalnagar->setText(QString());
        sahiwal->setText(QString());
        jhang->setText(QString());
        loralai->setText(QString());
        quetta->setText(QString());
        hyderabad->setText(QString());
        nawabshah->setText(QString());
        larkana->setText(QString());
        sukkur->setText(QString());
        chaghai->setText(QString());
        chaman->setText(QString());
        gwadar->setText(QString());
        karachi->setText(QString());
        info->setText(QCoreApplication::translate("MainWindow", "City", nullptr));
        tries->setText(QCoreApplication::translate("MainWindow", "Tries: \342\231\245 \342\231\245 \342\231\245", nullptr));
        score->setText(QCoreApplication::translate("MainWindow", "Score: 0", nullptr));
        mainmenu->setText(QCoreApplication::translate("MainWindow", "Main Menu", nullptr));
        info_background->setText(QString());
        options->setText(QCoreApplication::translate("MainWindow", "Options", nullptr));
        feedback->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
