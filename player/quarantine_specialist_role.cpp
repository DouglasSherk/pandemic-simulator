#include "quarantine_specialist_role.hpp"

REGISTER_ROLE(QuarantineSpecialistRole);

void
QuarantineSpecialistRole::act() {
  cout << "I will quarantine" << endl;
}
