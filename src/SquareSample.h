//
//  SquereSample.hpp
//  meshSample
//
//  Created by SakuragiYoshimasa on 2015/10/30.
//
//

#ifndef SquareSample_h
#define SquareSample_h

#include "SceneElement.cpp"
class SquereSample : public SceneElement {
public:
    void init() override;
    void start() override;
    void draw() override;
    void stop() override;
    
    SquereSample(){};
private:
    ofMesh mesh;
};
#endif
