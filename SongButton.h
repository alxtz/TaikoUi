#ifndef SONGBUTTON_H
#define SONGBUTTON_H


#include <QGraphicsTextItem>
#include <QGraphicsPixmapItem>

class SongButton : public QGraphicsPixmapItem
{
    public:
        SongButton(QString buttonName);

        QString text;
        QGraphicsTextItem * buttonText;
};

#endif // SONGBUTTON_H
