#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"


class Cylinder
{
public:

    Cylinder(double rad_param, double height_param);

    void set_radius(double rad_param);
    double get_radius(void);
    void set_height(double height_param);
    double get_height(void);

    double volume();

private:
    double base_radius{1.0};
    double height{1.0};
};



#endif // CYLINDER_H