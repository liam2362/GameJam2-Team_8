#include "Trait.h";
#pragma once
class Thrillerseeker : public Trait
{

public:

	float getScoreModifier();
	string getTraitName();
	string getTraitDesc();
	float getMissModifier();
	float getHitModifier();

private:

	const float scoreModifierMiss;
	const float scoreModifierHit;

};

