#include "deck.hpp"

Deck::~Deck() {
  for (auto it : cards) {
    delete it;
  }
  for (auto it : discards) {
    delete it;
  }
}

const Card*
Deck::drawCard() {
  Card* card = cards.front();
  cards.pop_front();
  return card;
}

Deck&
Deck::operator +=(const Deck& deck) {
  for (auto it : deck.cards) {
    cards.push_back(it);
  }
  return *this;
}

void
Deck::shuffle() {
  // Convert cards into a vector, shuffle them, then put them back into the
  // internal `cards` list.
  vector<Card*> vCards;
  for (auto it : cards) {
    vCards.push_back(it);
  }
  unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  ::shuffle(vCards.begin(), vCards.end(), default_random_engine(seed));

  cards.clear();
  for (auto it : vCards) {
    cards.push_back(it);
  }
}
