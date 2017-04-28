#ifndef __TURN_BASED_INCLUDED__
#define __TURN_BASED_INCLUDED__

#include "../common/pandemic.hpp"

class TurnBased {
protected:
  virtual void onNewTurn() = 0;
  virtual void onTurn() = 0;

  friend class Game;
};

REGISTER_BASE_TEMPLATE(TurnBased);

#define REGISTER_TURN_BASED(T) REGISTER_CLASS(TurnBased, T);
#define ALL_TURN_BASED() ALL_CLASS(TurnBased)

#endif
