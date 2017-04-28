#ifndef __GAME_INCLUDED__
#define __GAME_INCLUDED__

#include "../common/pandemic.hpp"
#include "../cards/player/player_deck.hpp"
#include "../cards/infection/infection_deck.hpp"
#include "../player/role.hpp"
#include "world.hpp"

class Game {
public:
  Game(int);
  ~Game();
  void play();
  void outbreak();
  World* getWorld() const;
  InfectionDeck* getInfectionDeck() const;
  PlayerDeck* getPlayerDeck() const;
  void setGameEnded();

protected:
  bool checkGameEnded();

  World* world;
  int numOutbreaks;
  PlayerDeck* playerDeck;
  InfectionDeck* infectionDeck;
  vector<Role*> players;
  bool gameEnded;
};

extern Game* gGame;

#endif
