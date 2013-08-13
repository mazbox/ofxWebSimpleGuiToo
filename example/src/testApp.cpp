#include "testApp.h"
#include "ofxWebSimpleGuiToo.h"
float hello = 0.5;
bool toggle = false;
//--------------------------------------------------------------
void testApp::setup(){
	
	webGui.addSlider("hello", hello, 0, 1);
	webGui.addToggle("toggle", toggle);
	
	webGui.startServer();
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

	ofBackground(toggle?255:0);
	ofSetHexColor(0x999999);
	ofRect(0, 0, ofGetWidth() * hello, ofGetHeight());
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}