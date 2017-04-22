#ifndef __GAME_INCLUDED__
#define __GAME_INCLUDED__

#include "../common/pandemic.hpp"
#include "../cards/player_deck.hpp"
#include "world.hpp"

class Game {
public:
  Game();
  ~Game();
  void play();
  void outbreak();
  World* getWorld();

protected:
  void checkGameEnded();

  World* world;
  int numOutbreaks;
  PlayerDeck* playerDeck;
};

extern Game gGame;

#endif
