#ifndef UNLIM_NUMBER
#define UNLIM_NUMBER

//It will be better to decompose this file in separate classes but thank u no
#include <string>
#include <iostream>
using namespace std;


class UnlimitedNumber
{
private: 
	string base_value;
	int digits_number;

public: 
	UnlimitedNumber(string);

	~UnlimitedNumber();

	string getBaseValue();

	void setBaseValue(string value_);

	int getDigitsNumber();

	UnlimitedNumber operator+(UnlimitedNumber& const) const;

	UnlimitedNumber operator-(UnlimitedNumber& const) const;

	bool operator>(UnlimitedNumber const&);

	bool operator<(UnlimitedNumber const&);

	friend std::ostream& operator<< (std::ostream &os, const UnlimitedNumber &x);
};

#endif // !UNLIM_NUMBER
