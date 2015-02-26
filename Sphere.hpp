#ifndef SPHERE_HPP_INCLUDED
#define SPHERE_HPP_INCLUDED

class Sphere
{
public:
    Sphere();
    Sphere(double);
    void setRadius(double);
    double getRadius();
    double getVolume(); //return volume of sphere object

private:
    double radius;
};

#endif // SPHERE_HPP_INCLUDED
