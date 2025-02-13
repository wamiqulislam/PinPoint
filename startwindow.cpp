#include "startwindow.h"
#include "ui_startwindow.h"
#include <QMessageBox>

StartWindow::StartWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StartWindow)
{
    ui->setupUi(this);
}

StartWindow::~StartWindow()
{
    delete ui;
}

void StartWindow::on_start_clicked()
{
    emit start_to_main();
    close();
}

void StartWindow::on_options_clicked()
{
    emit go_to_options();
}

void StartWindow::on_exit_clicked()
{
    QApplication::quit();
}

