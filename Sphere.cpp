#include "Sphere.hpp"
#include <cmath>

Sphere::Sphere()
{
    setRadius(0);
}

Sphere::Sphere(double rad)
{
    setRadius(rad);
}

void Sphere::setRadius(double rad)
{
    radius = rad;
}

double Sphere::getRadius()
{
    return radius;
}

double Sphere::getVolume()
{
    double pi = 3.14; //add or remove decimals as needed
    return (4.0/3.0) * pi * (pow(radius, 3.0)); //volume formula
}
