#include "scientist_role.hpp"

REGISTER_ENTITY_BEGIN(ScientistRole);
  REGISTER_ROLE(ScientistRole);
  REGISTER_TURN_BASED(ScientistRole);
REGISTER_ENTITY_END();

void
ScientistRole::act() {
  cout << "I will do science" << endl;
}
