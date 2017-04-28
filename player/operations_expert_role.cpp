#include "operations_expert_role.hpp"

REGISTER_ENTITY_BEGIN(OperationsExpertRole);
  REGISTER_ROLE(OperationsExpertRole);
  REGISTER_TURN_BASED(OperationsExpertRole);
REGISTER_ENTITY_END();

void
OperationsExpertRole::act() {
  cout << "I will build" << endl;
}
