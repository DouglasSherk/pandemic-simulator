#include "role.hpp"

vector<Role*>* Roles::roles = NULL;

const vector<Role*>&
Roles::getRoles() {
  return *roles;
}
