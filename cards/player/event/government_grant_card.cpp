#include "government_grant_card.hpp"

REGISTER_ENTITY_BEGIN(GovernmentGrantCard);
  REGISTER_EVENT_CARD(GovernmentGrantCard);
REGISTER_ENTITY_END();

void
GovernmentGrantCard::play() const {
  cout << "govt grant" << endl;
}
