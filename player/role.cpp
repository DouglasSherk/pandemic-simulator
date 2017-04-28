#include "role.hpp"

#include "../game/game.hpp"

REGISTER_BASE(Role)

void
Role::onTurn() {
  act();
  const PlayerCard* drawnCard = gGame->getPlayerDeck()->drawCard();
  drawnCard->drawn();
  drawnCard = gGame->getPlayerDeck()->drawCard();
  drawnCard->drawn();
}

void
Role::onNewTurn() {

}
