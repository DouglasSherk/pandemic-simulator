#ifndef __CITY_CARD_INCLUDED__
#define __CITY_CARD_INCLUDED__

#include "../game/city.hpp"

class CityCard {
public:
  CityCard(City*);

protected:
  City* city;
};

#endif
