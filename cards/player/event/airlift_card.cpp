#include "airlift_card.hpp"

REGISTER_ENTITY_BEGIN(AirliftCard);
  REGISTER_EVENT_CARD(AirliftCard);
REGISTER_ENTITY_END();

void
AirliftCard::play() const {
  cout << "airlift" << endl;
}
