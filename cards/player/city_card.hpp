#ifndef __CITY_CARD_INCLUDED__
#define __CITY_CARD_INCLUDED__

#include "../../game/city.hpp"
#include "player_card.hpp"

class CityCard : public PlayerCard {
public:
  CityCard(City*);

protected:
  City* city;
};

#endif
