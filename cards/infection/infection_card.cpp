#include "infection_card.hpp"

InfectionCard::InfectionCard(City* city)
  : city(city) {

}

City*
InfectionCard::getCity() const {
  return city;
}
