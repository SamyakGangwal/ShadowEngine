#include <iostream>
#include "ShadowMathEngine/ShadowVector.h"
#include "ShadowMathEngine/ShadowMatrix.h"
using namespace std;

int main(int argc, char* argv[]){
    ShadowEngine::ShadowVector v(1,2,3);
    cout<<v.x<<v.y<<v.z; 

    ShadowEngine::ShadowMatrix m(1,2,3,4,5,6,7,8,9);
    m.show();
}