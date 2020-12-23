#include <cmath>

namespace ShadowEngine{
    class ShadowVector{
    public:
        float x;
        float y;
        float z;
    
    ShadowVector(float nX=0,float nY=0,float nZ=0){
        x=nX;
        y=nY;
        z=nZ;
    }
    
    
    /**
     * @brief  += Operator for ShadowVector
     * @note   
     * @param  v: ShadowVector Object 
     * @retval None
     */
    void operator+=(ShadowVector v);

    /**
     * @brief  Additon Operator for ShadowVector
     * @note   
     * @param  v: ShadowVector Object 
     * @retval A new ShadowVector object with added values
     */
    ShadowVector operator+(ShadowVector v);

    /**
     * @brief  -= Operator for ShadowVector
     * @note   
     * @param  v: ShadowVector Object 
     * @retval None
     */
    void operator-=(ShadowVector v);

    /**
     * @brief  Subtraction Operator for ShadowVector
     * @note   
     * @param  v: ShadowVector Object 
     * @retval A new ShadowVector object with subtracted values
     */
    ShadowVector operator-(ShadowVector v);

    /**
     * @brief  *=  Operator for Scaler Multiplication of ShadowVector
     * @note   
     * @param  s: A scaler value 
     * @retval None
     */
    void operator*=(const float s);

    /**
     * @brief  Scaler Multiplication of ShadowVector
     * @note   
     * @param  s: A scaler value 
     * @retval ShadowVector object with Multiplied Values
     */
    ShadowVector operator*(const float s);

    /**
     * @brief  /=  Operator for Scaler Division of ShadowVector
     * @note   
     * @param  s: A scaler value 
     * @retval None
     */
    void operator/=(const float s);

    /**
     * @brief  Scaler Division of ShadowVector
     * @note   
     * @param  s: A scaler value 
     * @retval ShadowVector object with Divided Values
     */
    ShadowVector operator/(const float s);
    
    /**
     * @brief  Vector Dot Product of ShadowVector
     * @note   
     * @param  v: A ShadowVector object
     * @retval Dot Product
     */
    float operator*(ShadowVector v);

    /**
     * @brief  Vector Dot Product of ShadowVector
     * @note   
     * @param  v: A ShadowVector object
     * @retval Dot Product
     */
    float dot(ShadowVector v);

    /**
     * @brief  Get Magnitude of ShadowVector Object
     * @note   
     * @param  
     * @retval Magnitude
     */
    float getMagnitude();

    /**
     * @brief  Get Angle between 2 ShadowVector
     * @note   
     * @param  v: A ShadowVector object
     * @retval Angle
     */
    float getAngle(ShadowVector v);

    /**
     * @brief  Get Angle between ShadowVector and x-axis
     * @note   
     * @param 
     * @retval Angle
     */
    float getAngleWithXaxis();

    /**
     * @brief  Get Angle between ShadowVector and y-axis
     * @note   
     * @param 
     * @retval Angle
     */
    float getAngleWithYaxis();

    /**
     * @brief  Get Angle between ShadowVector and z-axis
     * @note   
     * @param 
     * @retval Angle
     */
    float getAngleWithZaxis();

    /**
     * @brief  Cross Product of 2 ShadowVector
     * @note   
     * @param  v: A ShadowVector object
     * @retval ShadowVector Object with Cross Product
     */
    ShadowVector cross(ShadowVector v);

    /**
     * @brief  Get Unit Vector of ShadowVector
     * @note   
     * @param  
     * @retval Unit Vector
     */
    ShadowVector getUnitVector();

    };

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