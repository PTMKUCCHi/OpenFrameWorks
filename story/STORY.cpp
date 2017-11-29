#include "ofApp.h"

static const int cirNUM=100;
static const int recNUM = 100;
static const int triNUM = 100;
/*circle*/
float cir_x[cirNUM];
float cir_y[cirNUM];
float cir_z[cirNUM];

float radius[cirNUM];

/*rect*/
float rec_x[recNUM];
float rec_y[recNUM];
float rec_z[recNUM];

float w[recNUM];
float h[recNUM];

/*triangle*/
float tri_x[triNUM];
float tri_y[triNUM];
float tri_z[triNUM];
float dif_x[triNUM];
float dif_y[triNUM];


//z speed
float cir_S = 0;
float rec_S = 0;
float tri_S = 0;


//--------------------------------------------------------------
void ofApp::setup(){

	ofBackground(0);
	ofEnableAlphaBlending();
	ofSetColor(255,255,255,127);
	//circle
	for (int i = 0; i<cirNUM; i++) {

		cir_x[cirNUM] = ofRandom(ofGetWidth() - 100, ofGetWidth() + 100);
		cir_y[cirNUM] = ofRandom(ofGetHeight() - 100, ofGetHeight() + 100);
		cir_z[cirNUM] = ofRandom(- 100, 2000);

		radius[cirNUM]= ofRandom(100);

		
		//cir[i] = ofCircle(ofRandom(ofGetWidth()-100,ofGetWidth()+100),ofRandom(ofGetHeight()-100,ofGetHeight()+100),ofRandom(-100,2000));
	}

	//rect
	for (int i = 0; i<recNUM; i++) {
		rec_x[recNUM] = ofRandom(ofGetWidth() - 100, ofGetWidth() + 100);
		rec_y[recNUM] = ofRandom(ofGetHeight() - 100, ofGetHeight() + 100);
		rec_z[recNUM] = ofRandom(-100, 2000);

		w[recNUM] = ofRandom(40);
		h[recNUM] = ofRandom(40);

	}

	//triangle
	for (int i = 0; i<triNUM; i++) {
		tri_x[triNUM] = ofRandom(ofGetWidth() - 100, ofGetWidth() + 100);
		tri_y[triNUM] = ofRandom(ofGetHeight() - 100, ofGetHeight() + 100);
		tri_z[triNUM] = ofRandom(-100, 2000);

		dif_x[triNUM] = ofRandom(10,40);
		dif_y[triNUM] = ofRandom(10,40); 

	}
	
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	for (int i = 0; i < cirNUM;i++) {
		ofCircle(cir_x[i],cir_y[i],cir_z[i]+cir_S,radius[i]);
	}

	for (int i = 0; i < recNUM; i++) {
		ofRect(rec_x[i], rec_y[i], cir_z[i] + cir_S, w[i],h[i]);
	}
	for (int i = 0; i < triNUM; i++) {
		ofTriangle(rec_x[i], rec_y[i], rec_x[i]-dif_x[i], rec_y[i] + dif_y[i], rec_x[i] + dif_x[i], rec_y[i] + dif_y[i]);
	}


	cir_S++;
	rec_S++;
	tri_S++;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

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