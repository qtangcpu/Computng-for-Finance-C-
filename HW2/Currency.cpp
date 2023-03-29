//
// Created by 唐千乐 on 1/23/23.
//

#include "Currency.h"
#include <string>
using std::string;


Currency::Currency(CurrencyType s, double amount){
    symbol_ = s;
    amount_ = amount;
}

void Currency::ChangeAmountToUSD() {
    switch(symbol_){
        double r;
        case 1:
            r = 0.88;
            symbol_ = USD;
            amount_ =  amount_/r;
            break;
        case 2:
            r = 0.73;
            symbol_ = USD;
            amount_ =  amount_/r;
            break;
        case 3:
            r = 1.25;
            symbol_ = USD;
            amount_ =  amount_/r;
            break;
        case 4:
            r = 1.39;
            symbol_ = USD;
            amount_ =  amount_/r;
            break;
        case 5:
            r = 0.13;
            symbol_ = USD;
            amount_ =  amount_/r;
            break;
        case 6:
            r = 0.15;
            symbol_ = USD;
            amount_ =  amount_/r;
            break;
    }
}

void Currency::ChangeAmountToForeign(CurrencyType target_symbol) {
    switch(target_symbol){
        double r;
        case 0:
            r = 1;
            amount_ =  r * amount_;
            symbol_ = target_symbol;
            break;
        case 1:
            r = 0.88;
            amount_ =  r * amount_;
            symbol_ = target_symbol;
            break;
        case 2:
            r = 0.73;
            amount_ =  r * amount_;
            symbol_ = target_symbol;
            break;
        case 3:
            r = 1.25;
            amount_ =  r * amount_;
            symbol_ = target_symbol;
            break;
        case 4:
            r = 1.39;
            amount_ =  r * amount_;
            symbol_ = target_symbol;
            break;
        case 5:
            r = 0.13;
            amount_ =  r * amount_;
            symbol_ = target_symbol;
            break;
        case 6:
            r = 0.15;
            amount_ =  r * amount_;
            symbol_ = target_symbol;
            break;
    }
}
void Currency::OutputResult() {
    cout << "The amount in " << symbol_ << " is :" << amount_ << endl;
}