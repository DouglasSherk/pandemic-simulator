#include "medic_role.hpp"

REGISTER_ENTITY_BEGIN(MedicRole);
  REGISTER_ROLE(MedicRole);
  REGISTER_TURN_BASED(MedicRole);
REGISTER_ENTITY_END();

void
MedicRole::act() {
  cout << "I will heal" << endl;
}
