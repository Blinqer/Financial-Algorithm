#include <cmath>
#include <vector>
using namespace std;


double option_price_call_european_binomial_multi_period_given_ud(const double& S,     // spot price
	const double& K,     // exercice price
	const double& r,    // interest rate (per period)
	const double& u,   // up movement
	const double& d,   // down movement
	const int& no_periods);


double option_price_call_european_binomial_single_period(const double& S,     // spot price
	const double& X,     // exercice price
	const double& r,     // interest rate (per period)
	const double& u,     // up movement
	const double& d);


vector< vector<double> > binomial_tree(const double& S0,
	const double& u,
	const double& d,
	const int& no_steps);
