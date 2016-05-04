#include <QDebug>
#include <QBrush>
#include <QImage>
#include <fstream>
#include <iostream>
#include <QGraphicsScene>
#include "SongChooseScene.h"
#include "SongButton.h"

//using namespace std;

SongChooseScene::SongChooseScene()
{
    setSceneRect(0 , 0 , 800 , 600);

    setBackgroundBrush(QBrush(QImage("./GameData/DefaultResources/images/songChooseBackground.png")));

    loadSongList();

    cout<<"songList長度是"<<songList.size()<<endl;
}

void SongChooseScene::loadSongList()
{
    using namespace std;

    ifstream inputSongList("./GameData/GameSettings/songList.txt" , ios::in);

    if(!inputSongList)
    {
        qDebug()<<"打開lastSong.txt失敗";
    }

    for(int i=0; i<=100; i++)
    {
        string foo;

        if(inputSongList>>foo)
        {
            cout<<"讀入了"<<foo<<endl;
            songList.push_back(foo);
        }
        else
        {
            cout<<"讀檔結尾"<<endl;
            break;
        }
    }
}

void SongChooseScene::loadSongButtons()
{
    for(int i=0; i<songList.size(); i++)
    {
        QString foo = QString::fromStdString(songList.at(i));
        SongButton * songButton = new SongButton(foo);
        songButton->setPos(490 , 10 + 70*i);
        addItem(songButton);
    }
}
