#include "cylinder.h"
#include "constants.h"



Cylinder::Cylinder(double rad_param, double height_param)
{
    base_radius = rad_param;
    height = height_param;
}

void Cylinder::set_radius(double rad_param)
{
    base_radius = rad_param;
}

double Cylinder::get_radius(void)
{
    return base_radius;
}

void Cylinder::set_height(double height_param)
{
    height = height_param;
}

double Cylinder::get_height(void)
{
    return height;
}

double Cylinder::volume()
{
    return PI * base_radius * base_radius * height;
}