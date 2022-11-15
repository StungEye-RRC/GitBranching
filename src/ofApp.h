#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp {

public:
	void setup() override;
	void update() override;
	void draw() override;

	ofxPanel gui;
	ofxFloatSlider circleRadius;
	ofxColorSlider circleColor;
	ofxVec2Slider circleCenter;
	ofxFloatSlider squareWidth;
	ofxColorSlider squareColor;
	ofxVec2Slider squareCenter;
};
