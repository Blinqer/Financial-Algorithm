#include <cmath>
#include <vector>
using namespace std;


// Term structure transformations

double term_structure_yield_from_discount_factor(const double& d_t, const double& t);

double term_structure_discount_factor_from_yield(const double& r, const double& t);

double term_structure_forward_rate_from_discount_factors(const double& d_t1, const double& d_t2, const double& time);

double term_structure_forward_rate_from_yields(const double& r_t1, const double& r_t2, const double& t1, const double& t2);



// a term structure class

class term_structure_class {
public:
    virtual ~term_structure_class();
    virtual double r(const double& t) const; // short rate, yield on zero coupon bond
    virtual double d(const double& t) const; // discount_factor
    virtual double f(const double& t1, const double& t2) const; // forward_rate
};


class term_structure_class_flat : public term_structure_class {
private:
    double R_;                              // interest rate
public:
    term_structure_class_flat(const double& r);
    virtual ~term_structure_class_flat();
    virtual double r(const double& t) const;
    void set_int_rate(const double& r);
};

class term_structure_class_interpolated : public term_structure_class {
private:
    vector<double> times_;     // use to keep a list of yields
    vector<double> yields_;
    void clear();
public:
    term_structure_class_interpolated();
    term_structure_class_interpolated(const vector<double>& times, const vector<double>& yields);
    virtual ~term_structure_class_interpolated();
    term_structure_class_interpolated(const term_structure_class_interpolated&);
    term_structure_class_interpolated operator= (const term_structure_class_interpolated&);

    int no_observations() const { return int(times_.size()); };
    virtual double r(const double& T) const;
    void set_interpolated_observations(vector<double>& times, vector<double>& yields);
};


// Linear Interpolation

double term_structure_yield_linearly_interpolated(const double& time,
    const vector<double>& obs_times,
    const vector<double>& obs_yields);


// Bond

double bonds_price(const vector<double>& cashflow_times,
    const vector<double>& cashflows,
    const term_structure_class& d);

double bonds_duration(const vector<double>& cashflow_times,
    const vector<double>& cashflow_amounts,
    const term_structure_class& d);

double bonds_convexity(const vector<double>& cashflow_times,
    const vector<double>& cashflow_amounts,
    const term_structure_class& d);