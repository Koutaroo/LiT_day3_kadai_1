#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
    ofSetCircleResolution(100);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
      dist_a = ofDist(mouseX, mouseY, ofGetWidth()/2, ofGetHeight()/2);
    
    
    if(mouseY < ofGetHeight()/2){
        if(mouseX > ofGetWidth()/2){
            c = 0 + 64 * (ofGetHeight()/2 - mouseY)/dist_a;
        }
        else{
            c = 64 + 64 * (ofGetWidth()/2 - mouseX)/dist_a;
        }
    }
    
    else{
        if(mouseX < ofGetWidth()/2){
            c = 128 + 64 * (mouseY - ofGetHeight()/2)/dist_a;
        }
        else{
            c = 192 + 64 * (mouseX - ofGetWidth()/2)/dist_a;
        }
    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(150, 150, 150);
    ofSetLineWidth(2);
    ofDrawLine(mouseX, 0, mouseX, ofGetHeight());
    ofDrawLine(0,mouseY, ofGetWidth(), mouseY);
    
    ofSetColor(180, 180, 180);
    ofSetLineWidth(1);
    a=0;
    b=0;
    for(int i=0; i<29; i++){
        a += ofGetWidth()/30;
        ofDrawLine(a, 0, a, ofGetHeight());
        
    }
    
    for(int j=0; j<22; j++){
        b += ofGetWidth()/30;
        ofDrawLine(0, b, ofGetWidth(), b);
        
    }
    
    dist_a = ofDist(mouseX, mouseY, ofGetWidth()/2, ofGetHeight()/2);
    
    ofSetLineWidth(2);
    
  
    
    
    ofDrawLine(mouseX, mouseY, ofGetWidth()/2, ofGetHeight()/2);
    
    ofSetColor(ofColor::fromHsb(c, 255, 255));
    
    ofNoFill();
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, dist_a);
    
    ofFill();
    
   
    
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, dist_a /4);
    
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
