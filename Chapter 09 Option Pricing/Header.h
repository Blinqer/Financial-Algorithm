#include <cmath>
#include <vector>
using namespace std;


double option_price_call_black_scholes(const double& S,       // spot (underlying) price
	const double& K,       // strike (exercise) price,
	const double& r,       // interest rate
	const double& sigma,   // volatility 
	const double& time);


void option_price_partials_call_black_scholes(const double& S,     // spot price
	const double& K,     // Strike (exercise) price,
	const double& r,     // interest rate
	const double& sigma, // volatility
	const double& time,  // time to maturity
	double& Delta, //  partial wrt S
	double& Gamma, //  second prt wrt S
	double& Theta, // partial wrt time
	double& Vega,  //  partial wrt sigma
	double& Rho);

double option_price_implied_volatility_call_black_scholes_newton(const double& S,
	const double& K,
	const double& r,
	const double& time,
	const double& option_price);

double option_price_implied_volatility_call_black_scholes_bisections(const double& S,
	const double& K,
	const double& r,
	const double& time,
	const double& option_price);
