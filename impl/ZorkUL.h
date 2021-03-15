#ifndef ZORKUL_H_
#define ZORKUL_H_
#include "Room.h"
#include "item.h"
#include <iostream>
#include <string>
using namespace std;

class ZorkUL {
private:
	Room *currentRoom;
	void createRooms();
	void printWelcome();
    void printHelp();

    void createItems();
    void displayItems();


public:
	ZorkUL();
    void play();
<<<<<<< HEAD
    string teleport();
=======
>>>>>>> bb76a384d6de51eb3d1487073713a2ef8ac58d53
    string goRoom(string direction);


};

#endif /*ZORKUL_H_*/
