#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	ofSetupOpenGL(1080,720,OF_WINDOW);
	//ofGLFWWindowSettings settings;
	//settings.decorated = false;				//tampilin border 
	//settings.setSize(1200, 720);
	//ofCreateWindow(settings);
	ofSetWindowTitle("Beta Testing...");

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
