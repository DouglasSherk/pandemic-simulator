#include "player_deck.hpp"
#include "city_card.hpp"

PlayerDeck::PlayerDeck() {

}

PlayerDeck::PlayerDeck(const vector<City*>& cities) {
  vector<CityCard*> cityCards;
  for (auto it : cities) {
    cityCards.push_back(new CityCard(it));
  }

  // vector<EventCard*> eventCards;

}
