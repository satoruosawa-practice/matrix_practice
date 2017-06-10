#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  initMesh(&mesh_roll);
}

void ofApp::initMesh(ofMesh * m) {
  m->addVertex(ofVec3f(0,0,0));
  m->addVertex(ofVec3f(100,0,0));
  m->addVertex(ofVec3f(100,100,0));
  m->addVertex(ofVec3f(0,100,0));
  m->addIndex(0);
  m->addIndex(1);
  m->addIndex(2);
  m->addIndex(0);
  m->addIndex(2);
  m->addIndex(3);
}

//--------------------------------------------------------------
void ofApp::update(){
  float theta = ofDegToRad(0.1);
  ofMatrix4x4 mat4 = ofMatrix4x4(cos(theta), -sin(theta), 0, 0,
                                 sin(theta), cos(theta), 0, 0,
                                 0, 0, 1, 0,
                                 0, 0, 0, 1);
  for (int i = 0; i < mesh_roll.getNumVertices(); i++){
    mesh_roll.setVertex(i, mat4 * mesh_roll.getVertex(i));
  }

}

//--------------------------------------------------------------
void ofApp::draw(){
  cam_.begin(); {
    ofDrawAxis(100);
    mesh_roll.draw();
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
