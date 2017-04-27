#ifndef __INFECTION_CARD_INCLUDED__
#define __INFECTION_CARD_INCLUDED__

#include "../../game/city.hpp"
#include "../card.hpp"

class InfectionCard : public Card {
public:
  InfectionCard(City*);

protected:
  City* city;
};

#endif
