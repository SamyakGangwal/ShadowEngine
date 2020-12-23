#include <iostream>
#include "ShadowMatrix.h"

namespace ShadowEngine{
    void ShadowMatrix::show(){
        std::cout<<"\n";
        std::cout<<matrixData[0]<<"  "<<matrixData[3]<<"  "<<matrixData[6]<<std::endl;
        std::cout<<matrixData[1]<<"  "<<matrixData[4]<<"  "<<matrixData[7]<<std::endl;
        std::cout<<matrixData[2]<<"  "<<matrixData[5]<<"  "<<matrixData[8]<<std::endl;
    }
}