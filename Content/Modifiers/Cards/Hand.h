#include <vector>
#include "Card.h"
#pragma once
using namespace std;

class Deck;

class Hand
{
public:

	Hand(Deck* DrawFrom);
	Hand();
	~Hand();

	void setHandSize(int newSize);
	int getHandSize();
	vector<Card*> ListHand();
	Card* selectCard(int);
	void saveCard(Card*);

	vector<Card*> HandContents;
	const int selectionHandSize = 3;

private:

	int savedCardsAmount;


};