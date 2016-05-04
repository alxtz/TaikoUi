#include <QApplication>
#include "GameView.h"

GameView * gameView;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QCoreApplication::setApplicationName("太鼓達人");

    gameView = new GameView();
    gameView->show();
    gameView->setStartMenu();

    return a.exec();
}
