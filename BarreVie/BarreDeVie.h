#pragma once
#include "ofmain.h"
class BarreDeVie
{
public:
	BarreDeVie();
	~BarreDeVie();
	void initBarreVie();
	float vie;
	void majBarreVie();
	int tailleX;
	int tailleY;
	void baisse(float x, float y);
	void augmente(float x,float y);
	float taillebarre1,taillebarre2,taillebarre3;
	float pourVie;
	float pourVieBarre;
	float elec, sprint;
	float pourElec, pourSprint;
	float pourElecBarre, pourSprintBarre;
	int brunoFileLesDegat,brunoFileLeSpeed,brunoFileLelec;

	ofImage bdvie;
};

