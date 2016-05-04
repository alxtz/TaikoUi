#include <QDebug>
#include <QBrush>
#include <QImage>
#include <QString>
#include <fstream>
#include <iostream>
#include <QMediaPlayer>
#include <QSound>
#include <QSoundEffect>
#include <QPixmap>
#include <QFileInfo>
#include "StartMenuScene.h"

using namespace std;

StartMenuScene::StartMenuScene()
{
    setSceneRect(0 , 0 , 800 , 600);


    ifstream lastSong("./GameData/GameSettings/lastSong.txt" , ios::in);

    if(!lastSong)
    {
        qDebug()<<"打開失敗";
    }

    lastSong >> lastSongName;

    cout<<lastSongName<<endl;

    string backgroundPath;
    backgroundPath = "./GameData/Oves/" + lastSongName + "/background.png";
    cout<<backgroundPath<<endl;

    string songPath;
    songPath = "./GameData/Oves/" + lastSongName + "/song.wav";
    cout<<songPath<<endl;

    qBackgroundPath = QString::fromStdString(backgroundPath);
    qMusicPath = QString::fromStdString(songPath);

    setBackground();
    setMusic();

    taikoIcon = new QGraphicsPixmapItem();
    taikoIcon->setPixmap(QPixmap("./GameData/DefaultResources/images/Taiko.png"));
    taikoIcon->setPos(150 , 170);
    taikoIcon->setZValue(20);
    addItem(taikoIcon);

    playButton = new PlayButton();
    addItem(playButton);

    //clear();
}

void StartMenuScene::setBackground()
{
    setBackgroundBrush(QBrush(QImage(qBackgroundPath)));
}

void StartMenuScene::setMusic()
{
    //QSound::play(qMusicPath);

    //QSound mm("./GameData/Oves/Together/song.wav");
    //mm.play();
    //QSound::play("./GameData/Oves/Together/song.wav");
    //QSoundEffect effect;
    //effect.setSource(QUrl::fromLocalFile(QFileInfo("./GameData/Oves/Together/song.wav").absoluteFilePath()));
    //effect.setLoopCount(QSoundEffect::Infinite);
    //effect.setVolume(0.25f);
    //effect.play();

    lastSongPlayer = new QMediaPlayer();
    lastSongPlayer->setMedia(QUrl::fromLocalFile(QFileInfo(qMusicPath).absoluteFilePath()));
    lastSongPlayer->play();
    //clearStartMenu();
}

void StartMenuScene::clearStartMenu()
{
    lastSongPlayer->stop();
}
