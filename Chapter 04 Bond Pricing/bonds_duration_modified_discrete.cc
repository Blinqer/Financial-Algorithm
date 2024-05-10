#include <vector>
using namespace std;

#include "Header.h"


double bonds_duration_modified_discrete(const vector<double>& times,
    const vector<double>& cashflows,
    const double& bond_price) {
    double y = bonds_yield_to_maturity_discrete(times, cashflows, bond_price);
    double D = bonds_duration_discrete(times, cashflows, y);
    return D / (1 + y);
};
