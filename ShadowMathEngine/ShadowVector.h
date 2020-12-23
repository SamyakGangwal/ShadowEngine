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
}