class date {

protected:                   // �T���ݩ�
	int year_;
	int month_;
	int day_;

public:

	date();                    // �w�]�ȡG�Ū�
	date(const int& d, const int& m, const int& y);

	bool valid() const;        // �ˬd�O�_���`��

	// Ū
	int day() const;
	int month() const;
	int year() const;

	// �g
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