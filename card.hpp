#ifndef CARD_HPP
#define CARD_HPP
#include "card_properties.hpp"

class Card {
public:
    Card(Suit suit, Value value);
    Suit m_suit;
    Value m_value;
};

#endif // CARD_HPP
