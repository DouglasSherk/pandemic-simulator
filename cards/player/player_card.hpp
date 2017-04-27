#ifndef __PLAYER_CARD_INCLUDED__
#define __PLAYER_CARD_INCLUDED__

#include "../card.hpp"

class PlayerCard : public Card {
public:
  enum CardType {
    Instant,
    Hand,
  };

  virtual CardType cardType() const = 0;

  virtual void play() const;
  virtual void drawn() const;
};

#endif
