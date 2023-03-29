//
// Created by 唐千乐 on 2/28/23.
//

#include "Options.h"
#include <algorithm>
Option::Option(double K, double T)
        : K_(K),
          T_(T)
{}

EuropeanCall::EuropeanCall(double K, double T)
        : Option(K,T)
{}

EuropeanPut::EuropeanPut(double K, double T)
        : Option(K,T)
{}

double EuropeanCall::GetExpirationPayoff(double ST) const
{
    return max(ST-K_,0);
}

double EuropeanPut::GetExpirationPayoff(double ST) const
{
    return max(K_-ST,0);
}

double Option::GetTimeToExpiration() const
{
    return T_;
}

double MCPricer::Price(const Option& option, double stockPrice, double vol, double rate, unsigned long paths) {
    double T = option.GetTimeToExpiration();
    double sum_path = 0;
    for (unsigned int i=0; i<paths; ++i)
    {
        //generate random number;
        double z_i = BoxMuller();

        //generate stock price (ST)

        double ST_i = stockPrice*exp((rate-vol*vol/2.0)*T + vol*z_i*sqrt(T));
        double payoff = option.GetExpirationPayoff(ST_i);
        sum_path += payoff;
    }
    return exp(-rate*T)*sum_path/paths;
}