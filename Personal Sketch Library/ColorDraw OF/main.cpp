#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	ofSetupOpenGL(1200,720, OF_WINDOW);
	//ofGLFWWindowSettings settings;
	//settings.decorated = false;				//show border 
	//settings.setSize(1200, 720);
	//ofCreateWindow(settings);
	ofSetWindowTitle("Console App");
	ofRunApp(new ofApp());
}
