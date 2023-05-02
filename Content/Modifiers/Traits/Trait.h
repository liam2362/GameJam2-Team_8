#include <string>;
using namespace std;
#pragma once

class Trait
{

public:

	virtual	string getTraitName() = 0;
	virtual string getTraitDesc() = 0;
	virtual float getScoreModifier() = 0;

private:

	float scoreModifier = 0;

};

