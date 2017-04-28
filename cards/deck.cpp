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
  const Card* card = cards.front();
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
Deck::shuffleCards() {
  shuffle(cards);
}

void
Deck::shuffleDiscards() {
  shuffle(discards);
}

void
Deck::shuffle(list<const Card*>& deck) {
  // Convert cards into a vector, shuffle them, then put them back into the
  // internal `cards` list.
  vector<const Card*> vCards;
  for (auto it : deck) {
    vCards.push_back(it);
  }
  unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  ::shuffle(vCards.begin(), vCards.end(), default_random_engine(seed));

  deck.clear();
  for (auto it : vCards) {
    deck.push_back(it);
  }
}
