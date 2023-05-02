#pragma once
#include <string>
#include "Trait.h"
using namespace std;

class Card
{

public:

	virtual string getCardName() = 0;
	virtual string getCardText() = 0;

private:

	Trait firstEffect;
	Trait secondEffect;

};

