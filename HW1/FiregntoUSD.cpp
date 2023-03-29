//
// Created by 唐千乐 on 1/15/23.
//

#include <iostream>
using namespace std;
//enum CurrencyType{USD=0, EUR=1, GBP=2, CAD=3, AUD=4};

double ForeigntoUSD(int in, double amount){
    switch(in){
        double r;
        case 1:
            r = 0.88;
            return amount/r;
        case 2:
            r = 0.73;
            return amount/r;
        case 3:
            r = 1.25;
            return amount/r;
        case 4:
            r = 1.39;
            return amount/r;
        case 5:
            r = 0.13;
            return amount/r;
        case 6:
            r = 0.15;
            return amount/r;
    }
}
