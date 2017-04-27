#include "researcher_role.hpp"

REGISTER_ROLE(ResearcherRole);

void
ResearcherRole::act() {
  cout << "I will research" << endl;
}
