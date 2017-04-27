#ifndef __FORECAST_CARD_INCLUDED__
#define __FORECAST_CARD_INCLUDED__

#include "event_card.hpp"

class ForecastCard : public EventCard {
public:
  virtual void play() const;
};

#endif
