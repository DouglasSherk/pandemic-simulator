#include "infection_deck.hpp"
#include "infection_card.hpp"

InfectionDeck::InfectionDeck() {

}

InfectionDeck::InfectionDeck(const vector<City*>& cities) {
  for (auto it : cities) {
    cards.push_back(new InfectionCard(it));
  }
}
