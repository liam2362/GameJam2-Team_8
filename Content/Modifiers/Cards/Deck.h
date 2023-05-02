#include <vector>
#include "Card.h"
#pragma once
using namespace std;

class Hand;

class Deck
{
public:

	Deck();
	Deck(const Deck& rhs);
	Deck& operator=(const Deck& rhs);
	~Deck();

	Card* getCard();
	Card* combineTraits();
	Trait* getTrait();
	vector<Card*> getTraitList();

private:

	vector<Trait*> TraitList;
};