//
// Created by 唐千乐 on 2/28/23.
//


#include <cmath>
#include <cstdlib>

const double PI = atan(1.0) * 4;
double cdf(double x)
{
    return 0.5 * (1 + erf(x / sqrt(2)));
}
double pdf(double x)
{
    return exp(-0.5*pow(x, 2)) / sqrt(2 * PI);
}

double BoxMuller()
{
    double x = static_cast<double>(rand()) / RAND_MAX;
    double y = static_cast<double>(rand()) /  RAND_MAX;
    double z = sqrt(-2.0*log(x)) * cos(2*PI*y);
    return z;
}

double max(double a, double b){
    if(a >=b){
        return a;
    }
    else{
        return b;
    }
}