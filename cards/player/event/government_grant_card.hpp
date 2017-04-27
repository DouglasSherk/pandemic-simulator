#ifndef __GOVERNMENT_GRANT_CARD_INCLUDED__
#define __GOVERNMENT_GRANT_CARD_INCLUDED__

#include "event_card.hpp"

class GovernmentGrantCard : public EventCard {
public:
  virtual void play() const;
};

#endif
