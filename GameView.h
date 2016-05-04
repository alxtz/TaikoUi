#ifndef GAMEVIEW_H
#define GAMEVIEW_H


#include <QObject>
#include <QGraphicsView>
#include "StartMenuScene.h"

class GameView : public QGraphicsView
{
    Q_OBJECT

    public:
        GameView();
        StartMenuScene * startMenuScene;

    public slots:
        void setStartMenu();
        void setSongChoose();
};

#endif // GAMEVIEW_H
