#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include "card.hpp"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);

    // Events:
    connect(ui->action_Exit, SIGNAL(triggered()), this, SLOT(close()));

    // shuffle the cards and get one.
    connect(ui->btnShuffle, SIGNAL(clicked()), this, SLOT(shuffle()));

    // init the cards.

    // Spades
    cards.push_back(Card(SPADES, ACE));
    cards.push_back(Card(SPADES, TWO));
    cards.push_back(Card(SPADES, THREE));
    cards.push_back(Card(SPADES, FOUR));
    cards.push_back(Card(SPADES, FIVE));
    cards.push_back(Card(SPADES, SIX));
    cards.push_back(Card(SPADES, SEVEN));
    cards.push_back(Card(SPADES, EIGHT));
    cards.push_back(Card(SPADES, NINE));
    cards.push_back(Card(SPADES, TEN));
    cards.push_back(Card(SPADES, JACK));
    cards.push_back(Card(SPADES, QUEEN));
    cards.push_back(Card(SPADES, KING));

    // Clubs
    cards.push_back(Card(CLUBS, ACE));
    cards.push_back(Card(CLUBS, TWO));
    cards.push_back(Card(CLUBS, THREE));
    cards.push_back(Card(CLUBS, FOUR));
    cards.push_back(Card(CLUBS, FIVE));
    cards.push_back(Card(CLUBS, SIX));
    cards.push_back(Card(CLUBS, SEVEN));
    cards.push_back(Card(CLUBS, EIGHT));
    cards.push_back(Card(CLUBS, NINE));
    cards.push_back(Card(CLUBS, TEN));
    cards.push_back(Card(CLUBS, JACK));
    cards.push_back(Card(CLUBS, QUEEN));
    cards.push_back(Card(CLUBS, KING));

    // Hearts
    cards.push_back(Card(HEARTS, ACE));
    cards.push_back(Card(HEARTS, TWO));
    cards.push_back(Card(HEARTS, THREE));
    cards.push_back(Card(HEARTS, FOUR));
    cards.push_back(Card(HEARTS, FIVE));
    cards.push_back(Card(HEARTS, SIX));
    cards.push_back(Card(HEARTS, SEVEN));
    cards.push_back(Card(HEARTS, EIGHT));
    cards.push_back(Card(HEARTS, NINE));
    cards.push_back(Card(HEARTS, TEN));
    cards.push_back(Card(HEARTS, JACK));
    cards.push_back(Card(HEARTS, QUEEN));
    cards.push_back(Card(HEARTS, KING));

    // Diamonds
    cards.push_back(Card(DIAMONDS, ACE));
    cards.push_back(Card(DIAMONDS, TWO));
    cards.push_back(Card(DIAMONDS, THREE));
    cards.push_back(Card(DIAMONDS, FOUR));
    cards.push_back(Card(DIAMONDS, FIVE));
    cards.push_back(Card(DIAMONDS, SIX));
    cards.push_back(Card(DIAMONDS, SEVEN));
    cards.push_back(Card(DIAMONDS, EIGHT));
    cards.push_back(Card(DIAMONDS, NINE));
    cards.push_back(Card(DIAMONDS, TEN));
    cards.push_back(Card(DIAMONDS, JACK));
    cards.push_back(Card(DIAMONDS, QUEEN));
    cards.push_back(Card(DIAMONDS, KING));
}

MainWindow::~MainWindow() {
    delete ui;
}


QString translate_card(const Card card) {
    QChar value = Value_Translation[card.m_value];
    QChar suit  = Suit_Translation[card.m_suit];

    return QString(value).append(suit);
}

/**
  Shuffle the cards.
 * @brief MainWindow::shuffle
 */
void MainWindow::shuffle() {
    // first let's select a random number between 1 and 52
    int r = 1 + (rand() % 52);
    ui->lblCard->setText(translate_card(cards[r]));
}
