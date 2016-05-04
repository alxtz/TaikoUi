#ifndef PLAYBUTTON_H
#define PLAYBUTTON_H


#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>

class PlayButton : public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT

    public:
        PlayButton();
        void mousePressEvent( QGraphicsSceneMouseEvent * event );
        void hoverEnterEvent( QGraphicsSceneHoverEvent * event);
        void hoverLeaveEvent( QGraphicsSceneHoverEvent * event);

    signals:
        void getPlay();
};

#endif // PLAYBUTTON_H
