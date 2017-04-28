#include "infection_deck.hpp"
#include "infection_card.hpp"

InfectionDeck::InfectionDeck() {

}

InfectionDeck::InfectionDeck(const vector<City*>& cities) {
  for (auto it : cities) {
    cards.push_back(new InfectionCard(it));
  }
}

const InfectionCard*
InfectionDeck::drawEpidemicCard() {
  const InfectionCard* card = static_cast<const InfectionCard*>(cards.back());
  cards.pop_back();
  return card;
}

const InfectionCard*
InfectionDeck::drawCard() {
  if (cards.size() == 0) {
    readdDiscardsToDeck();
  }

  const InfectionCard* infectionCard = static_cast<const InfectionCard*>(super::drawCard());
  discards.push_front(infectionCard);
  return infectionCard;
}

void
InfectionDeck::readdDiscardsToDeck() {
  shuffleDiscards();

  while (discards.size()) {
    cards.push_back(discards.front());
    discards.pop_front();
  }
}
