#ifndef __PLAYER_DECK_INCLUDED__
#define __PLAYER_DECK_INCLUDED__

#include "../../common/pandemic.hpp"
#include "../../game/city.hpp"
#include "../deck.hpp"
#include "player_card.hpp"

class PlayerDeck : public Deck {
public:
  PlayerDeck();
  PlayerDeck(const vector<City*>&);

  virtual const PlayerCard* drawCard();

private:
  typedef Deck super;
};

#endif
