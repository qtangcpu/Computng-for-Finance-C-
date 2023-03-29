//
// Created by 唐千乐 on 1/23/23.
//

#include <iostream>
#include <string>
using namespace std;
using std::string;
enum CurrencyType{USD=0, EUR=1, GBP=2, CAD=3, AUD=4, JPY=5, HKD=6};

class Currency{
private:
    CurrencyType symbol_;
    double amount_;

public:
    Currency(CurrencyType s, double amount);

    void OutputResult();
    void ChangeAmountToUSD();
    void ChangeAmountToForeign(CurrencyType target_symbol);
};
