//
// Created by 唐千乐 on 2/22/23.
//

#ifndef HW4_OPTIONS_H
#define HW4_OPTIONS_H
#include <iostream>
#include <string>
#include <map>
#include <cmath>
#include "functions.h"
using std::map;

//#include <math.h>
using namespace std;
using std::string;





class Option
{
public:
    Option(double K, double T); //
    virtual double Price(double S0, double r, double v) = 0;
    virtual double Delta(double S0, double r, double v) = 0;
    double Gamma(double S0, double r, double v);
protected:
    double d1(double S0, double r, double v);//
    double d2(double S0, double r, double v);//
    double K_;//
    double T_;//

};

class EuropeanCall : public Option
{
public:
    EuropeanCall(double K, double T);//
    double Price(double S0, double r, double v) override;
    double Delta(double S0, double r, double v) override;
};



class EuropeanPut : public Option
{
public:
    EuropeanPut(double K, double T);//
    double Price(double S0, double r, double v) override;
    double Delta(double S0, double r, double v) override;
};

#endif //HW4_OPTIONS_H
