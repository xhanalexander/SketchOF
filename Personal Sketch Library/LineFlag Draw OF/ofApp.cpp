#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ofSetBackgroundAuto(false);
	ofBackground(15);
	ofEnableSmoothing();
	ofSetCircleResolution(100);
	blend = OF_BLENDMODE_ADD;
	brushscale = 25;
	Montserrat.load("Montserrat-Regular.ttf",15);

	box2d.init();
	box2d.setGravity(0, 30);
	box2d.createGround();

	//ofHideCursor();
	//ofSetWindowPosition(360, 100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	//Montserrat.drawString("MENU : ", 70, 50);
	//Montserrat.drawString(" Q - W - E - R ", 70, 80);
	ofEnableBlendMode(OF_BLENDMODE_ADD);
	ofPushMatrix();
	ofSetLineWidth(1.5);
	if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT))
	{
		ofDrawLine(ofGetMouseX(), ofGetMouseY(), ofGetMouseX(), 720);
	}
	ofEnableBlendMode(blend);
	ofDisableBlendMode();
	ofPopMatrix();
	//scale += 0.05;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'z')
	{
		ofBackground(15);
		//Montserrat.drawString(">> DELETE", 50, 50);		//need to faded animate
	}

	switch (key)
	{
	case 'q':								
		ofSetColor(190, ofRandom(50), 0);	//red - yellow
		break;
	case 'w':								
		ofSetColor(0, ofRandom(50), 240);	//blue light
		break;
	case 'e':								
		ofSetColor(ofRandom(50), 0 , 190);	//purple
		break;
	case 'r':								
		ofSetColor(0, 190, ofRandom(50));	//Green Blue
		break;
	default:
		ofSetColor(255);
		break;
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
	//cout << "Line Widht = " << widhtline << "\n";
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	cout << "Released Test..." << x << " , " << y << "\n";
	//scale = 1.5;
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
