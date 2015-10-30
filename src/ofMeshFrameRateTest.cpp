//
//  ofMeshFrameRateTest.cpp
//  meshSample
//
//  Created by SakuragiYoshimasa on 2015/10/31.
//
//

#include "ofMeshFrameRateTest.h"

void ofMeshFrameRateTest::init(){
    for(int i = 0; i < 200000; i++){
        mesh.addVertex(ofVec3f(i % 1000, i / 1000,0));
        vboMesh.addVertex(ofVec3f(i % 1000, i / 1000,0));
    }
    mesh.setMode(OF_PRIMITIVE_POINTS);
    vboMesh.setMode(OF_PRIMITIVE_POINTS);
}

void ofMeshFrameRateTest::start(){
    ofBackground(255);
    glPointSize(1);
}

void ofMeshFrameRateTest::update(){
    for(int i = 0; i < 200000; i++){
        if(!vboMode) mesh.setVertex(i,ofVec3f(i % 1000 + 500 * sin(ofGetElapsedTimeMillis()/100.0) , i / 1000 + 500 * cos(ofGetElapsedTimeMillis()/100.0),0));
        if(vboMode) vboMesh.setVertex(i,ofVec3f(i % 1000 + 500 * sin(ofGetElapsedTimeMillis()/100.0), i / 1000 + 500 * cos(ofGetElapsedTimeMillis()/100.0),0));
    }
}

void ofMeshFrameRateTest::draw(){
    if(vboMode){
        ofSetColor(0,0,255);
        vboMesh.draw();
    }else{
        ofSetColor(255,0,0);
        mesh.draw();
    }
}

void ofMeshFrameRateTest::keyReleased(int key){
    if(key == ' ') vboMode = !vboMode;
}

void ofMeshFrameRateTest::stop(){}