#ifndef __EVENT_CARD_INCLUDED__
#define __EVENT_CARD_INCLUDED__

#include "../../../common/pandemic.hpp"
#include "../player_card.hpp"

class EventCard : public PlayerCard {
public:
  virtual void play() const = 0;
  virtual CardType cardType() const { return Hand; }
};

REGISTER_BASE_TEMPLATE(EventCard);

#define REGISTER_EVENT_CARD(C) REGISTER_CLASS(EventCard, C)
#define ALL_EVENT_CARDS() ALL_CLASS(EventCard)

#endif
