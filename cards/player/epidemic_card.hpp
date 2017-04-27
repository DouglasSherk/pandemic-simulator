#ifndef __EPIDEMIC_CARD_INCLUDED__
#define __EPIDEMIC_CARD_INCLUDED__

#include "player_card.hpp"

class EpidemicCard : public PlayerCard {
public:
  virtual void play() const;
  virtual void drawn() const;
  virtual CardType cardType() const { return Instant; };
};

#endif
