#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class glitchApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    ofParameterGroup parameters;
    ofParameter<int>num;
    ofParameter<int> frames;
    ofParameter<float> width;
    ofParameter<float> height;
    ofParameter<int> blendmode;
    ofParameter<int> numS;
    ofxToggle rendertoggle;
    ofxPanel gui;
		
};
