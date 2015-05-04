
#include "player_move.h"
#include "enemy.h"


PlayerMove::PlayerMove(Object* obj) :
ObjectInterface(obj) {}


void PlayerMove::show() {
  std::cout << "pos_x = " << pos_x << " : pos_y = " << pos_y << std::endl;
  // dynamic_cast‚¾‚Æenemy‚ÉNULL‚ª“ü‚é
  // static_cast‚¾‚Æ³í‚É“®‚­
  auto enemy = static_cast<Enemy*>(obj);
  std::cout << "get Enemy X = " << enemy->getX() << std::endl;
}