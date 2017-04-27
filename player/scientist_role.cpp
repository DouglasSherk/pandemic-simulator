#include "scientist_role.hpp"

REGISTER_ROLE(ScientistRole);

void
ScientistRole::act() {
  cout << "I will do science" << endl;
}
