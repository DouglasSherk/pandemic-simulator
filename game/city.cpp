#include "city.hpp"
#include "game.hpp"

City::City() {

}

City::City(Disease disease, const string& name)
  : disease(disease),
    name(name),
    hasOutbreakedThisTurn(false) {

}

void
City::onNewTurn() {
  hasOutbreakedThisTurn = false;
}

void
City::addCityConnection(City& city) {
  connectedCities.push_back(&city);
  city.connectedCities.push_back(this);
}

void
City::addDiseaseCubes(Disease disease, disease_cubes numDiseaseCubes) {
  diseaseCubes[disease] += numDiseaseCubes;
  if (diseaseCubes[disease] > MAX_DISEASE_CUBES) {
    outbreak(disease);
    diseaseCubes[disease] = MAX_DISEASE_CUBES;
  }
}

void
City::removeDiseaseCubes(Disease disease, disease_cubes numDiseaseCubes) {
  diseaseCubes[disease] = max(diseaseCubes[disease] - numDiseaseCubes, 0);
}

void
City::clearDiseaseCubes(Disease disease) {
  removeDiseaseCubes(disease, MAX_DISEASE_CUBES);
}

void
City::outbreak(Disease disease) {
  if (hasOutbreakedThisTurn) { return; }
  hasOutbreakedThisTurn = true;

  for (auto it : connectedCities) {
    it->addDiseaseCubes(disease);
    cout << "Outbreaking in " << it->name << endl;
  }

  gGame->outbreak();
}

disease_cubes
City::numDiseaseCubes(Disease disease) const {
  return diseaseCubes[disease];
}
