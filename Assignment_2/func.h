#ifndef FUNC_H
#define FUNC_H
#include "world.h"
#include "robot.h"

bool findCoin(World&, const Robot&, int);
bool allCoinsFound(const World&);

#endif // FUNC_H