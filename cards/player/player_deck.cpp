#include "player_deck.hpp"
#include "event/event_card.hpp"
#include "city_card.hpp"

PlayerDeck::PlayerDeck() {

}

PlayerDeck::PlayerDeck(const vector<City*>& cities) {
  for (auto it : cities) {
    cards.push_back(new CityCard(it));
  }

  for (auto it : EventCards::getEventCards()) {
    it->play();
    cards.push_back(it);
  }

  cout << "Length: " << this->cards.size() << endl;
}
