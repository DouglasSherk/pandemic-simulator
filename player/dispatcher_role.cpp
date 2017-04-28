#include "dispatcher_role.hpp"

REGISTER_ENTITY_BEGIN(DispatcherRole);
  REGISTER_ROLE(DispatcherRole);
  REGISTER_TURN_BASED(DispatcherRole);
REGISTER_ENTITY_END();

void
DispatcherRole::act() {
  cout << "I will dispatch" << endl;
}
