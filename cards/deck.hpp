#ifndef __DECK_INCLUDED__
#define __DECK_INCLUDED__

#include "../common/pandemic.hpp"
#include "card.hpp"

class Deck {
public:
  ~Deck();

  const Card* drawCard();
  void shuffle();
  Deck& operator +=(const Deck&);

//protected:
  list<Card *> cards;
  list<Card *> discards;
};

#endif
