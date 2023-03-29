#include <iostream>
#include <string>
#include "Currency.h"
using namespace std;
using std::string;

int main() {
    double amount = 1;
    int currentCurrency;
    int foreignCurrency;
    do{
        // Take Input
        cout << "Enter amount in(Enter 0 if you want to exit): ";
        cin >> amount; if (amount <=0){break;}
        cout << "Enter your current currency (USD=0; EUR=1; GBP=2; CAD=3; AUD=4, JPY=5, HKD=6): ";
        cin >> currentCurrency;
        cout << "Enter foreign currency (USD=0; EUR=1; GBP=2; CAD=3; AUD=4, JPY=5, HKD=6): ";
        cin >> foreignCurrency;

        // Create the Currency
        Currency c1(static_cast<CurrencyType>(currentCurrency), amount);

        //Do the Change
        if(currentCurrency == 0 && foreignCurrency >=0 && foreignCurrency <=6){
            c1.ChangeAmountToForeign(static_cast<CurrencyType>(foreignCurrency));
            c1.OutputResult();
        }
        else if (currentCurrency >0 && currentCurrency <=6 && foreignCurrency >=0 && foreignCurrency <=6){
            c1.ChangeAmountToUSD();
            c1.ChangeAmountToForeign(static_cast<CurrencyType>(foreignCurrency));
            c1.OutputResult();
        }
        else{
            cout << "Currency Type not Listed!!" << endl;
            //amount = 0;
        }
    }while (amount >0);
}
