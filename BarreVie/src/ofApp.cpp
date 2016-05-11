#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	lancementBarreDeVie.initBarreVie();
}

//--------------------------------------------------------------
void ofApp::update(){
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	lancementBarreDeVie.majBarreVie();
	lancementBarreDeVie.baissePV();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'a') 
	{
		lancementBarreDeVie.vie = lancementBarreDeVie.vie - lancementBarreDeVie.brunoFileLesDegat;
		
			lancementBarreDeVie.taillebarre = lancementBarreDeVie.taillebarre - (lancementBarreDeVie.pourVie*lancementBarreDeVie.pourVieBarre);
	}
	if (lancementBarreDeVie.taillebarre <= 0) 
	{
		lancementBarreDeVie.taillebarre = 0;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

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
