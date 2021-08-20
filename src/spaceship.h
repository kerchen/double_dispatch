
#ifndef DOUBLE_DISPATCH_SPACESHIP_H
#define DOUBLE_DISPATCH_SPACESHIP_H

#include "asteroid.h"

class SpaceShip
{
public:
    virtual std::string CollideWith(Asteroid& inAsteroid) {
        return inAsteroid.CollideWith(*this);
    }
};

#endif //DOUBLE_DISPATCH_SPACESHIP_H
