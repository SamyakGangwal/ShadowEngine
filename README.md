# Shadow Engine
A game engine which focuses on solving the problems of scripting games in C++ by allowing developers to use Python as the main scripting language.

Methods:

ShadowVector.cpp

**void ShadowVector::operator+=(ShadowVector v)**
this function is used to add vector v to your vector

for example if you want to add vector 1i+2j+3k to 2i+1j+5k
this function will do that for you

**ShadowVector  ShadowVector::operator+(ShadowVector v)**
this function returns a new resultant vector after addition

for example when you add 1i+2j+3k and 2i+1j+5k this function will return
a ShadowVector object with x = 3, y = 3 , z = 8


**void operator-=(ShadowVector v)**
this function is used to subtract the vector from your vector

for example if you want to subtract vector 1i+2j+1k from 2i+4j+6k this 
function will do that for you

**ShadowVector operator-(ShadowVector v)**
this function returns a new resultant vector after subtraction

for example when you subtract 1i+2j+1k from 2i+4j+6k it will return 
a new subtracted vector

**void operator*=(const float s)**
this function will do a scaler multiplication of vectors 

for example you can multiply 4 with 1i+1j+1k

**ShadowVector operator/=(const float s)**
this function will perform a scaler division of vectors 

**ShadowVector operator/(const float s)**
this function returns scaler division of vectors


**float dot(ShadowVector v)**
this function returns a vector dot product of 2 vectors

**float getMagnitude()**
this function returns angle between 2 ShadowVector

**float getAngleWithXaxis()**
this function returns angle of vector with respect to x axis

**float getAngleWithYaxis()** 
this function returns angle of vector with respect to y axis

**float getAngleWithZaxis()**
this function returns angle of vector with respect to z axis

**ShadowVector cross(ShadowVector v)**
this function returns a shadowVector object of cross product

**ShadowVector getUnitVector()**
this function returns a unit vector of object of ShadowVector