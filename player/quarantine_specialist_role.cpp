#include "quarantine_specialist_role.hpp"

REGISTER_ENTITY_BEGIN(QuarantineSpecialistRole);
  REGISTER_ROLE(QuarantineSpecialistRole);
  REGISTER_TURN_BASED(QuarantineSpecialistRole);
REGISTER_ENTITY_END();

void
QuarantineSpecialistRole::act() {
  cout << "I will quarantine" << endl;
}
