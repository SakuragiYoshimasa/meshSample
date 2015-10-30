//
//  SquareSample.cpp
//  meshSample
//
//  Created by SakuragiYoshimasa on 2015/10/30.
//
//

#include "SquareSample.h"

void SquereSample::init(){
    mesh.addVertex(ofVec3f(100,100,0));
    mesh.addVertex(ofVec3f(100,200,0));
    mesh.addVertex(ofVec3f(200,200,0));
    mesh.addVertex(ofVec3f(200,100,0));

    mesh.useIndices = true;
    
    //GL_TRIANGLES
    mesh.addIndex(0);
    mesh.addIndex(1);
    mesh.addIndex(2);
    mesh.addIndex(0);
    mesh.addIndex(3);
    mesh.addIndex(2);
    
    mesh.addColor(ofColor(255,0,0));
    mesh.addColor(ofColor(0,255,0));
    mesh.addColor(ofColor(0,0,255));
    mesh.addColor(ofColor(0,0,0));
    
    
    //GL_LINES
    /*mesh.setMode(OF_PRIMITIVE_LINES);
    mesh.addIndex(0);
    mesh.addIndex(1);
    mesh.addIndex(1);
    mesh.addIndex(2);
    mesh.addIndex(2);
    mesh.addIndex(3);
    mesh.addIndex(3);
    mesh.addIndex(0);*/
}

void SquereSample::start(){
    ofBackground(255);
    ofSetColor(0);
    ofSetLineWidth(5);
    ofNoFill();
}

void SquereSample::draw(){
    
    mesh.draw();
    ofTranslate(200, 0);
    mesh.drawWireframe();
}

void SquereSample::stop(){
    ofFill();
}