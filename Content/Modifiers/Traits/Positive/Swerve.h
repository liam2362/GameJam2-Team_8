#include "Trait.h";
#pragma once
class Swerve : public Trait
{

public:

	float getScoreModifier();
	string getTraitName();
	string getTraitDesc();
	float getScoreModifier();
	float getTurnLength();

private:

	const float scoreModifier;
	const float turnLengthTime;

};

