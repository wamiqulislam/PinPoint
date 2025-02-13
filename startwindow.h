#ifndef STARTWINDOW_H
#define STARTWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QAudioOutput>

namespace Ui {
class StartWindow;
}

class StartWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit StartWindow(QWidget *parent = nullptr);
    ~StartWindow();

signals:
    void start_to_main();
    void go_to_options();

private slots:

    void on_start_clicked();

    void on_options_clicked();

    void on_exit_clicked();

private:
    Ui::StartWindow *ui;
};

#endif
