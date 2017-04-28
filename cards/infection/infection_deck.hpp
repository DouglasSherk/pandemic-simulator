#ifndef __INFECTION_DECK_INCLUDED__
#define __INFECTION_DECK_INCLUDED__

#include "../../common/pandemic.hpp"
#include "../../game/city.hpp"
#include "../deck.hpp"
#include "infection_card.hpp"

class InfectionDeck : public Deck {
public:
  InfectionDeck();
  InfectionDeck(const vector<City*>&);

  const InfectionCard* drawEpidemicCard();
  const InfectionCard* drawCard();

  void readdDiscardsToDeck();

private:
  typedef Deck super;
};

#endif
