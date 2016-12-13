#include "ofMain.h"
#include "ofApp.h"
#include "ofAppGLFWWindow.h"
#include "glitchApp.h"

//========================================================================
int main( ){

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	
    
    ofGLFWWindowSettings settings;
    
    //sets up the window for the output/main app
    settings.width = 1024;
    settings.height = 768;
    settings.resizable = true;
    shared_ptr<ofAppBaseWindow> mainWindow = ofCreateWindow(settings);
    
    //sets up the window for the gui for the app, or in this case "glitchApp"
    settings.width = 300;
    settings.height = 300;
    settings.resizable = false;
    shared_ptr<ofAppBaseWindow> guiWindow = ofCreateWindow(settings);
    
    //this shares the values of each respective app to their respective windows
    shared_ptr<ofApp> mainApp(new ofApp);
    shared_ptr<glitchApp> guiApp(new glitchApp);
    mainApp->gui = guiApp;
    
    ofRunApp(guiWindow,guiApp);
    ofRunApp(mainWindow,mainApp);
    ofRunMainLoop();

}
