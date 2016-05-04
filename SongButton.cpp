#include <QPixmap>
#include "SongButton.h"

SongButton::SongButton(QString buttonName)
{
    setPixmap(QPixmap("./GameData/DefaultResources/images/songButton.png"));

    buttonText = new QGraphicsTextItem(buttonName , this);
}
