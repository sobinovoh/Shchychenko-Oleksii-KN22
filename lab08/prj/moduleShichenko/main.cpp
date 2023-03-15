#include <iostream>
#include "Moduless.h"
#include <math.h>


double s_calculator(double x,double y, double z)

{

    double pi = 3.14;

    double S;

    S = (0.5*pow((abs(2*z-pow(x,2)))/sin(x),3))/sqrt(1 + abs(cos(x)))+2*pi;

    return S;

}

