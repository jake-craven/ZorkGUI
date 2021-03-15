#ifndef ITEM_H_
#define ITEM_H_

#include "qmediaplayer.h"
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;
using std::vector;

class Item {
private:
  string description;
  bool holdable;
  int mod;

public:
  Item(string inDescription, bool inholdable, int mod);
  string getShortDescription();
  string getLongDescription();
  int getMod();
  bool getHold();
};

#endif /*ITEM_H_*/
