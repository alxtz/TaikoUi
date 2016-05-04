#include <QBrush>
#include <QImage>
#include "SongChooseScene.h"

SongChooseScene::SongChooseScene()
{
    setSceneRect(0 , 0 , 800 , 600);

    setBackgroundBrush(QBrush(QImage("./GameData/DefaultResources/images/songChooseBackground.png")));
}
