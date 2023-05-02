#include "Trait.h";
#pragma once
class Headphones : public Trait
{

public:

	float getScoreModifier();
	string getTraitName();
	string getTraitDesc();
	float getScoreModifier();
	float getFuelModifier();

private:

	const float scoreModifier;
	const float scoreModifier;

};