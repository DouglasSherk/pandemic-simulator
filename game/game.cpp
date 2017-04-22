#include "../common/pandemic.hpp"
#include "game.hpp"

Game gGame;

Game::Game()
  : world(new World),
    numOutbreaks(0),
    playerDeck(new PlayerDeck(world->getCities())) {

}

Game::~Game() {
  delete world;
}

void
Game::play() {

}

World*
Game::getWorld() {
  return world;
}

void
Game::outbreak() {
  ++numOutbreaks;
  checkGameEnded();
}

void
Game::checkGameEnded() {

}
