//
//  MeshSampleManager.cpp
//  meshSample
//
//  Created by SakuragiYoshimasa on 2015/10/30.
//
//

#include "MeshSampleManager.h"

void MeshSceneManager::setup(){
    this->elements.push_back(new SquereSample());
    this->elements.push_back(new ofMeshFrameRateTest());
}

void MeshSceneManager::keyReleased(int key){
    switch (key) {
        case '0':
            changeElement(0);
            break;
        case '1':
            changeElement(1);
            break;
        default:
            this->elements.at(elementIndex)->keyReleased(key);
            break;
    }
}