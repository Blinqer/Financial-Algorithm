#include "date.h"

//////// C++ Code 1.2: Basic operations for the date class

date::date() { year_ = 0; month_ = 0; day_ = 0; };

date::date(const int& day, const int& month, const int& year) {
	day_ = day;
	month_ = month;
	year_ = year;
};

int date::day() const { return day_; };
int date::month() const { return month_; };
int date::year() const { return year_; };

void date::set_day(const int& day) { date::day_ = day; };
void date::set_month(const int& month) { date::month_ = month; };
void date::set_year(const int& year) { date::year_ = year; };


// 判斷一個日期是否為正確的：

bool date::valid() const {
	// This function will check the given date is valid or not.
	// If the date is not valid then it will return the value false.
	//  Need some more checks on the year, though

	if (year_ < 0) return false;
	if (month_ > 12 || month_ < 1) return false;
	if (day_ > 31 || day_ < 1) return false;
	if ((day_ == 31 && (month_ == 2 || month_ == 4 || month_ == 6 || month_ == 9 || month_ == 11)))
		return false;
	if (day_ == 30 && month_ == 2) return false;
	// should also check for leap years, 
	// but for now allow for feb 29 in any year return true;





};



//////// C++ Code 1.3: Comparison operators for the date class

bool operator == (const date& d1, const date& d2) { // check for equality
	if (!(d1.valid() && (d2.valid()))) { return false; };
	/* if dates not valid, not clear what to do.
	 alternative: throw exception */
	return ((d1.day() == d2.day()) && (d1.month() == d2.month()) && (d1.year() == d2.year()));
};

bool operator < (const date& d1, const date& d2) {
	if (!(d1.valid() && (d2.valid()))) { return false; }; // see above remark 
	if (d1.year() == d2.year()) { // same year
		if (d1.month() == d2.month()) { // same month 
			return (d1.day() < d2.day());
		}
		else {
			return (d1.month() < d2.month());
		};
	}
	else { // dierent year
		return (d1.year() < d2.year());
	};
};


// remaining operators dened in terms of the above

bool operator <=(const date& d1, const date& d2) {
	if (d1 == d2) { return true; }
	return (d1 < d2);
}

bool operator >=(const date& d1, const date& d2) {
	if (d1 == d2) { return true; };
	return (d1 > d2);
};

bool operator > (const date& d1, const date& d2) { return !(d1 <= d2); };
bool operator !=(const date& d1, const date& d2) { return !(d1 == d2); }



//////// C++ Code 1.4: Iterative operators for the date class

date next_date(const date& d) {
	if (!d.valid()) { return date(); }; //
	date ndat = date((d.day() + 1), d.month(), d.year()); // first try adding a day 

	if (ndat.valid()) return ndat;
	ndat = date(1, (d.month() + 1), d.year()); // then try adding a month

	if (ndat.valid()) return ndat;
	ndat = date(1, 1, (d.year() + 1)); // must be next year

	return ndat;
}

date previous_date(const date& d) {
	if (!d.valid()) { return date(); }; // return the default date

	// try same month
	date pdat = date((d.day() - 1), d.month(), d.year()); if (pdat.valid()) return pdat;

	// try previous month
	pdat = date(31, (d.month() - 1), d.year()); if (pdat.valid()) return pdat;
	pdat = date(30, (d.month() - 1), d.year()); if (pdat.valid()) return pdat;
	pdat = date(29, (d.month() - 1), d.year()); if (pdat.valid()) return pdat;
	pdat = date(28, (d.month() - 1), d.year()); if (pdat.valid()) return pdat;

	// try previous year
	pdat = date(31, 12, (d.year() - 1));

	return pdat;
};

date date::operator ++(int) {   // postfix operator 
	date d = *this;
	*this = next_date(d);
	return d;
}

date date::operator ++() {   // prex operator 
	*this = next_date(*this);
	return *this;
}

date date::operator --(int) {   // postx operator, return current value 
	date d = *this;
	*this = previous_date(*this);
	return d;
}

date date::operator --() {   // prex operator, return new value 
	*this = previous_date(*this);
	return *this;
};