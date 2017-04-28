#ifndef __GAME_INCLUDED__
#define __GAME_INCLUDED__

#include "../common/pandemic.hpp"
#include "../cards/player/player_deck.hpp"
#include "../cards/infection/infection_deck.hpp"
#include "../player/role.hpp"
#include "world.hpp"

class Game {
public:
  enum GameEndedReason {
    None,
    Won,
    TooManyOutbreaks,
    OutOfPlayerCards,
    OutOfDiseaseCubes
  };

  Game(int);
  ~Game();
  void play();
  void outbreak();
  World* getWorld() const;
  InfectionDeck* getInfectionDeck() const;
  PlayerDeck* getPlayerDeck() const;
  void setGameEnded(GameEndedReason);

protected:
  GameEndedReason checkGameEnded();

  void infectCity(disease_cubes);
  void infectInitialCities();
  void infectCities();

  World* world;
  int numOutbreaks;
  int infectionRate;
  PlayerDeck* playerDeck;
  InfectionDeck* infectionDeck;
  vector<Role*> players;
  GameEndedReason gameEndedReason;
};

extern Game* gGame;

#endif
