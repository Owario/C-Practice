#pragma once
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

	UnlimitedNumber operator+(const UnlimitedNumber&) const;
};