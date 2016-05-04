#ifndef STARTMENUSCENE_H
#define STARTMENUSCENE_H


#include <string>
#include <QObject>
#include <QMediaPlayer>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include "PlayButton.h"

using namespace std;

class StartMenuScene : public QGraphicsScene
{
    Q_OBJECT

    public:
        StartMenuScene();

    private:
        QString qBackgroundPath;
        QString qMusicPath;
        string lastSongName;
        void setBackground();
        void setMusic();
        QGraphicsPixmapItem * taikoIcon;
        PlayButton * playButton;
        QMediaPlayer * lastSongPlayer;

    public slots:
        void clearStartMenu();
};

#endif // STARTMENUSCENE_H
