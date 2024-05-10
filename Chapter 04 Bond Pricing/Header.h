#include <cmath>
#include <vector>
using namespace std;


//// bonds price

double bonds_price(const vector<double>& cashflow_times,
    const vector<double>& cashflows,
    const double& r);

double bonds_price_discrete(const vector<double>& times,
    const vector<double>& cashflows,
    const double& r);



//// yield to maturity

double bonds_yield_to_maturity_discrete(const vector<double>& times,
    const vector<double>& cashflows,
    const double& bondprice);

double bonds_yield_to_maturity(const vector<double>& cashflow_times,
    const vector<double>& cashflow_amounts,
    const double& bondprice);



//// duration

double bonds_duration(const vector<double>& cashflow_times,
    const vector<double>& cashflows,
    const double& r);

double bonds_duration_discrete(const vector<double>& times,
    const vector<double>& cashflows,
    const double& r);

double bonds_duration_modified_discrete(const vector<double>& times,
    const vector<double>& cashflows,
    const double& bond_price);



//// convexity

double bonds_convexity_discrete(const vector<double>& times,
    const vector<double>& cashflows,
    const double& r);