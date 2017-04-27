#include "medic_role.hpp"

REGISTER_ROLE(MedicRole);

void
MedicRole::act() {
  cout << "I will heal" << endl;
}
