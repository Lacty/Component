
#include "player_move.h"
#include "enemy.h"


PlayerMove::PlayerMove(Object* obj) :
ObjectInterface(obj) {}


void PlayerMove::show() {
  std::cout << "pos_x = " << pos_x << " : pos_y = " << pos_y << std::endl;
  // dynamic_castだとenemyにNULLが入る
  // static_castだと正常に動く、けどデータはPlayerの物だったイミフ
  //auto enemy = static_cast<Enemy*>(obj);
  auto enemy = dynamic_cast<Enemy*>(obj);
  std::cout << "get Enemy X = " << enemy->getX() << std::endl;
}