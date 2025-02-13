#ifndef OPTIONSWINDOW_H
#define OPTIONSWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QAudioOutput>

namespace Ui {
class OptionsWindow;
}

class OptionsWindow : public QMainWindow
{
    Q_OBJECT

public:
    void hideDifficulty();
    void showDifficulty();

    explicit OptionsWindow(QWidget *parent = nullptr);
    ~OptionsWindow();
signals:
    void easychecked(bool);

private slots:
    void on_volumeslider_valueChanged(int value);
    void on_close_clicked();
    void on_mute_toggled(bool checked);
    void on_hard_toggled(bool checked);

    void on_audio1_clicked();
    void on_audio2_clicked();
    void on_audio3_clicked();
    void on_audio4_clicked();

private:
    QMediaPlayer *player;
    QAudioOutput *audioOutput;
    Ui::OptionsWindow *ui;
};

#endif // OPTIONSWINDOW_H
