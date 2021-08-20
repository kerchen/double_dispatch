#ifndef DOUBLE_DISPATCH_EXPLODINGASTEROID_H
#define DOUBLE_DISPATCH_EXPLODINGASTEROID_H
#include <string>
#include "asteroid.h"

class SpaceShip;
class ApolloSpaceShip;

class ExplodingAsteroid : public Asteroid {
public:
    std::string CollideWith(SpaceShip&) override;
    std::string CollideWith(ApolloSpaceShip&) override;
};

#endif //DOUBLE_DISPATCH_EXPLODINGASTEROID_H
