#include "epidemic_card.hpp"
#include "../../common/pandemic.hpp"
#include "../../game/game.hpp"
#include "../infection/infection_card.hpp"

void
EpidemicCard::play() const {

}

void
EpidemicCard::drawn() const {
  cout << "epidemic!" << endl;
  const InfectionCard* infectionCard = gGame->getInfectionDeck()->drawEpidemicCard();
  City* city = infectionCard->getCity();
  city->addDiseaseCubes(city->getDisease(), MAX_DISEASE_CUBES);
  gGame->getInfectionDeck()->readdDiscardsToDeck();
}
