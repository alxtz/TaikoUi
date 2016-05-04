#include <QPixmap>
#include "PlayButton.h"
#include "GameView.h"
#include "StartMenuScene.h"

extern GameView * gameView;

PlayButton::PlayButton()
{
    setPixmap(QPixmap("./GameData/DefaultResources/images/Play.png"));
    setPos(400 , 280);

    setAcceptHoverEvents(true);
    connect(this , SIGNAL(getPlay()) , gameView , SLOT(setSongChoose()));
}

void PlayButton::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    emit getPlay();
}

void PlayButton::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    setPixmap(QPixmap("./GameData/DefaultResources/images/PlayClicked.png"));
}

void PlayButton::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{
    setPixmap(QPixmap("./GameData/DefaultResources/images/Play.png"));
}
