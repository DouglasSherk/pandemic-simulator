#ifndef __CITY_INCLUDED__
#define __CITY_INCLUDED__

#include "../common/pandemic.hpp"
#include "../common/disease.hpp"
#include "../interfaces/turn_based.hpp"

class City : public TurnBased {
public:
  City();
  City(Disease, const string&);

  void addCityConnection(City&);
  void addDiseaseCubes(Disease, disease_cubes = 1);
  void removeDiseaseCubes(Disease, disease_cubes = 1);
  void clearDiseaseCubes(Disease);
  disease_cubes numDiseaseCubes(Disease) const;

protected:
  disease_cubes diseaseCubes[Disease_Max];
  vector<City *> connectedCities;

  void outbreak(Disease);
  virtual void onNewTurn();
  virtual void onTurn();

  Disease disease;
  string name;

  bool hasOutbreakedThisTurn;
};

#endif
