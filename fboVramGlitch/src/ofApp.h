#pragma once

#include "ofMain.h"
#include "glitchApp.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
    
    std::vector<ofFbo> fbo; //puts fbos in vector
    shared_ptr<glitchApp> gui; //allows for changing variables between apps
};
