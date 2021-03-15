#ifndef ROOM_H_
#define ROOM_H_

#include <map>
#include <string>
#include <vector>
#include "item.h"
using namespace std;
using std::vector;

class Room {

private:
	string description;
	map<string, Room*> exits;
	string exitString();
    vector <Item> itemsInRoom;
<<<<<<< HEAD
    vector <Room*> roomList;


=======

// Jake Sucks
>>>>>>> bb76a384d6de51eb3d1487073713a2ef8ac58d53
public:
    int numberOfItems();
	Room(string description);
	void setExits(Room *north, Room *east, Room *south, Room *west);
	string shortDescription();
	string longDescription();
	Room* nextRoom(string direction);
    void addItem(Item *inItem);
<<<<<<< HEAD
    void addRoom(Room *room);
    Room* randomRoom();
=======
>>>>>>> bb76a384d6de51eb3d1487073713a2ef8ac58d53
    string displayItem();
    int isItemInRoom(string inString);
    void removeItemFromRoom(int location);
};

#endif
