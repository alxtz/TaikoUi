#ifndef GAMEVIEW_H
#define GAMEVIEW_H


#include <QObject>
#include <QGraphicsView>

class GameView : public QGraphicsView
{
    Q_OBJECT

    public:
        GameView();

    public slots:
        void setStartMenu();
        void setSongChoose();
};

#endif // GAMEVIEW_H
