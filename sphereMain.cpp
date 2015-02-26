#include <iostream>
#include "Sphere.hpp"

using namespace std;

void printSphereInfo(Sphere*); // take as a parameter a pointer-to-Sphere and prints out the radius and volume of the Sphere the parameter points to

int main()
{
    double radius;
    Sphere sphere; //object sphere


    cout << "What is the radius of the sphere? " << endl;
    cin >> radius;

    sphere.setRadius(radius);

    printSphereInfo(&sphere);

    return 0;
}

void printSphereInfo(Sphere * spherePnt)
{
    cout << "The radius is " << spherePnt->getRadius() << endl;
    cout << "The volume is " << spherePnt->getVolume() << endl;
}
