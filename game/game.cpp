#include "../common/pandemic.hpp"
#include "game.hpp"

Game* gGame;

Game::Game(int playersNum)
  : world(new World),
    numOutbreaks(0),
    infectionRate(0),
    playerDeck(new PlayerDeck(world->getCities())),
    infectionDeck(new InfectionDeck(world->getCities())),
    gameEndedReason(None) {

  vector<Role*> possibleRoles(ALL_ROLES());

  unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  ::shuffle(possibleRoles.begin(), possibleRoles.end(), default_random_engine(seed));

  for (int i = 0; i < playersNum && i < possibleRoles.size(); i++) {
    players.push_back(possibleRoles[i]);
  }

  infectInitialCities();
}

Game::~Game() {
  delete world;
}

void
Game::play() {
  for (unsigned long long i = 0; checkGameEnded() == GameEndedReason::None; i++) {
    for (auto it : ALL_TURN_BASED()) {
      it->onNewTurn();
    }

    Role* player = players[i % players.size()];
    player->onTurn();

    infectCities();
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
Game::setGameEnded(GameEndedReason reason) {
  gameEndedReason = reason;
}

Game::GameEndedReason
Game::checkGameEnded() {
  if (gameEndedReason != Game::GameEndedReason::None) {
    cout << "Game ended: " << gameEndedReason << endl;
  }
  return gameEndedReason;
}

PlayerDeck*
Game::getPlayerDeck() const {
  return playerDeck;
}

InfectionDeck*
Game::getInfectionDeck() const {
  return infectionDeck;
}

void
Game::infectCity(disease_cubes cubes) {
  const InfectionCard* infectionCard = infectionDeck->drawCard();
  City* city = infectionCard->getCity();
  city->addDiseaseCubes(city->getDisease(), cubes);
}

void
Game::infectInitialCities() {
  for (disease_cubes cubes = MAX_DISEASE_CUBES; cubes >= 1; cubes--) {
    for (int city = 0; city < 3; city++) {
      infectCity(cubes);
    }
  }
}

void
Game::infectCities() {
  for (int i = 0; i < INFECTION_RATES[infectionRate]; i++) {
    infectCity(1);
  }
}
