#include "unlimitednum.h"
using namespace std;
//It will be better to decompose this file in separate classes but thank u no


UnlimitedNumber::UnlimitedNumber(std::string value_)
{
	try
	{
		int int_value = 0;
		for (int i = 0; i < value_.length(); ++i)
		{
			int_value = static_cast<int>(value_[i]);
			if (int_value < 48 || int_value>57) throw "Bad cast exception, input string is incorrect";
		}
		base_value = value_;
		digits_number = value_.length();
	}
	catch (const char* e)
	{
		cerr << e << endl;
		cout << "During error base value is set as 0" << endl;
		base_value = "0";
		digits_number = 1;
	}
}

UnlimitedNumber::~UnlimitedNumber()
{
}

string UnlimitedNumber::getBaseValue()
{
	return base_value;
}

void UnlimitedNumber::setBaseValue(string value_)
{
	base_value = value_;
	digits_number = value_.length();
}

int UnlimitedNumber::getDigitsNumber() 
{
	return digits_number;
}

UnlimitedNumber UnlimitedNumber::operator+ (const UnlimitedNumber& other_value)const 
{
	string result_string = "";
	if (digits_number >= other_value.digits_number) 
	{
		int sum_of = 0;
		int result_number = 0;
		for (int i = 1 ; i <= other_value.digits_number; i++) 
		{
			sum_of = sum_of + (int)base_value[digits_number - i] + (int)other_value.base_value[other_value.digits_number - i] - 2 * '0';
			if (sum_of > 9) 
			{
				result_string += to_string(sum_of - 10);
				sum_of = 1;
			}
			else 
			{
				result_string += to_string(sum_of);
				sum_of = 0;
			}
		}
		for (int i = other_value.digits_number; i <= digits_number; i++) 
		{
			sum_of = sum_of + (int)base_value[digits_number - i] - '0';
			if (sum_of > 9)
			{
				result_string += to_string(sum_of - 10);
				sum_of = 1;
			}
			else
			{
				result_string += to_string(sum_of);
				sum_of = 0;
			}
		}
	}
	else 
	{
		int sum_of = 0;
		int result_number = 0;
		for (int i = 1; i <= digits_number; i++) 
		{
			sum_of = sum_of + (int)base_value[digits_number - i] + (int)other_value.base_value[other_value.digits_number - i] - 2 * '0';
			if (sum_of > 9)
			{
				result_string += to_string(sum_of - 10);
				sum_of = 1;
			}
			else
			{
				result_string += to_string(sum_of);
				sum_of = 0;
			}
		}
		for (int i = digits_number; i <= other_value.digits_number; i++) 
		{
			sum_of = sum_of + (int)other_value.base_value[other_value.digits_number - i] - '0';
			if (sum_of > 9)
			{
				result_string += to_string(sum_of - 10);
				sum_of = 1;
			}
			else
			{
				result_string += to_string(sum_of);
				sum_of = 0;
			}
		}
	}
	reverse(result_string.begin(), result_string.end());
	return UnlimitedNumber(result_string);
}

