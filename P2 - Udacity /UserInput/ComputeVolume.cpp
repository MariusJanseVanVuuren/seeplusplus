/*Goal: practice arithmetic operations in C++
**Write a program that calculates the volumes of:
**a cube, sphere, cone.
**Cube Volume = side^3
**Sphere Volume = (4/3) * pi * radius^3
**Cone Volume = pi * radius^2 * (height/3)
**Write the values to the console.
*/

#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;
    
    float volCube, volSphere, volCone = 0;
    
    volCube = pow(cubeSide, 3);
    cout << "Cube volume : " << volCube << endl;
    
    volSphere = (4.0/3.0)*M_PI*pow(sphereRadius, 3.0);
    cout << "Sphere volume : " << volSphere << endl;
    
    volCone = M_PI*pow(coneRadius, 2.0)*(coneHeight/3.0);
    cout << "Cone volume : " << volCone << endl;
    
    return 0;
}
