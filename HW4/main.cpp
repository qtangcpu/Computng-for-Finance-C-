#include <iostream>
#include "Options.h"

int main() {

    //parameters
    double S0 = 100;
    double r = 0.01;
    double v = 0.3;
    double K = 100;
    double T = 2;
    EuropeanCall c1(K , T);
    cout << "Call price: " << c1.Price(S0, r, v)
         << ", Delta: "<< c1.Delta(S0, r, v)
         << ", Gamma: " << c1.Gamma(S0, r, v) << endl;

    EuropeanPut p1(K, T);
    cout << "Put price: " << p1.Price(S0, r, v)
         << ", Delta: " << p1.Delta(S0, r, v)
         << ", Gamma: " << p1.Gamma(S0, r, v) << endl;


}
