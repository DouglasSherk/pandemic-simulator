#include "forecast_card.hpp"

REGISTER_EVENT_CARD(ForecastCard);

void
ForecastCard::play() const {
  cout << "forecast" << endl;
}
