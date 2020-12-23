#include <cmath>
#include "ShadowVector.h"

namespace ShadowEngine{
    void ShadowVector::operator+=(ShadowVector v){
        x+=v.x;
        y+=v.y;
        z+=v.z;
    }

    ShadowVector  ShadowVector::operator+(ShadowVector v){
        return ShadowVector(x+v.x,y+v.y,z+v.z);
    }

    void ShadowVector::operator-=(ShadowVector v){
        x-=v.x;
        y-=v.y;
        z-=v.z;
    }

    ShadowVector ShadowVector::operator-(ShadowVector v){
        return ShadowVector(x-v.x,y-v.y,z-v.z);
    }

    void ShadowVector::operator*=(const float s){
        x*=s;
        y*=s;
        z*=s;
    }

    ShadowVector ShadowVector::operator*(const float s){
        return ShadowVector(x*s,y*s,z*s);
    }

    void ShadowVector::operator/=(const float s){
        x/=s;
        y/=s;
        z/=s;
    }

    ShadowVector ShadowVector::operator/(const float s){
        return ShadowVector(x/s,y/s,z/s);
    }
    
    float ShadowVector::operator*(ShadowVector v){
        return x*v.x+y*v.y+z*v.z;
    }

    float ShadowVector::dot(ShadowVector v){
        return x*v.x+y*v.y+z*v.z;
    }

   
    float ShadowVector::getMagnitude(){
        return sqrt(pow(x,2)+pow(y,2)+pow(z,2));
    }

    float ShadowVector::getAngle(ShadowVector v){
        float dotProduct = this->dot(v);
        float modU = this->getMagnitude();
        float modV = v.getMagnitude();
        float radianAngle = acos(dotProduct/(modU*modV));
        return radianAngle*180/M_PI;
    }

   
    float ShadowVector::getAngleWithXaxis(){
        float modU = this->getMagnitude();
        float radianAngle = acos(x/(modU));
        return radianAngle*180/M_PI;
    }

    float ShadowVector::getAngleWithYaxis(){
        float modU = this->getMagnitude();
        float radianAngle = acos(y/(modU));
        return radianAngle*180/M_PI;
    }

    
    float ShadowVector::getAngleWithZaxis(){
        float modU = this->getMagnitude();
        float radianAngle = acos(z/(modU));
        return radianAngle*180/M_PI;
    }

    ShadowVector ShadowVector::cross(ShadowVector v){
        return ShadowVector( y*v.z-z*v.y,
                z*v.x-x*v.z,
                x*v.y-y*v.x);
    }

    ShadowVector ShadowVector::getUnitVector(){
        float magnitude = this->getMagnitude();
        return ShadowVector(x/magnitude,y/magnitude,z/magnitude);
    }

}