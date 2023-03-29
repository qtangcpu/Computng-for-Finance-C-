#include <iostream>
#include "Options.h"


int main() {
    //parameters
    MCPricer mc;
    double S0 = 100;
    double r = 0.01;
    double v = 0.3;
    double K = 100;
    double T = 2;
    unsigned long paths[3] = {10000, 100000, 1000000};
    EuropeanCall c1(K , T);
    Option& option1 = c1;
    EuropeanPut p1(K,T);
    Option& option2 = p1;

    for(int i =0; i<3; i++){

        cout<<"Price of the call option under path "<<paths[i]<<" is :"<<mc.Price(option1,S0,v,r,paths[i])<<endl;
        cout<<"Price of the put option under path "<<paths[i]<<" is :"<<mc.Price(option2,S0,v,r,paths[i])<<endl;
    }



}
