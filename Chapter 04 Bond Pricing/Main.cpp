#include <cmath>
#include <iostream>
using namespace std;

#include "Header.h"

int main()
{
    vector<double> cflows; cflows.push_back(10); cflows.push_back(10); cflows.push_back(110);
    vector<double> times;  times.push_back(1);   times.push_back(2);   times.push_back(3);

    double r = 0.09;

    double B = bonds_price_discrete(times, cflows, r);

    cout << "=================================================" << endl;
    cout << " Bond Pricing with a flat term structure Chapter " << endl;
    cout << "=================================================\n" << endl;

    cout << " When C=[10 10 110], t=[1 2 3], r=0.09, \n" << endl;

    cout << " bonds price            = " << B << endl;
    cout << " bond yield to maturity = " << bonds_yield_to_maturity_discrete(times, cflows, B) << endl;
    cout << " bond duration          = " << bonds_duration_discrete(times, cflows, r) << endl;
    cout << " bond duration modified = " << bonds_duration_modified_discrete(times, cflows, B) << endl;
    cout << " bond convexity         = " << bonds_convexity_discrete(times, cflows, r) << endl;
    cout << " new bond price         = " << bonds_price_discrete(times, cflows, 0.1) << endl;

    cin.get();

}
