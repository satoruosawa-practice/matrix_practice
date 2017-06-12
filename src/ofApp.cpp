#include "ofApp.h"

// ref URL
// http://qiita.com/kenjihiranabe/items/945232fbde58fab45681

//--------------------------------------------------------------
void ofApp::setup(){
  initMesh(&mesh_);
  
  //  float theta = ofDegToRad(1);
  float theta = 1.0f;
  
  ofVec3f axis = ofVec3f(1, 1, 1);
  axis.normalize();
  qt_ = ofQuaternion(theta, axis);
}

ofVec4f ofApp::hamilton(const ofVec4f &a_vec4, const ofVec4f &b_vec4) {
  ofVec3f a_vec3 = ofVec3f(a_vec4.x, a_vec4.y, a_vec4.z);
  ofVec3f b_vec3 = ofVec3f(b_vec4.x, b_vec4.y, b_vec4.z);
  
  ofVec3f term1 = a_vec3.getCrossed(b_vec3) +
  b_vec4.w * a_vec3 +
  a_vec4.w * b_vec3;
  float term2 = a_vec4.w * b_vec4.w
  - a_vec3.dot(b_vec3);
  return ofVec4f(term1.x, term1.y, term1.z, term2);
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
  for (int i = 0; i < mesh_.getNumVertices(); i++){
    mesh_.setVertex(i, qt_ * mesh_.getVertex(i));
//    float theta = 1.0f;
//    ofVec3f axis = ofVec3f(1, 1, 1);
//    axis.normalize();
//    mesh_.setVertex(i, mesh_.getVertex(i).getRotated(theta, axis));
  }
}

//--------------------------------------------------------------
void ofApp::draw(){
  cam_.begin(); {
    ofDrawAxis(100);
    mesh_.draw();
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
