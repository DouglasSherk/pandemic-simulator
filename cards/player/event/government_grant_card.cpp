#include "government_grant_card.hpp"

REGISTER_EVENT_CARD(GovernmentGrantCard);

void
GovernmentGrantCard::play() const {
  cout << "govt grant" << endl;
}
