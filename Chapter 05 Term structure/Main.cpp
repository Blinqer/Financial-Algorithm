#include <cmath>
#include <iostream>
using namespace std;

#include "Header.h"

void test_termstru_transforms() {

	double t1 = 1;  double r_t1 = 0.05; double d_t1 = term_structure_discount_factor_from_yield(r_t1, t1);

	cout << " a " << t1 << " period spot rate of " << r_t1
		<< " corresponds to a discount factor of " << d_t1 << endl;

	double t2 = 2;  double d_t2 = 0.9;
	double r_t2 = term_structure_yield_from_discount_factor(d_t2, t2);

	cout << " a " << t2 << " period discount factor of " << d_t2
		<< " corresponds to a spot rate of " << r_t2 << endl;

	cout << " the forward rate between " << t1 << " and " << t2
		<< " is " << term_structure_forward_rate_from_discount_factors(d_t1, d_t2, t2 - t1)
		<< " using discount factors " << endl;

	cout << "  and is " << term_structure_forward_rate_from_yields(r_t1, r_t2, t1, t2)
		<< " using yields " << endl;
};

void test_term_structure_class_flat() {

	term_structure_class_flat ts(0.05);

	double t1 = 1;
	cout << " discount factor t1 = " << t1 << ":" << ts.d(t1) << endl;

	double t2 = 2;
	cout << " discount factor t2 = " << t2 << ":" << ts.d(t2) << endl;
	cout << " spot rate t = " << t1 << ":" << ts.r(t1) << endl;
	cout << " spot rate t = " << t2 << ":" << ts.r(t2) << endl;
	cout << " forward rate from t1= " << t1 << " to t2= " << t2 << ":" << ts.f(t1, t2) << endl;
};

void test_termstru_interpolated() {
	vector<double> times;
	vector<double> yields;
	times.push_back(0.1);  times.push_back(0.5);  times.push_back(1);
	yields.push_back(0.1); yields.push_back(0.2); yields.push_back(0.3);
	times.push_back(5);    times.push_back(10);
	yields.push_back(0.4); yields.push_back(0.5);

	cout << " yields at times:\n" << endl;
	cout << " t =  0.1, r = " << term_structure_yield_linearly_interpolated(0.1, times, yields) << endl;
	cout << " t =  0.5, r = " << term_structure_yield_linearly_interpolated(0.5, times, yields) << endl;
	cout << " t =  1  , r = " << term_structure_yield_linearly_interpolated(1, times, yields) << endl;
	cout << " t =  3  , r = " << term_structure_yield_linearly_interpolated(3, times, yields) << endl;
	cout << " t =  5  , r = " << term_structure_yield_linearly_interpolated(5, times, yields) << endl;
	cout << " t = 10  , r = " << term_structure_yield_linearly_interpolated(10, times, yields) << endl;
};


void test_term_structure_class_bond_calculations() {
	vector <double> times;     times.push_back(1);       times.push_back(2);
	vector <double> cashflows; cashflows.push_back(10);  cashflows.push_back(110);

	term_structure_class_flat tsflat(0.1);
	cout << " price = " << bonds_price(times, cashflows, tsflat) << endl;
	cout << " duration = " << bonds_duration(times, cashflows, tsflat) << endl;
	cout << " convexity = " << bonds_convexity(times, cashflows, tsflat) << endl;
};



int main()
{
	cout << "============================================" << endl;
	cout << " Term structure of interest rates examples  " << endl;
	cout << "============================================\n" << endl;


	// Example 1

	cout << "Example 1 : Given the one period spot rate r1=5\% and the two period discount factor d2=0.9." << endl;
	cout << "            Calculate the two period spot rate and the forward rate from 1 to 2.\n" << endl;
	cout << "Answer  1 :\n" << endl;

	test_termstru_transforms();

	cout << "\n----------------------------------------------------------------------------------------\n" << endl;

	// Example 2

	cout << "Example 2 : The term structure is flat with r=5\%." << endl;
	cout << "            Determine the discount factors for years 1 and 2 and the forward rate between 1 and 2.\n" << endl;
	cout << "Answer  2 :\n" << endl;

	test_term_structure_class_flat();

	cout << "\n----------------------------------------------------------------------------------------\n" << endl;

	// Example 3

	cout << "Example 3 : Time=[0.1 0.5 1 5 10], r=[0.1 0.2 0.3 0.4 0.5]." << endl;
	cout << "            Interpolate spot rates(zero rate) at times 0.1, 0.5, 1, 3, 5 and 10.\n" << endl;
	cout << "Answer  3 :\n" << endl;

	test_termstru_interpolated();

	cout << "\n----------------------------------------------------------------------------------------\n" << endl;

	// Example 4

	cout << "Example 4 : The term structure is flat with r=10\% continuously compounded interest." << endl;
	cout << "            Calculate price, duration, and convexity of a 10\%, 2 year bond.\n" << endl;
	cout << "Answer  4 :\n" << endl;

	test_term_structure_class_bond_calculations();

	cin.get();
}