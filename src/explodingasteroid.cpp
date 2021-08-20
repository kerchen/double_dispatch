#include <iostream>
#include "apollospaceship.h"
#include "explodingasteroid.h"

std::string ExplodingAsteroid::CollideWith(SpaceShip&) {
    return "ExplodingAsteroid hit a SpaceShip";
}

std::string ExplodingAsteroid::CollideWith(ApolloSpaceShip&) {
    return "ExplodingAsteroid hit an ApolloSpaceShip";
}

