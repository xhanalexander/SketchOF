#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundAuto(false);
	blend = OF_BLENDMODE_ADD;
	ofBackground(15);
	ofEnableSmoothing();
	ofSetCircleResolution(100);
	//ofHideCursor();
	//ofSetWindowPosition(360, 100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {
		ofEnableBlendMode(OF_BLENDMODE_ADD);
		ofEnableBlendMode(blend);

		ofSetColor(ofRandom(75), ofRandom(75), ofRandom(75));
		ofSetRectMode(OF_RECTMODE_CENTER);
		ofDrawCircle(ofGetMouseX(), ofGetMouseY(), 70, 70);

		ofPopMatrix();
		ofDisableBlendMode();
		//ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
		//ofRotate(500);
		//ofRotateZ(ofGetElapsedTimef() * 1000);
		//ofSetColor(72, 72, 247);
		//ofDrawCircle(ofGetWidth() / 2, ofGetHeight() / 2, 120);
	}

	if (ofGetMousePressed(OF_MOUSE_BUTTON_RIGHT)) {
		ofBackground(15);
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	//ofSetColor(ofRandom(252), ofRandom(252), ofRandom(252));
	//size = ofRandom(120, 200);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	cout << "Released Test..." << x << " , " << y << endl;

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
