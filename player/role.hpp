#ifndef __ROLE_INCLUDED__
#define __ROLE_INCLUDED__

#include "../common/pandemic.hpp"
#include "../interfaces/turn_based.hpp"

class Role : public TurnBased {
public:
  virtual void act() = 0;
  virtual void onTurn();
  virtual void onNewTurn();
};

struct Roles {
private:
  static vector<Role*>* roles;

public:
  Roles(Role* role) {
    if (!roles) {
      roles = new vector<Role*>;
    }
    roles->push_back(role);
  }

  static const vector<Role*>& getRoles();
};

#define REGISTER_ROLE(R) Roles temp_roles_##R(new R);

#endif
