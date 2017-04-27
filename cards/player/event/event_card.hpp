#ifndef __EVENT_CARD_INCLUDED__
#define __EVENT_CARD_INCLUDED__

#include "../../../common/pandemic.hpp"
#include "../player_card.hpp"

class EventCard : public PlayerCard {
public:
  virtual void play() const = 0;
  virtual CardType cardType() const { return Hand; }
};

struct EventCards {
private:
  static vector<EventCard*>* eventCards;

public:
  EventCards(EventCard* eventCard) {
    if (!eventCards) {
      eventCards = new vector<EventCard*>;
    }
    eventCards->push_back(eventCard);
  }

  static const vector<EventCard*>& getEventCards();
};

#define REGISTER_EVENT_CARD(C) EventCards temp_eventCards_##C(new C);

#endif
