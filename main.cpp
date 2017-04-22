#include <iostream>

#include "common/pandemic.hpp"
#include "game/game.hpp"

int main(int argc, char** argv) {
  srand(unsigned(time(0)));
  gGame.play();
  return 0;
}
