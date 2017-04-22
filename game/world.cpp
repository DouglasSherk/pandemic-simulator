#include "../common/pandemic.hpp"
#include "city.hpp"
#include "world.hpp"

World::World() {
  loadCities();
  loadCitiesGraph();
}

void
World::loadCities() {
  ifstream infile("cities.txt");
  int disease;
  string name;
  while (infile >> disease >> name) {
    if (disease >= Disease_Max) {
      throw invalid_argument("Disease is out of range");
    }
    cities.insert(make_pair(name, new City((Disease)disease, name)));
  }
}

void
World::loadCitiesGraph() {
  ifstream infile("cities_graph.txt");

  string root;
  const size_t connectedNum = 7;
  string connected[connectedNum];

  while (infile >> root >> connected[0] >> connected[1] >> connected[2] >> connected[3] >> connected[4] >> connected[5]) {
    if (cities.find(root) == cities.end()) { continue; }

    for (int i = 0; i < connectedNum; i++) {
      if (connected[i].length() <= 1) { continue; }
      if (cities.find(connected[i]) == cities.end()) { continue; }

      cities[root]->addCityConnection(*cities[connected[i]]);
    }
  }
}

vector<City*>
World::getCities() {
  vector<City*> vCities;
  copy(cities.begin(), cities.end(), vCities.begin());
  return vCities;
}
