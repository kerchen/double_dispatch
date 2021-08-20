#ifndef DOUBLE_DISPATCH_ASTEROID_H
#define DOUBLE_DISPATCH_ASTEROID_H
#include <string>

class SpaceShip;
class ApolloSpaceShip;

class Asteroid {
public:
    virtual std::string CollideWith(SpaceShip&);
    virtual std::string CollideWith(ApolloSpaceShip&);
};

#endif //DOUBLE_DISPATCH_ASTEROID_H
