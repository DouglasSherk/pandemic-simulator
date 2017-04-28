#include "forecast_card.hpp"

REGISTER_ENTITY_BEGIN(ForecastCard);
  REGISTER_EVENT_CARD(ForecastCard);
REGISTER_ENTITY_END();

void
ForecastCard::play() const {
  cout << "forecast" << endl;
}
