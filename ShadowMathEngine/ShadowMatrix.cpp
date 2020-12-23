#include <iostream>
#include "ShadowMatrix.hpp"
using namespace std;

namespace ShadowEngine{
    void ShadowMatrix::show(){
        cout<<matrixData[0]<<"  "<<matrixData[3]<<"  "<<matrixData[6]<<endl;
        cout<<matrixData[1]<<"  "<<matrixData[4]<<"  "<<matrixData[7]<<endl;
        cout<<matrixData[2]<<"  "<<matrixData[5]<<"  "<<matrixData[8]<<endl;
    }
}