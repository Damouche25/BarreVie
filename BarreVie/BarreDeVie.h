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
	void baissePV();
	float taillebarre;
	float pourVie;
	float pourVieBarre;
	int brunoFileLesDegat;
	ofImage bdvie;
};

