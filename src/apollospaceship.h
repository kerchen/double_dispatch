#ifndef DOUBLE_DISPATCH_APOLLOSPACESHIP_H
#define DOUBLE_DISPATCH_APOLLOSPACESHIP_H
#include "spaceship.h"

class ApolloSpaceShip : public SpaceShip {
public:
    virtual std::string CollideWith(Asteroid& inAsteroid) override {
        return inAsteroid.CollideWith(*this);
    }
};

#endif //DOUBLE_DISPATCH_APOLLOSPACESHIP_H
