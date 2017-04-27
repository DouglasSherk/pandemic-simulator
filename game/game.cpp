#include "../common/pandemic.hpp"
#include "game.hpp"

Game* gGame;

Game::Game(int playersNum)
  : world(new World),
    numOutbreaks(0),
    playerDeck(new PlayerDeck(world->getCities())),
    infectionDeck(new InfectionDeck(world->getCities())) {

  vector<Role*> possibleRoles(Roles::getRoles());

  unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  ::shuffle(possibleRoles.begin(), possibleRoles.end(), default_random_engine(seed));

  for (int i = 0; i < playersNum && i < possibleRoles.size(); i++) {
    players.push_back(possibleRoles[i]);
  }
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

PlayerDeck*
Game::getPlayerDeck() const {
  return playerDeck;
}

InfectionDeck*
Game::getInfectionDeck() const {
  return infectionDeck;
}
