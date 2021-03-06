#include "player_deck.hpp"
#include "../../game/game.hpp"
#include "event/event_card.hpp"
#include "city_card.hpp"
#include "epidemic_card.hpp"

PlayerDeck::PlayerDeck() {

}

PlayerDeck::PlayerDeck(const vector<City*>& cities) {
  for (auto it : cities) {
    cards.push_back(new CityCard(it));
  }

  for (auto it : ALL_EVENT_CARDS()) {
    it->play();
    cards.push_back(it);
  }

  for (int i = 0; i < MAX_EPIDEMIC_CARDS; i++) {
    cards.push_back(new EpidemicCard);
  }

  cout << "Length: " << this->cards.size() << endl;
}

const PlayerCard*
PlayerDeck::drawCard() {
  if (cards.size() == 0) {
    gGame->setGameEnded(Game::GameEndedReason::OutOfPlayerCards);
    return NULL;
  }

  const PlayerCard* drawnCard = static_cast<const PlayerCard*>(super::drawCard());
  if (drawnCard->cardType() == PlayerCard::Instant) {
    drawnCard->drawn();
    return NULL;
  }
  return drawnCard;
}
