#ifndef __AIRLIFT_CARD_INCLUDED__
#define __AIRLIFT_CARD_INCLUDED__

#include "event_card.hpp"

class AirliftCard : public EventCard {
public:
  virtual void play() const;
};

#endif
