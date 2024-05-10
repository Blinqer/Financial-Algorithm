#include <iostream>  // input output operations
#include <cmath>     // mathematics library
using namespace std; // the above is part of the standard namespace

double power(double x, double n) {
	// define a simple power function 
	double p = exp(n * log(x));
	return p;
};

int main() {

	cout << "=================================================" << endl;
	cout << "                 ¦¸¤è »P °j°é ½m²ß                 " << endl;
	cout << "=================================================\n" << endl;

	for (int n = 1; n < 6; n++) {
		cout << " 2^" << n << " = " << power(2, n) << endl;
	};
	cin.get();
};