#include "dispatcher_role.hpp"

REGISTER_ROLE(DispatcherRole);

void
DispatcherRole::act() {
  cout << "I will dispatch" << endl;
}
