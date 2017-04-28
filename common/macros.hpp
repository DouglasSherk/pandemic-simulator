#ifndef __MACROS_INCLUDED__
#define __MACROS_INCLUDED__

#define REGISTER_ENTITY_BEGIN(T) T* __ent__##T = new T;
#define REGISTER_ENTITY_END() ;

#define GAME_ACCESSIBLE() friend class Game; friend class World; friend class PlayerDeck;

#endif
