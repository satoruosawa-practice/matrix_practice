#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
  void initMesh(ofMesh * m);
  ofVec4f hamilton(const ofVec4f &a, const ofVec4f &b);
  
  ofMesh mesh_;
  ofEasyCam cam_;
  
//  ofVec4f qt_;
//  ofVec4f qt_con_;
  
  ofQuaternion qt_;  
};
