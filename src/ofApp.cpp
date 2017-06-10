#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  mesh_.addVertex(ofVec3f(0,0,0));
  mesh_.addVertex(ofVec3f(100,0,0));
  mesh_.addVertex(ofVec3f(100,100,0));
  mesh_.addVertex(ofVec3f(0,100,0));
  mesh_.addIndex(0);
  mesh_.addIndex(1);
  mesh_.addIndex(2);
  mesh_.addIndex(0);
  mesh_.addIndex(2);
  mesh_.addIndex(3);
  
}

//--------------------------------------------------------------
void ofApp::update(){
  ofMatrix4x4 mat4 = ofMatrix4x4(1.001, 0, 0, 0,
                                 0, 1.001, 0, 0,
                                 0, 0, 1.001, 0,
                                 0, 0, 0, 1);
  for (int i = 0; i < mesh_.getNumVertices(); i++){
    mesh_.setVertex(i, mat4 * mesh_.getVertex(i));
  }

}

//--------------------------------------------------------------
void ofApp::draw(){
  cam_.begin(); {
    ofDrawAxis(100);
    mesh_.draw();
//    mesh_.drawWireframe();
  } cam_.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
