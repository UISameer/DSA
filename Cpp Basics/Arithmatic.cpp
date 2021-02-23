/*Goal: practice arithmetic operations in C++
**Write a program that calculates the volumes of:
**a cube, sphere, cone.
**Cube Volume = side^3
**Sphere Volume = (4/3) * pi * radius^3
**Cone Volume = pi * radius^2 * (height/3)
**Write the values to the console.
*/

#include<bits/stdc++.h>

using namespace std;
 int main ()
 {
    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;
    
    float volCube, volSphere, volCone = 0;

    cout << "Cube Volume = " << pow(cubeSide, 3) << endl;
    cout << "Sphere Volume = " << (4.0/3.0) * M_PI * pow(sphereRadius, 3) << endl;
    cout << "Cone Volume = " <<  M_PI * pow(coneRadius, 2) * (coneHeight / 3)<< endl;
    return 0;
 }