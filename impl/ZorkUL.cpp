#include <iostream>

using namespace std;
#include "ZorkUL.h"
#include "mainwindow.h"
#include <QApplication>
int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();

}

ZorkUL::ZorkUL() {
	createRooms();
}

void ZorkUL::createRooms()  {
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i,*j;

	a = new Room("a");
	b = new Room("b");
	c = new Room("c");
	d = new Room("d");
	e = new Room("e");
	f = new Room("f");
	g = new Room("g");
	h = new Room("h");
	i = new Room("i");
    j = new Room("j");
<<<<<<< HEAD
    vector <Room*> roomList;
    roomList.pushback(a);
    roomList.pushback(b);
    roomList.pushback(c);
    roomList.pushback(d);
    roomList.pushback(e);
    roomList.pushback(f);
    roomList.pushback(g);
    roomList.pushback(h);
    roomList.pushback(i);
    roomList.pushback(j);
    int listsize =roomlist.size();
    int exitscounts[roomlist.size()];
    for(int x=0;x<exitscounts.length;x++)
        exitscounts[x]=1+(rand() % 3);
    while(!roomlist.size())
        {
            for(int y=0;y<listsize;y++)
            {
                while(exitscounts[y]){

                }
            }
        }
//             (N, E, S, W)
=======
  //             (N, E, S, W)
>>>>>>> bb76a384d6de51eb3d1487073713a2ef8ac58d53
	a->setExits(f, b, d, c);
	b->setExits(NULL, NULL, NULL, a);
	c->setExits(NULL, a, NULL, NULL);
	d->setExits(a, e, NULL, i);
	e->setExits(NULL, NULL, NULL, d);
	f->setExits(NULL, g, a, h);
	g->setExits(NULL, NULL, NULL, f);
	h->setExits(NULL, f, NULL, NULL);
    i->setExits(NULL, d, j, NULL);
    j->setExits(i, NULL, NULL, NULL);
        currentRoom = a;
}

/**
 *  Main play routine.  Loops until end of play.
 */
void ZorkUL::play() {

}

void ZorkUL::printWelcome() {
    //cout << "start"<< endl;
    //cout << "info for help"<< endl;
    //cout << endl;
    //cout << currentRoom->longDescription() << endl;
}

/**
 * Given a command, process (that is: execute) the command.
 * If this command ends the ZorkUL game, true is returned, otherwise false is
 * returned.
 */

/** COMMANDS **/
void ZorkUL::printHelp() {
    //cout << "valid inputs are; " << endl;

}

string ZorkUL::goRoom(string direction) {
    Room* nextRoom = currentRoom->nextRoom(direction);
        currentRoom = nextRoom;
        return currentRoom->longDescription();

}
<<<<<<< HEAD
string ZorkUL::teleport(){
        Room* nextRoom= currentRoom->randomRoom();
        if (nextRoom == NULL){}
        else {
        currentRoom = nextRoom;
        }
        return currentRoom->longDescription();
}
=======
>>>>>>> bb76a384d6de51eb3d1487073713a2ef8ac58d53
