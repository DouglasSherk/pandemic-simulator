#include <iostream>

#include "common/pandemic.hpp"
#include "game/game.hpp"

int main(int argc, char** argv) {
  srand(time(0));
  gGame = new Game(6);
  gGame->play();
  return 0;
}
