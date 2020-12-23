namespace ShadowEngine{
    class ShadowMatrix
    {
        public:
            float matrixData[9];

            ShadowMatrix(float m0,float m3,float m6,
                                float m1,float m4,float m7,
                                float m2,float m5,float m8){
                    
                    //row 1
                    matrixData[0]=m0;
                    matrixData[3]=m3;
                    matrixData[6]=m6;

                    //row 2
                    matrixData[4]=m1;
                    matrixData[1]=m4;
                    matrixData[7]=m7;

                    //row 3
                    matrixData[2]=m2;
                    matrixData[5]=m5;
                    matrixData[8]=m8;
                
            }

            /**
            * @brief  Prints the Matrix to Console
            * @note   
            * @param  
            * @retval None
            */
            void show();

    };
}