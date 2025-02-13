#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>
#include <QString>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void easychecked(bool);
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void main_to_start();
    void go_to_options();

private slots:
    void on_mainmenu_clicked();
    void on_options_clicked();

private:
    Ui::MainWindow *ui;
    void setupMap();

    int easy = 1;
    int score;
    int tries;
    QString currentCity;
    QStringList remainingCities;
    QMap<QString, QString> cityInfo;
    QMap<QString, QPushButton*> cityButtons;

    void initializeGame();
    void selectRandomCity();
    void checkAnswer(QString cityName);
    void endGame();

};
#endif
