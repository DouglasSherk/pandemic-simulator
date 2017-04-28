#include "contingency_planner_role.hpp"

REGISTER_ENTITY_BEGIN(ContingencyPlannerRole);
  REGISTER_ROLE(ContingencyPlannerRole);
  REGISTER_TURN_BASED(ContingencyPlannerRole);
REGISTER_ENTITY_END();

void
ContingencyPlannerRole::act() {
  cout << "I will contingency plan" << endl;
}
