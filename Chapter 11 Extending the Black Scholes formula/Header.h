#include <cmath>
#include <vector>
using namespace std;


double option_price_put_black_scholes(const double& S,      // spot price
	const double& K,      // Strike (exercise) price,
	const double& r,      // interest rate
	const double& sigma,  // volatility
	const double& time);

double option_price_call_black_scholes(const double& S,       // spot (underlying) price
	const double& K,       // strike (exercise) price,
	const double& r,       // interest rate
	const double& sigma,   // volatility 
	const double& time);

double option_price_european_call_dividends(const double& S,
	const double& K,
	const double& r,
	const double& sigma,
	const double& time_to_maturity,
	const vector<double>& dividend_times,
	const vector<double>& dividend_amounts);

double option_price_european_call_payout(const double& S, // spot price
	const double& X, // Strike (exercise) price,
	const double& r,  // interest rate
	const double& q,  // yield on underlying
	const double& sigma, // volatility
	const double& time);

double futures_option_price_call_european_black(const double& F,     // futures price
	const double& K,     // exercise price
	const double& r,     // interest rate
	const double& sigma, // volatility
	const double& time);

double futures_option_price_put_european_black(const double& F,     // futures price
	const double& X,     // exercise price
	const double& r,     // interest rate
	const double& sigma, // volatility
	const double& time);

double currency_option_price_call_european(const double& S,      // exchange_rate,
	const double& X,      // exercise,
	const double& r,      // r_domestic,
	const double& r_f,    // r_foreign,
	const double& sigma,  // volatility,
	const double& time);