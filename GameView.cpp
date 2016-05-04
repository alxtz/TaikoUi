#include "GameView.h"
#include "SongChooseScene.h"
#include "StartMenuScene.h"

GameView::GameView()
{
    setFixedSize(800 , 600);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

void GameView::setStartMenu()
{
    startMenuScene = new StartMenuScene();
    setScene(startMenuScene);
}

void GameView::setSongChoose()
{
    SongChooseScene * songChooseScene = new SongChooseScene();
    setScene(songChooseScene);

    songChooseScene->loadSongButtons();
}
