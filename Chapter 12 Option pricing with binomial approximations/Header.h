#include <cmath>
#include <vector>
using namespace std;


// European

double option_price_call_european_binomial(const double& S,     // spot price
	const double& K,     // exercice price
	const double& r,     // interest rate
	const double& sigma, // volatility
	const double& t,     // time to maturity
	const int& steps);


double option_price_put_european_binomial(const double& S,     // spot price
	const double& K,     // exercice price
	const double& r,     // interest rate
	const double& sigma, // volatility
	const double& t,     // time to maturity
	const int& steps);


// American

double option_price_call_american_binomial(const double& S,
	const double& K,
	const double& r,
	const double& sigma,
	const double& t,
	const int& steps);


double option_price_put_american_binomial(const double& S,     // spot price
	const double& K,     // exercice price
	const double& r,     // interest rate
	const double& sigma, // volatility
	const double& t,     // time to maturity
	const int& steps);


double option_price_delta_american_call_binomial(const double& S,
	const double& K,
	const double& r,
	const double& sigma,
	const double& t,
	const int& no_steps);


double option_price_delta_american_put_binomial(const double& S,  // spot price 
	const double& K,  // Exercise price,
	const double& r,     // interest rate
	const double& sigma, // volatility
	const double& t,  // time to maturity
	const int& no_steps);

void option_price_partials_american_call_binomial(const double& S, const double& K, const double& r,
	const double& sigma, const double& time, const int& no_steps,
	double& delta, double& gamma, double& theta,
	double& vega, double& rho);