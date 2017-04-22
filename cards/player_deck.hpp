#ifndef __PLAYER_DECK_INCLUDED__
#define __PLAYER_DECK_INCLUDED__

#include "../common/pandemic.hpp"
#include "../game/city.hpp"
#include "player_card.hpp"
#include "deck.hpp"

class PlayerDeck : public Deck {
public:
  PlayerDeck();
  PlayerDeck(const vector<City*>&);
};

#endif
