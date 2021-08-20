#include "apollospaceship.h"
#include "asteroid.h"

std::string Asteroid::CollideWith(SpaceShip&) {
    return "Asteroid hit a SpaceShip";
}

std::string Asteroid::CollideWith(ApolloSpaceShip&) {
    return "Asteroid hit an ApolloSpaceShip";
}

