#ifndef __ROLE_INCLUDED__
#define __ROLE_INCLUDED__

#include "../common/pandemic.hpp"
#include "../interfaces/turn_based.hpp"

class Role : public TurnBased {
public:
  virtual void act() = 0;
  virtual void onTurn();
  virtual void onNewTurn();

protected:
  void drawPlayerCard();
};

REGISTER_BASE_TEMPLATE(Role);

#define REGISTER_ROLE(R) REGISTER_CLASS(Role, R)
#define ALL_ROLES() ALL_CLASS(Role)

#endif
