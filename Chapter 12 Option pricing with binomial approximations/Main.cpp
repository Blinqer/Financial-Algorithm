#include <cmath>
#include <iostream>
using namespace std;

#include "Header.h"

void test_binomial_approximations_option_pricing() {
    double S = 100.0;    double K = 100.0;
    double r = 0.1;      double sigma = 0.25;
    double time = 1.0;
    int no_steps = 100;
    cout << " european call = "
        << option_price_call_european_binomial(S, K, r, sigma, time, no_steps)
        << endl;
    cout << " american call = "
        << option_price_call_american_binomial(S, K, r, sigma, time, no_steps)
        << endl;
    cout << " american put = "
        << option_price_put_american_binomial(S, K, r, sigma, time, no_steps)
        << endl;
};



void test_binomial_approximations_option_price_partials() {
    double S = 100.0;    double K = 100.0;
    double r = 0.1;      double sigma = 0.25;
    double time = 1.0;     int no_steps = 100;

    double delta, gamma, theta, vega, rho;
    option_price_partials_american_call_binomial(S, K, r, sigma, time, no_steps,
        delta, gamma, theta, vega, rho);
    cout << " Call price partials \n" << endl;
    cout << "  delta = " << delta << endl;
    cout << "  gamma = " << gamma << endl;
    cout << "  theta = " << theta << endl;
    cout << "  vega  = " << vega << endl;
    cout << "  rho   = " << rho << endl;
};

int main()
{

    cout << "=====================================" << endl;
    cout << " Binomial Approximations examples    " << endl;
    cout << "=====================================\n" << endl;

    // Example 1

    cout << "Example 1 : An option : S=100, K=100, r=0.1, sigma=0.25 and time to maturity is 1 year." << endl;
    cout << "            Price American calls and puts using binomial approximations with 100 steps.\n" << endl;

    cout << "Answer  1 :\n" << endl;

    test_binomial_approximations_option_pricing();

    cout << "\n----------------------------------------------------------------------------------------\n" << endl;

    // Example 2

    cout << "Example 2 : Given that S=100, K=100, r=0.1, sigma=0.25 and time to maturity is 1 year," << endl;
    cout << "            Use 100 steps in the binomial approximation." << endl;
    cout << "            Estimate all the greeks for the option : delta, gamma, theta, vega and rho.\n" << endl;

    cout << "Answer  2 :\n" << endl;

    test_binomial_approximations_option_price_partials();

    cin.get();
}