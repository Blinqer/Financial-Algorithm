#include <cmath>
#include <iostream>
using namespace std;

#include "Header.h"

void test_black_scholes_with_dividends() {
	double S = 100.0;    double K = 100.0;
	double r = 0.1;      double sigma = 0.25;
	double time = 1.0;
	double dividend_yield = 0.05;
	vector<double> dividend_times;     vector<double> dividend_amounts;
	dividend_times.push_back(0.25);    dividend_amounts.push_back(2.5);
	dividend_times.push_back(0.75);    dividend_amounts.push_back(2.5);
	cout << " european stock call option with contininous dividend = "
		<< option_price_european_call_payout(S, K, r, dividend_yield, sigma, time) << endl;
	cout << " european stock call option with discrete dividend =  "
		<< option_price_european_call_dividends(S, K, r, sigma, time, dividend_times, dividend_amounts) << endl;
};


void test_futures_option_price_black() {
	double F = 50.0;    double K = 45.0;
	double r = 0.08;    double sigma = 0.2;
	double time = 0.5;
	cout << " european futures call option = "
		<< futures_option_price_put_european_black(F, K, r, sigma, time) << endl;
};

void test_currency_option_european_call() {
	double S = 50.0;      double K = 52.0;
	double r = 0.08;      double rf = 0.05;
	double sigma = 0.2;   double time = 0.5;
	cout << " european currency call option = "
		<< currency_option_price_call_european(S, K, r, rf, sigma, time) << endl;
};


int main()
{
	cout << "========================================" << endl;
	cout << " Black Scholes extensions               " << endl;
	cout << "========================================\n" << endl;


	// Example 1

	cout << "Example 1 : Consider a stock option with S=100, K=100, r=0.1, sigma=0.25, time to maturity is one year." << endl;
	cout << "            dividend yield = 5\ %. Dividend payments at times 0.25 and 0.75. " << endl;
	cout << "            Determine the option price." << endl;

	cout << "Answer  1 :\n" << endl;

	test_black_scholes_with_dividends();

	cout << "\n----------------------------------------------------------------------------------------\n" << endl;

	// Example 2

	cout << "Example 2 : Price a futures option in the Black setting." << endl;
	cout << "            Information: F = 50, K = 45, r = 8\%, sigma = 0.2, and time to maturity is a half year.\n" << endl;

	cout << "Answer  2 :\n" << endl;

	test_futures_option_price_black();

	cout << "\n----------------------------------------------------------------------------------------\n" << endl;

	// Example 3

	cout << "Example 3 : Price European currency call given that S=50, K=52, r=8\%, rf=5\%, sigma=20\% and time to maturity=0.5 years.\n" << endl;

	cout << "Answer  3 :\n" << endl;

	test_currency_option_european_call();

	cin.get();
}
