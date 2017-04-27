#include "contingency_planner_role.hpp"

REGISTER_ROLE(ContingencyPlannerRole);

void
ContingencyPlannerRole::act() {
  cout << "I will contingency plan" << endl;
}
