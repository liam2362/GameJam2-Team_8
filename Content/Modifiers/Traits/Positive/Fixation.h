#include "Trait.h";
#pragma once
class Swerve : public Trait
{

public:

	float getScoreModifier();
	string getTraitName();
	string getTraitDesc();
	float getScoreModifier();
	//vector<???> getObjectList();
	void setObjectList();

private:

	const float scoreModifier;
	//vector< ? ? ? > obejectsToHitList;

};

