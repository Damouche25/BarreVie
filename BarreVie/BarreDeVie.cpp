#include "BarreDeVie.h"
BarreDeVie::BarreDeVie()
{
}

BarreDeVie::~BarreDeVie()
{
}

void BarreDeVie::initBarreVie() 
{
	vie = 150;
	sprint = 150;
	elec = 150;
	taillebarre1 = 250.0;
	taillebarre2 = 250.0;
	taillebarre3 = 250.0;
	bdvie.loadImage("barredevie.png");
	brunoFileLesDegat = 5;
	brunoFileLelec = 2;
	brunoFileLeSpeed = 6;
	pourVie = vie / brunoFileLesDegat;
	pourSprint = sprint / brunoFileLeSpeed;
	pourElec = elec / brunoFileLelec;
	pourElecBarre = taillebarre3 / pourElec;
	pourSprintBarre= taillebarre2 / pourSprint;
	pourVieBarre = taillebarre1 / pourVie;
}

void BarreDeVie::majBarreVie() 
{
	tailleX = ofGetWindowWidth();
	tailleY = ofGetWindowHeight();
	bdvie.draw(tailleX - 310, 10, 300, 95);
	ofSetColor(200, 0, 0);
	ofDrawRectRounded(tailleX - 265, 15, taillebarre1, 25,100);
	ofSetColor(255);
	ofSetColor(255,255,0);
	ofDrawRectRounded(tailleX - 265, 45, taillebarre2, 25, 100);
	ofSetColor(255);
	ofSetColor(0,200,0);
	ofDrawRectRounded(tailleX - 265, 75, taillebarre3, 25, 100);
	ofSetColor(255);
}

void BarreDeVie::baisse(float labaisse, float type)
{
	if (type == 1) {
		sprint = sprint - labaisse;
		taillebarre2 = taillebarre2 - pourSprintBarre;

		if (sprint < 0)
		{
			sprint = 0;
		}

		printf("%f", sprint);
		if (taillebarre2 < 0)
		{
			taillebarre2 = 0;
		}
	}
	if (type == 2) {
		elec = elec - labaisse;
		taillebarre3 = taillebarre3 - pourElecBarre;

		if (elec < 0)
		{
			elec = 0;
		}

		printf("%f", elec);
		if (taillebarre3 < 0)
		{
			taillebarre3 = 0;
		}

	}
}

void BarreDeVie::augmente(float lahausse,float type)
{
	if (type == 1) {
		sprint = sprint + lahausse;
		taillebarre2 = taillebarre2 + pourSprintBarre;

		if (sprint > 150)
		{
			sprint = 150;
		}

		printf("%f", sprint);
		if (taillebarre2 > 250)
		{
			taillebarre2 = 250;
		}
	}
	if (type == 2) {
		elec = elec + lahausse;
		taillebarre3 = taillebarre3 + pourElecBarre;

		if (elec > 150)
		{
			elec = 150;
		}

		printf("%f", elec);
		if (taillebarre3 > 250)
		{
			taillebarre3 = 250;
		}

	}
}

