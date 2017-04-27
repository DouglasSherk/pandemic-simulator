#ifndef __CONTINGENCY_PLANNER_ROLE_INCLUDED__
#define __CONTINGENCY_PLANNER_ROLE_INCLUDED__

#include "role.hpp"

class ContingencyPlannerRole : public Role {
public:
  virtual void act();
};

#endif
