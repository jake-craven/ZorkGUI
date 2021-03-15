#ifndef House_H
#define House_H
#include "Room.h"
#include "space.h"
#include <ctime>
#include <map>
#include <random>
#include <string>
#include <vector>
using namespace std;
using std::vector;

class House : public Space {
protected:
  string exitString() override;

public:
  House(string description, int rId, int type);
  string longDescription() override;

  Room *GetNorthEntrance();
  Room *GetSouthEntrance();
  int getX();
  Room **RoomMap[5];
  int getY();
  Space *s;
  void write();
  House(string description, int rId, int type, Space *s);
  string writes();
  void spreadFire();

private:
  int x1;
  int y1;
  void RandomRoomGenerator(int rId);
};

#endif // House_H
