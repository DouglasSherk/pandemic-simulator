/**
 * Use as:
 *  #define REGISTER_X(T) REGISTER_CLASS(X, T)
 *  #define ALL_X() ALL_CLASS(X)
 */


#ifndef __REGISTER_INCLUDED__
#define __REGISTER_INCLUDED__

#include "pandemic.hpp"

#define REGISTER_BASE_TEMPLATE(C) \
  struct C##s { \
  private: \
    static vector<C*>* ts; \
  \
  public: \
    C##s(C* c) { \
      if (!ts) { \
        ts = new vector<C*>; \
      } \
      ts->push_back(c); \
    } \
  \
    static const vector<C*>& get() { return *ts; } \
  };

#define REGISTER_BASE(C) vector<C*>* C##s::ts = NULL;
#define REGISTER_CLASS(C,T) \
  namespace temp_##C { \
    C##s \
    temp_register_##T(__ent__##T); \
  }
#define ALL_CLASS(C) C##s::get()

#endif
