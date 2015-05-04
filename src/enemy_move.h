
#pragma once
#include "object_interface.h"


class EnemyMove : public ObjectInterface {
private:

  int pos_x = 20;
  int pos_y = 20;

public:
  
  EnemyMove(Object*);

  int getX() const {
    return pos_x;
  }

  void show() {
    std::cout << "pos_x = " << pos_x << " : pos_y = " << pos_y << std::endl;
  }
};