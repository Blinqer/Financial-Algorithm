#include <cmath>
#include <vector>
using namespace std;

#include <iostream>

double cash_flow_pv_discrete(const vector<double>& cflow_times,
    const vector<double>& cflow_amounts,
    const double& r);

int main()
{
    cout << "=================================================" << endl;
    cout << "                Present Value ½m²ß                " << endl;
    cout << "=================================================\n" << endl;

    vector<double> cflows; cflows.push_back(-100.0); cflows.push_back(75); cflows.push_back(75);
    vector<double> times; times.push_back(0.0); times.push_back(1); times.push_back(2);

    double r = 0.1;

    cout << " When C=[-100 75 75], t=[0 1 2], r=0.1, \n" << endl;
    cout << " Present value, 10 percent discretely compounded interest = "
        << cash_flow_pv_discrete(times, cflows, r) << endl;

    cin.get();
}