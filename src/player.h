
#pragma once
#include "object.hpp"
#include "player_move.h"
#include <memory>


class Player : public Object {
private:
  std::shared_ptr<PlayerMove> move;

public:

  Player();

  int getX() const {
    return move->getX();
  }

  void show() {
    std::cout << "Player" << std::endl;
    move->show();
  }
};