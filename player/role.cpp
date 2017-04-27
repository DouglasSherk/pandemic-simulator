#include "role.hpp"

#include "../game/game.hpp"

vector<Role*>* Roles::roles = NULL;

const vector<Role*>&
Roles::getRoles() {
  return *roles;
}

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
