//
// Created by 唐千乐 on 2/3/23.
//

#include "CurrencyFactory.h"
//enum CurrencyType{USD=0, EUR=1, GBP=2, CAD=3, AUD=4, JPY=5, HKD=6};
/*
 public:
    CurrencyFactory();
    Currency* GetCurrency(string currencySymbol);

private:
    Currency* currencies_[3];
*/

CurrencyFactory::CurrencyFactory() {
    currencies_[USD] = new Currency(USD,"Australia", 1.0000);
    currencies_[EUR] = new Currency(EUR, "Europe",0.7901);
    currencies_[GBP] = new Currency(GBP, "German",0.6201);
    currencies_[CAD] = new Currency(CAD, "USA", 1.1150);
    currencies_[AUD] = new Currency(AUD,"Australia", 1.1378);
}

Currency* CurrencyFactory::GetCurrency(CurrencyType currencySymbol) {
    return currencies_[currencySymbol];
}