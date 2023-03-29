#include <iostream>
#include <string>
using namespace std;
#include "USDtoForeign.h"
#include "FiregntoUSD.h"
/*
 * USD/EUR  0.88
 * USD/GBP  0.73
 * USD/CAD  1.25
 * USD/AUD  1.39
 * USD/HKD  0.13
 * USD/CNY  0.15
 */

enum CurrencyType{USD=0, EUR=1, GBP=2, CAD=3, AUD=4, HKD=5, CNY=6};

int main() {
    double amount = 1;
    int currentCurrency;

    do{
        cout << "Enter amount in(Enter 0 if you want to exit): ";
        cin >> amount;
        if (amount <=0){
            break;
        }

        cout << "Enter your current currency (USD=0; EUR=1; GBP=2; CAD=3; AUD=4): ";
        cin >> currentCurrency;

        cout << "Enter foreign currency (USD=0; EUR=1; GBP=2; CAD=3; AUD=4): ";
        int foreignCurrency;
        cin >> foreignCurrency;
        //&& currentCurrency != foreignCurrency &&
        if(currentCurrency == 0 && foreignCurrency >=0 && foreignCurrency <=4){
            USDtoForeign(amount, foreignCurrency);
        }
        else if (currentCurrency >0 && currentCurrency <=4 && foreignCurrency >=0 && foreignCurrency <=4){
            amount = ForeigntoUSD(currentCurrency, amount);
            USDtoForeign(amount, foreignCurrency);
        }
        /*
        else if (foreignCurrency >0 && foreignCurrency <=4 && currentCurrency == foreignCurrency){
            cout << "Your currency stays the same!" << endl;
        }
         */
        else{
            cout << "Currency Type not Listed!!" << endl;
            //amount = 0;
        }
    }while (amount >0);


}
