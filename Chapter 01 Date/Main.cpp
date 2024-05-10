#include <iostream>  // input output operations
using namespace std; // the above is part of the standard namespace

#include "date.h"


int main() {

	cout << "=================================================================" << endl;
	cout << "  ��� d ���U�@��(�d�ݹL QuantLib Taiwan.cpp ���٥��Ҽ{�|�~�����D)   " << endl;
	cout << "=================================================================\n" << endl;

	date d(1, 1, 2001);

	cout << "date d = " << d.year() << "." << d.month() << "." << d.day() << endl;

	d = ++d;

	cout << "date d+1 = " << d.year() << "." << d.month() << "." << d.day() << endl;

	cin.get();

}