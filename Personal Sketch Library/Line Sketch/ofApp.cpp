#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	scale = 1;
	ofSetBackgroundAuto(false);
	blend = OF_BLENDMODE_ADD;
	ofBackground(15);
	ofEnableSmoothing();
	ofSetCircleResolution(100);

	// Box2d
	box2d.init();
	box2d.setGravity(0, 30);
	box2d.createGround();
	box2d.setFPS(60.0);

	//ofHideCursor();
	//ofSetWindowPosition(360, 100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofEnableBlendMode(OF_BLENDMODE_ADD);
	ofEnableBlendMode(blend);	
	ofPushMatrix();
	//ofScale(scale);
	ofSetLineWidth(widhtline);

	//ofSetColor(0,20,120);
	//ofDrawEllipse(600, 360, 5, 5);

	if (ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {
		ofSetColor(ofRandom(20), ofRandom(255), ofRandom(255));
		ofSetRectMode(OF_RECTMODE_CENTER);
		ofDrawLine(600, 360, ofGetMouseX(), ofGetMouseY());			//gambar garis
	}
	
	ofDisableBlendMode();
	ofPopMatrix();
	//scale += 0.01;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'z')
	{
		ofBackground(15);
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
	cout << "Line Widht = " << widhtline << "\n";
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
