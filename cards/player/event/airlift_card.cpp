#include "airlift_card.hpp"

REGISTER_EVENT_CARD(AirliftCard);

void
AirliftCard::play() const {
  cout << "airlift" << endl;
}
