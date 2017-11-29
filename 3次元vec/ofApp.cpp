#include "ofApp.h"
/*éQçlï∂å£
http://yoppa.org/geidai_graphb11/3296.html
*/


//--------------------------------------------------------------
void ofApp::setup() {
	ofSetFrameRate(60);
	ofEnableBlendMode(OF_BLENDMODE_ADD);
	ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update() {

	for (int i = 0; i < pos.size(); i++) {
		pos[i] += vel[i];
	}
	
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofPushMatrix();
	ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
	cam.begin();
	glEnable(GL_DEPTH_TEST);
	ofSetColor(255);

	for (int i = 0; i < pos.size(); i++) {
		ofPushMatrix();
		ofTranslate(pos[i]);
	
		sphere.drawWireframe();
		//ofSphere(10);
		

		ofPopMatrix();
	
	}
	glDisable(GL_DEPTH_TEST);

	cam.end();
	ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

	if (key == 'c') {
		pos.clear();
		vel.clear();
	}

	if (key == 'f') {
		ofToggleFullscreen();
	}

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {
	ofVec3f p;
	p.set(x, y);
	pos.push_back(p);
	ofVec3f v;
	v.set(ofRandom(-1, 1), ofRandom(-1, 1), ofRandom(-1, 1));
	vel.push_back(v);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
	cam.setPosition(ofGetWidth()/2,ofGetHeight()/2,-100);
	cam.lookAt(ofVec3f(ofGetWidth() / 2, ofGetHeight() / 2, 1));

	//cam.begin();

	//cam.end();
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}