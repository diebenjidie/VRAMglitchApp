#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    ofSetFrameRate(gui->frames); //allows for frameRate change
    float width  = ofGetWidth() + gui->width; //adds pixels to width, stretching width
    float height  = ofGetHeight() + gui->height; //adds pixels to height, stretching height
    int gl_render = GL_RGBA32F_ARB; //render mode, not all render modes work
    int gl_render2 = GL_RGBA; //best for details
    int val; //empty variable for storing render mode integer
    int numSamples = gui->numS; //changes the sampling of FBOs
    
        //this sets up a toggle for to change the val to the int value of render mode
    if (gui->rendertoggle == true){
        val = gl_render2;
    } else {
        val = gl_render;
    };
    
    
    fbo.clear(); //keeps vector clear
    int numFbo = gui->num;
    for (int i = 0; i < numFbo; i++)
    {
        ofFbo rgb;
        rgb.allocate(width,height, val, numSamples);
        fbo.push_back(rgb);
        
    };//this for-loop generates FBOs in the vector

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBlendMode mode;
        //takes the integer val from slider and converts to enum for blendmode
    mode = static_cast<ofBlendMode>(gui->blendmode.get());
    ofEnableBlendMode(mode);
        //draws out the FBOs generated
    for (auto& rgb:fbo)
    {
        rgb.draw(0,0);
    };

}


