#include "one_quiet_night_card.hpp"

REGISTER_ENTITY_BEGIN(OneQuietNightCard);
  REGISTER_EVENT_CARD(OneQuietNightCard);
REGISTER_ENTITY_END();

void
OneQuietNightCard::play() const {
  cout << "oqn" << endl;
}
