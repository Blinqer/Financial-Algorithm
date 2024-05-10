class date {

protected:                   // 三種屬性
	int year_;
	int month_;
	int day_;

public:

	date();                    // 預設值：空的
	date(const int& d, const int& m, const int& y);

	bool valid() const;        // 檢查是否為常數

	// 讀
	int day() const;
	int month() const;
	int year() const;

	// 寫
	void set_day(const int& day);
	void set_month(const int& month);
	void set_year(const int& year);

	date operator ++(); // prefix 
	date operator ++(int); // postfix 
	date operator --(); // prefix 
	date operator --(int); // postfix
};

bool operator == (const date&, const date&); // comparison operators 
bool operator != (const date&, const date&);
bool operator < (const date&, const date&);
bool operator > (const date&, const date&);
bool operator <= (const date&, const date&);
bool operator >= (const date&, const date&);