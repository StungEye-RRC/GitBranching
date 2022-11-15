#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	gui.setup(); // most of the time you don't need a name
	gui.add(circleRadius.setup("Circle radius", 140, 10, 300));
	gui.add(
		circleCenter.setup("Circle center", { ofGetWidth() * .25, ofGetHeight() * .5 }, { 0, 0 },
			{ ofGetWidth(), ofGetHeight() }));
	gui.add(circleColor.setup("Circle color", ofColor(100, 100, 140), ofColor(0, 0), ofColor(255, 255)));
	gui.add(squareWidth.setup("Square size", 280, 10, 600));
	gui.add(
		squareCenter.setup("Square center", { ofGetWidth() - ofGetWidth() * .25, ofGetHeight() * .5 }, { 0, 0 },
			{ ofGetWidth(), ofGetHeight() }));
	gui.add(squareColor.setup("Square color", ofColor(90, 130, 115), ofColor(0, 0), ofColor(255, 255)));

	// This makes the circles nice and smooth.
	ofSetCircleResolution(60);

	// Let's position rectangle using their center position, not the top left corner.
	ofSetRectMode(OF_RECTMODE_CENTER);
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofSetColor(circleColor);
	ofDrawCircle(circleCenter, circleRadius);
	ofSetColor(squareColor);
	ofDrawRectangle(squareCenter, squareWidth, squareWidth);
	gui.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
