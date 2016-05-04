#ifndef SONGCHOOSESCENE_H
#define SONGCHOOSESCENE_H


#include <vector>
#include <string>
#include <QGraphicsScene>

using namespace std;

class SongChooseScene : public QGraphicsScene
{
    public:
        SongChooseScene();
        vector<string> songList;

        void loadSongList();
        void loadSongButtons();
};

#endif // SONGCHOOSESCENE_H
