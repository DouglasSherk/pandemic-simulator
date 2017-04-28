#include "researcher_role.hpp"

REGISTER_ENTITY_BEGIN(ResearcherRole);
  REGISTER_ROLE(ResearcherRole);
  REGISTER_TURN_BASED(ResearcherRole);
REGISTER_ENTITY_END();

void
ResearcherRole::act() {
  cout << "I will research" << endl;
}
