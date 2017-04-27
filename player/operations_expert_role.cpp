#include "operations_expert_role.hpp"

REGISTER_ROLE(OperationsExpertRole);

void
OperationsExpertRole::act() {
  cout << "I will build" << endl;
}
