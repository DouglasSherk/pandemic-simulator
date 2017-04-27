#include "event_card.hpp"

vector<EventCard*>* EventCards::eventCards = NULL;

const vector<EventCard*>&
EventCards::getEventCards() {
  return *eventCards;
}
