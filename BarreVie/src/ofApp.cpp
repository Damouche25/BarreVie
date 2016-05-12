#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	lancementBarreDeVie.initBarreVie();
	sprint=5;//la baisse de sprint
	elec=5;//la baisse d'électricité
}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	lancementBarreDeVie.majBarreVie();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'a') 
	{
		lancementBarreDeVie.vie = lancementBarreDeVie.vie - lancementBarreDeVie.brunoFileLesDegat;
		lancementBarreDeVie.taillebarre1 = lancementBarreDeVie.taillebarre1 - lancementBarreDeVie.pourVieBarre;
		printf("%f",lancementBarreDeVie.vie);
	}
	if (lancementBarreDeVie.taillebarre1 <= 0) 
	{
		lancementBarreDeVie.taillebarre1 = 0;
	}
	
	if (key == 'z')
	{
		lancementBarreDeVie.augmente(elec, 2);//en premier:soit sprint, soit elec c'est ce qu'on retire ou on ajoute selon la méthode
	}											//En deuxième, c'est le type, 1 c'est sprint, soit c'est elec le type 2
	if (key == 'e')
	{
		lancementBarreDeVie.baisse( elec,2);
	}
	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
