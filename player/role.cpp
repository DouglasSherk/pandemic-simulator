#include "role.hpp"

#include "../game/game.hpp"

REGISTER_BASE(Role)

void
Role::onTurn() {
  act();
  drawPlayerCard();
  drawPlayerCard();
}

void
Role::drawPlayerCard() {
  const PlayerCard* drawnCard = gGame->getPlayerDeck()->drawCard();
  if (drawnCard) {
    drawnCard->drawn();
  }
}

void
Role::onNewTurn() {
  
}
