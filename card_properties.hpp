#ifndef PROPS_HPP
#define PROPS_HPP

enum Suit {
    SPADES,
    CLUBS,
    HEARTS,
    DIAMONDS
};

enum Value {
    ACE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING
};

char Suit_Translation[4] = {
    'S', 'C', // blacks
    'H', 'D'  // reds
};

char Value_Translation[13] = {
    'A', '2', '3', '4', '5', '6',
    '7', '8', '9', '10', 'J', 'Q', 'K'
};

#endif // PROPS_HPP
