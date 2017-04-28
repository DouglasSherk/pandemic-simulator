#include "resilient_population_card.hpp"

REGISTER_ENTITY_BEGIN(ResilientPopulationCard);
  REGISTER_EVENT_CARD(ResilientPopulationCard);
REGISTER_ENTITY_END();

void
ResilientPopulationCard::play() const {
  cout << "res pop" << endl;
}
