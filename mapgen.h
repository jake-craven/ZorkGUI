#ifndef MapGen_H
#define MapGen_H

#include <QGridLayout>
#include <QWidget>

#include "Room.h"
#include "ZorkUL.h"
#include "space.h"

namespace Ui {
class MapGen;
}

class MapGen : public QWidget {
  Q_OBJECT

public:
  explicit MapGen(int x, int y, Room **(*rm), QWidget *parent = 0);
  ~MapGen();
  void changeRooms(int x, int y, Room **(*rm));
  void outside();

protected:
  void paintEvent(QPaintEvent *e);

private:
  bool outsideb;
  // Ui::MapGen *ui;
  QGridLayout *mainGrid;
  vector<vector<Space *>> rooms;
  // void createRooms(Room *rooms[9], RoomPainter *paintedRooms[9]);
};

#endif // MapGen_H
