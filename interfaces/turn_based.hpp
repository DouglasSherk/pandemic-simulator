#ifndef __TURN_BASED_INCLUDED__
#define __TURN_BASED_INCLUDED__

class TurnBased {
protected:
  virtual void onNewTurn() = 0;
  virtual void onTurn() = 0;
};

#endif
