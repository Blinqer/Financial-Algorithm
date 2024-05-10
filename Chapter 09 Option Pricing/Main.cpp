#include <cmath>
#include <iostream>
using namespace std;

#include "Header.h"

void test_option_price_call_black_scholes() {
	double S = 50; double K = 50; double r = 0.10;
	double sigma = 0.30; double time = 0.50;
	cout << " Black Scholes call price = ";
	cout << option_price_call_black_scholes(S, K, r, sigma, time) << endl;
};

void test_black_scholes_partials_call() {
	double S = 50; double K = 50; double r = 0.10;
	double sigma = 0.30; double time = 0.50;
	double Delta, Gamma, Theta, Vega, Rho;

	option_price_partials_call_black_scholes(S, K, r, sigma, time,
		Delta, Gamma, Theta, Vega, Rho);
	cout << "  Delta = " << Delta << endl;
	cout << "  Gamma = " << Gamma << endl;
	cout << "  Theta = " << Theta << endl;
	cout << "  Vega  = " << Vega << endl;
	cout << "  Rho   = " << Rho << endl;
};

void test_black_scholes_implied_volatility() {
	double S = 50; double K = 50; double r = 0.10; double time = 0.50;
	double C = 2.5;
	cout << " Black Scholes implied volatility using Newton search = ";
	cout << option_price_implied_volatility_call_black_scholes_newton(S, K, r, time, C) << endl;
	cout << " Black Scholes implied volatility using bisections = ";
	cout << option_price_implied_volatility_call_black_scholes_bisections(S, K, r, time, C) << endl;
};



int main()
{
	cout << "========================================" << endl;
	cout << " Examples in Black Scholes chapter      " << endl;
	cout << "========================================\n" << endl;

	// Example 1

	cout << "Example 1 : To calculate the price of option using Black Scholes formula" << endl;
	cout << "               with inputs S = 50, K = 50, r = 0.10, sigma = 0.3 and (T - t) = 0.5.\n" << endl;
	cout << "Answer  1 :\n" << endl;

	test_option_price_call_black_scholes();

	cout << "\n----------------------------------------------------------------------------------------\n" << endl;

	// Example 2

	cout << "Example 2 : To calculate the partial derivatives using inputs S=50, K=50, r=0.10, sigma=0.3 and (T-t)=0.5.\n" << endl;
	cout << "Answer  2 :\n" << endl;

	test_black_scholes_partials_call();

	cout << "\n----------------------------------------------------------------------------------------\n" << endl;

	// Example 3

	cout << "Example 3 : The current option price is C=2.5. Determine the volatility implicit in this price." << endl;
	cout << "            To calculate using inputs S = 50, K = 50, r = 0.10 and (T - t) = 0.5.\n" << endl;
	cout << "Answer  3 :\n" << endl;

	test_black_scholes_implied_volatility();

	cin.get();
}
