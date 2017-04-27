#ifndef __CONSTANTS_INCLUDED__
#define __CONSTANTS_INCLUDED__

/**
 * Disease cube constants.
 */
typedef unsigned short disease_cubes;
#define MAX_DISEASE_CUBES 3

#define MAX_OUTBREAKS 7

#define MAX_INFECTION_RATES 7

#define MAX_EPIDEMIC_CARDS 6

const int INFECTION_RATES[MAX_INFECTION_RATES] = {
  2, 2, 2, 3, 3, 4, 4
};

#endif
