#include "Trait.h";
#pragma once
class Swerve : public Trait
{

public:

	float getScoreModifier();
	string getTraitName();
	string getTraitDesc();
	float getScoreModifier();
	float getMinTurnLength();
	float getMaxTurnLength();

private:

	const float scoreModifier;
	const float turnLengthTimeMin;
	const float turnLengthTimeMax;

};

