#include "glitchApp.h"

//--------------------------------------------------------------
void glitchApp::setup(){
    parameters.setName("parameters");
    parameters.add(num.set("numFBO", 50, 1, 200)); //slider for FBO
    parameters.add(frames.set("frameRate",60,2,60)); //slider for frameRate
    parameters.add(width.set("width",0,0,2000)); //slider adds width
    parameters.add(height.set("height",0,0,1000)); //slider adds height
    parameters.add(blendmode.set("blendmode", 0,0,5)); //changes blendmode
    parameters.add(numS.set("numSamples",0,0,5)); //changes the number of samples for FBO
    gui.setup(parameters);
    gui.add(rendertoggle.setup("gl_render toggle",true)); //adds a toggle for render mode for FBO
    ofBackground(0);
    ofSetVerticalSync(false);
    
}

//--------------------------------------------------------------
void glitchApp::update(){

}

//--------------------------------------------------------------
void glitchApp::draw(){
    gui.draw();
    ofDrawBitmapString("0:disabled", 10, 180);
    ofDrawBitmapString("1:alpha",10,192);
    ofDrawBitmapString("2:add",10,204);
    ofDrawBitmapString("3:screen",10,216);
    ofDrawBitmapString("4:subtract",10,228);
    ofDrawBitmapString("5:multiply",10,240);

}


