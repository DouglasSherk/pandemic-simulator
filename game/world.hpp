#ifndef __WORLD_INCLUDED__
#define __WORLD_INCLUDED__

#include <unordered_map>

#include "../common/pandemic.hpp"
#include "../common/disease.hpp"
#include "city.hpp"

class World {
public:
  World();
  vector<City*> getCities();

protected:
  unordered_map<string, City*> cities;

private:
  static void formatCityName(string&);
  void loadCities();
  void loadCitiesGraph();
};

#endif
