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
	taillebarre = 250.0;
	bdvie.loadImage("barredevie.png");
	pourVie = vie / 100;
	pourVieBarre = taillebarre / 100;
}

void BarreDeVie::majBarreVie() 
{
	
	tailleX = ofGetWindowWidth();
	tailleY = ofGetWindowHeight();
	//ofSetColor(0);
	
	bdvie.draw(tailleX - 310, 10, 300, 60);
	//ofSetColor(255);
	
	ofSetColor(200, 0, 0);
	
	ofDrawRectRounded(tailleX - 265, 15, taillebarre, 50,100);
	ofSetColor(255);
	


}

void BarreDeVie::baissePV()
{


}