#include "mainwindow.h"
#include "startwindow.h"
#include "optionswindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    StartWindow startWindow;
    MainWindow mainWindow;
    OptionsWindow optionsWindow;
    startWindow.show();
    //connections between different windows (using signal from one window to show/hide other windows)
    QObject::connect(&startWindow, &StartWindow::start_to_main, [&mainWindow]() {
        mainWindow.show();
    });
    QObject::connect(&startWindow, &StartWindow::start_to_main, [&optionsWindow]() {
        optionsWindow.hide();
    });
    QObject::connect(&startWindow, &StartWindow::go_to_options, [&optionsWindow]() {
        optionsWindow.show();
    });
    QObject::connect(&mainWindow, &MainWindow::go_to_options, [&optionsWindow]() {
        optionsWindow.show();
    });
    QObject::connect(&mainWindow, &MainWindow::main_to_start, [&startWindow]() {
        startWindow.show();
    });
    //for sending diffulty mode info from options window to game window
    QObject::connect(&optionsWindow, &OptionsWindow::easychecked, &mainWindow, &MainWindow::easychecked);
    //for hiding difficulty toggle during game and showing when game is not running
    QObject::connect(&mainWindow, &MainWindow::go_to_options, &optionsWindow, &OptionsWindow::hideDifficulty);
    QObject::connect(&startWindow, &StartWindow::go_to_options, &optionsWindow, &OptionsWindow::showDifficulty); 
    return a.exec();
}
