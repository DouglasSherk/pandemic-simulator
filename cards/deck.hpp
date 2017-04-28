#ifndef __DECK_INCLUDED__
#define __DECK_INCLUDED__

#include "../common/pandemic.hpp"
#include "card.hpp"

class Deck {
public:
  ~Deck();

  virtual const Card* drawCard();
  Deck& operator +=(const Deck&);

  void shuffleCards();
  void shuffleDiscards();

protected:
  void shuffle(list<const Card*>&);

  list<const Card*> cards;
  list<const Card*> discards;
};

#endif
