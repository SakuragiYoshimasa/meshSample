//
//  MeshSampleManager.hpp
//  meshSample
//
//  Created by SakuragiYoshimasa on 2015/10/30.
//
//

#ifndef MeshSampleManager_h
#define MeshSampleManager_h

#include "SceneManager.cpp"
#include "SquareSample.h"
#include "ofMeshFrameRateTest.h"

class MeshSceneManager : public SceneManager {
public:
    void setup() override;
    void keyReleased(int key) override;
};
#endif
