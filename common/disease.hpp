#ifndef __DISEASE_INCLUDED__
#define __DISEASE_INCLUDED__

#include <string>

enum Disease {
  Disease_Red,
  Disease_Blue,
  Disease_Black,
  Disease_Yellow,
  Disease_Max
};

const std::string DiseaseNames[] = {
  "Red",
  "Blue",
  "Black",
  "Yellow"
};

#endif
