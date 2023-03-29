//
// Created by 唐千乐 on 1/15/23.
//
#include <iostream>
using namespace std;
//enum CurrencyType{USD=0, EUR=1, GBP=2, CAD=3, AUD=4};
void USDtoForeign(double amount, int out ){
    switch(out){
        double r;
        case 0:
            r = 1;
            cout << "This amount in USD is: " << r * amount << endl;
            break;
        case 1:
            r = 0.88;
            cout << "This amount in EUR is: " << r * amount << endl;
            break;
        case 2:
            r = 0.73;
            cout << "This amount in GBP is: " << r * amount << endl;
            break;
        case 3:
            r = 1.25;
            cout << "This amount in CAD is: " << r * amount << endl;
            break;
        case 4:
            r = 1.39;
            cout << "This amount in AUD is: " << r * amount << endl;
            break;
        case 5:
            r = 0.13;
            cout << "This amount in HKD is: " << r * amount << endl;
            break;
        case 6:
            r = 0.15;
            cout << "This amount in CNY is: " << r * amount << endl;
            break;
    }
}

