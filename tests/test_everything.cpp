#include <gtest/gtest.h>

#include "apollospaceship.h"
#include "explodingasteroid.h"


TEST(WikipediaTest, Example1a)
{
    Asteroid theAsteroid;
    SpaceShip theSpaceShip;

    ASSERT_EQ(theAsteroid.CollideWith(theSpaceShip), std::string("Asteroid hit a SpaceShip"));
}

TEST(WikipediaTest, Example1b)
{
    Asteroid theAsteroid;
    ApolloSpaceShip theApolloSpaceShip;

    ASSERT_EQ(theAsteroid.CollideWith(theApolloSpaceShip), std::string("Asteroid hit an ApolloSpaceShip"));
}

TEST(WikipediaTest, Example2a)
{
    SpaceShip theSpaceShip;
    ExplodingAsteroid theExplodingAsteroid;

    ASSERT_EQ(theExplodingAsteroid.CollideWith(theSpaceShip), std::string("ExplodingAsteroid hit a SpaceShip"));
}

TEST(WikipediaTest, Example2b)
{
    ApolloSpaceShip theApolloSpaceShip;
    ExplodingAsteroid theExplodingAsteroid;

    ASSERT_EQ(theExplodingAsteroid.CollideWith(theApolloSpaceShip), std::string("ExplodingAsteroid hit an ApolloSpaceShip"));
}

TEST(WikipediaTest, Example3a)
{
    SpaceShip theSpaceShip;
    ExplodingAsteroid theExplodingAsteroid;
    Asteroid& theAsteroidReference = theExplodingAsteroid;

    ASSERT_EQ(theAsteroidReference.CollideWith(theSpaceShip), std::string("ExplodingAsteroid hit a SpaceShip"));
}

TEST(WikipediaTest, Example3b)
{
    ApolloSpaceShip theApolloSpaceShip;
    ExplodingAsteroid theExplodingAsteroid;
    Asteroid& theAsteroidReference = theExplodingAsteroid;

    ASSERT_EQ(theAsteroidReference.CollideWith(theApolloSpaceShip), std::string("ExplodingAsteroid hit an ApolloSpaceShip"));
}

TEST(WikipediaTest, Example4a)
{
    ApolloSpaceShip theApolloSpaceShip;
    SpaceShip& theSpaceShipReference = theApolloSpaceShip;
    Asteroid theAsteroid;

    ASSERT_EQ(theAsteroid.CollideWith(theSpaceShipReference), std::string("Asteroid hit a SpaceShip"));
}


TEST(WikipediaTest, Example4b)
{
    ApolloSpaceShip theApolloSpaceShip;
    SpaceShip& theSpaceShipReference = theApolloSpaceShip;
    ExplodingAsteroid theExplodingAsteroid;
    Asteroid& theAsteroidReference = theExplodingAsteroid;

    ASSERT_EQ(theAsteroidReference.CollideWith(theSpaceShipReference), std::string("ExplodingAsteroid hit a SpaceShip"));
}

TEST(WikipediaTest, Example5a)
{
    ApolloSpaceShip theApolloSpaceShip;
    SpaceShip& theSpaceShipReference = theApolloSpaceShip;
    Asteroid theAsteroid;

    ASSERT_EQ(theSpaceShipReference.CollideWith(theAsteroid), std::string("Asteroid hit an ApolloSpaceShip"));
}

TEST(WikipediaTest, Example5b)
{
    ExplodingAsteroid theExplodingAsteroid;
    Asteroid& theAsteroidReference = theExplodingAsteroid;
    ApolloSpaceShip theApolloSpaceShip;
    SpaceShip& theSpaceShipReference = theApolloSpaceShip;

    ASSERT_EQ(theSpaceShipReference.CollideWith(theAsteroidReference), std::string("ExplodingAsteroid hit an ApolloSpaceShip"));
}

