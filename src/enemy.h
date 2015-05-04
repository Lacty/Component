
#pragma once
#include "object.hpp"
#include "enemy_move.h"
#include <memory>


class Enemy : public Object {
private:
  std::shared_ptr<EnemyMove> move;

public:

  Enemy();

  int getX() const {
    return move->getX();
  }

  void show() {
    std::cout << "Enemy" << std::endl;
    move->show();
  }
};