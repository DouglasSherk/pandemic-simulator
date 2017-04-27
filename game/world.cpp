#include "../common/pandemic.hpp"
#include "city.hpp"
#include "world.hpp"

World::World() {
  loadCities();
  loadCitiesGraph();
}

void
World::loadCities() {
  ifstream infile("config/cities.txt");
  string line;
  while (getline(infile, line)) {
    int pos = line.find_first_of(' ');
    string diseaseName = line.substr(0, pos);
    string cityName = line.substr(pos + 1);
    int disease = -1;
    for (int i = 0; i < Disease_Max; i++) {
      if (diseaseName == DiseaseNames[i]) {
        disease = i;
      }
    }

    if (disease < 0 || disease >= Disease_Max) {
      throw invalid_argument("Disease is out of range");
    }

    cities.insert(make_pair(cityName, new City((Disease)disease, cityName)));
  }
}

void
World::loadCitiesGraph() {
  ifstream infile("config/cities_graph.txt");

  string line;
  while (getline(infile, line)) {
    stringstream connections;
    connections << line;

    string root;
    connections >> root;
    if (cities.find(root) == cities.end()) { continue; }

    while (!connections.eof()) {
      string connection;
      connections >> connection;

      if (cities.find(connection) == cities.end()) { continue; }
      cities[root]->addCityConnection(*cities[connection]);
    }
  }
}

vector<City*>
World::getCities() {
  vector<City*> vCities;
  for (auto it : cities) {
    vCities.push_back(it.second);
  }
  return vCities;
}
