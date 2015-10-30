//
//  ofMeshFrameRateTest.hpp
//  meshSample
//
//  Created by SakuragiYoshimasa on 2015/10/31.
//
//

#ifndef ofMeshFrameRateTest_h
#define ofMeshFrameRateTest_h

#include "SceneElement.cpp"
class ofMeshFrameRateTest : public SceneElement {
public:
    void init() override;
    void start() override;
    void draw() override;
    void update() override;
    void stop() override;
    void keyReleased(int key) override;
    
private:
    ofMesh mesh;
    ofVboMesh vboMesh;
    bool vboMode = false;
};
#endif
