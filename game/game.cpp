#include "../common/pandemic.hpp"
#include "game.hpp"

Game* gGame;

Game::Game(int playersNum)
  : world(new World),
    numOutbreaks(0),
    playerDeck(new PlayerDeck(world->getCities())),
    infectionDeck(new InfectionDeck(world->getCities())),
    gameEnded(false) {

  vector<Role*> possibleRoles(ALL_ROLES());

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
  for (auto it : ALL_TURN_BASED()) {
    it->onNewTurn();
  }

  for (unsigned long long i = 0; !checkGameEnded(); i++) {
    Role* player = players[i % players.size()];
    player->onTurn();
  }
}

World*
Game::getWorld() const {
  return world;
}

void
Game::outbreak() {
  ++numOutbreaks;
  checkGameEnded();
}

void
Game::setGameEnded() {
  gameEnded = true;
}

bool
Game::checkGameEnded() {
  if (gameEnded) {

  }
  return gameEnded;
}

PlayerDeck*
Game::getPlayerDeck() const {
  return playerDeck;
}

InfectionDeck*
Game::getInfectionDeck() const {
  return infectionDeck;
}
