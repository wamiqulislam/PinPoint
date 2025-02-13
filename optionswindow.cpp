#include "optionswindow.h"
#include "ui_optionswindow.h"
#include <Qstring>



OptionsWindow::OptionsWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::OptionsWindow)
{
    player = new QMediaPlayer(this);
    audioOutput = new QAudioOutput(this);

    player->setAudioOutput(audioOutput);
    player->setSource(QUrl("qrc:/Music/Cat-C418.mp3"));
    audioOutput->setVolume(0.5);
    player->setLoops(-1);
    player->play();

    ui->setupUi(this);
}

OptionsWindow::~OptionsWindow()
{
    delete player;
    delete audioOutput;
    delete ui;
}

void OptionsWindow::on_volumeslider_valueChanged(int value)
{
    ui->volumepercentage->setText(QString::number(value) + "%");
    audioOutput->setVolume(value/100.0);
}

void OptionsWindow::on_mute_toggled(bool checked)
{
    audioOutput->setMuted(checked);
}

void OptionsWindow::on_audio1_clicked()
{
    player->setSource(QUrl("qrc:/Music/Aria_math-C418.mp3"));
    player->play();
}

void OptionsWindow::on_audio2_clicked()
{
    player->setSource(QUrl("qrc:/Music/Cat-C418.mp3"));
    player->play();
}

void OptionsWindow::on_audio3_clicked()
{
    player->setSource(QUrl("qrc:/Music/Erika.mp3"));
    player->play();
}

void OptionsWindow::on_audio4_clicked()
{
    player->setSource(QUrl("qrc:/Music/PeppaPig.mp3"));
    player->play();
}

void OptionsWindow::on_hard_toggled(bool checked)
{
    if(checked)
        emit easychecked(false);
    else
        emit easychecked(true);
}


void OptionsWindow::hideDifficulty()
{
    ui->hard->hide();
}
void OptionsWindow::showDifficulty()
{
    ui->hard->show();
}

void OptionsWindow::on_close_clicked()
{
    close();
}
