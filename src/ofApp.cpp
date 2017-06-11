#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  initMesh(&mesh_roll);
  initMesh(&mesh_pitch);
  initMesh(&mesh_yaw);
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
  ofMatrix4x4 roll = ofMatrix4x4(cos(theta), -sin(theta), 0, 0,
                                 sin(theta), cos(theta), 0, 0,
                                 0, 0, 1, 0,
                                 0, 0, 0, 1);
  for (int i = 0; i < mesh_roll.getNumVertices(); i++){
    mesh_roll.setVertex(i, roll * mesh_roll.getVertex(i));
  }
  ofMatrix4x4 pitch = ofMatrix4x4(1, 0, 0, 0,
                                  0, cos(theta), -sin(theta), 0,
                                 0, sin(theta), cos(theta), 0,
                                 0, 0, 0, 1);
  for (int i = 0; i < mesh_pitch.getNumVertices(); i++){
    mesh_pitch.setVertex(i, pitch * mesh_pitch.getVertex(i));
  }
  ofMatrix4x4 yaw = ofMatrix4x4(cos(theta), 0, sin(theta), 0,
                                0, 1, 0, 0,
                                -sin(theta), 0, cos(theta), 0,
                                0, 0, 0, 1);
  for (int i = 0; i < mesh_yaw.getNumVertices(); i++){
    mesh_yaw.setVertex(i, yaw * mesh_yaw.getVertex(i));
  }

}

//--------------------------------------------------------------
void ofApp::draw(){
  cam_.begin(); {
    ofDrawAxis(100);
    ofSetColor(255, 0, 0);
    mesh_roll.draw();
    ofSetColor(0, 255, 0);
    mesh_pitch.draw();
    ofSetColor(0, 0, 255);
    mesh_yaw.draw();
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
