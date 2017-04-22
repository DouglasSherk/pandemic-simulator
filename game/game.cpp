#include "../common/pandemic.hpp"
#include "game.hpp"

Game gGame;

Game::Game()
  : numOutbreaks(0),
    world(new World),
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
