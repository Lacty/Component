
#include "enemy.h"


Enemy::Enemy() :
move(std::make_shared<EnemyMove>(this)) {}