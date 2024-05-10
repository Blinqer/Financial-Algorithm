#include <cmath>
#include <iostream>
using namespace std;

double futures_price(const double& S,                     // current price  of underlying asset
	const double& r,                     // risk free interest rate
	const double& time_to_maturity);

void test_futures_price() {
	double S = 100;    double r = 0.10;    double time = 0.5;
	cout << " futures price = " << futures_price(S, r, time) << endl;
};


int main()
{
	cout << "============================================" << endl;
	cout << "          Futures/Forwards pricing           " << endl;
	cout << "============================================\n" << endl;

	cout << " Let S=100 and r=10\%. What is the future price for a contract with time to maturity of half a year?\n" << endl;
	test_futures_price();

	cin.get();
}
