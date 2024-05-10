#include <iostream>  // input output operations
using namespace std; // the above is part of the standard namespace

#include "date.h"


int main() {

	cout << "=================================================================" << endl;
	cout << "  日期 d 的下一天(查看過 QuantLib Taiwan.cpp 但還未考慮閏年等問題)   " << endl;
	cout << "=================================================================\n" << endl;

	date d(1, 1, 2001);

	cout << "date d = " << d.year() << "." << d.month() << "." << d.day() << endl;

	d = ++d;

	cout << "date d+1 = " << d.year() << "." << d.month() << "." << d.day() << endl;

	cin.get();

}