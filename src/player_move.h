
#pragma once
#include "object_interface.h"


class PlayerMove : public ObjectInterface {
private:
  int pos_x = 10;
  int pos_y = 10;

public:

  PlayerMove(Object*);

  int getX() const {
    return pos_x;
  }

  void show();
};