
#include "player.h"


Player::Player() :
move(std::make_shared<PlayerMove>(this)) {}