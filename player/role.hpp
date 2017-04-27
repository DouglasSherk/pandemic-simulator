#ifndef __ROLE_INCLUDED__
#define __ROLE_INCLUDED__

#include "../common/pandemic.hpp"

class Role {
public:
  virtual void act() = 0;
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
