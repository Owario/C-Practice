#include "fizzbuzz.h"
using namespace std;



string FizzBuzzEnjoyer::FizzBuzzFunc()
{
	static string result_string = "";

	for (int i = 1; i < 100; ++i)
	{
		if (i % 15 == 0)
		{
			result_string += "FizzBuzz ";
			continue;
		}
		else if (i % 5 == 0)
		{
			result_string += "Buzz ";
		}
		else if (i % 3 == 0)
		{
			result_string += "Fizz ";
		}
		else
		{
			result_string += to_string(i) + " ";
		}
	}
	return result_string;
}

void FizzBuzzEnjoyer::FizzBuzzParamFunc(string& result_string) 
{
	for (int i = 1; i < 100; ++i)
	{
		if (i % 15 == 0)
		{
			result_string += "FizzBuzz ";
			continue;
		}
		else if (i % 5 == 0)
		{
			result_string += "Buzz ";
		}
		else if (i % 3 == 0)
		{
			result_string += "Fizz ";
		}
		else
		{
			result_string += to_string(i) + " ";
		}
	}
}

const string& FizzBuzzEnjoyer::FizzBuzzConstFunc()
{
	static string result_string = "";

	for (int i = 1; i < 100; ++i)
	{
		if (i % 15 == 0)
		{
			result_string += "FizzBuzz ";
			continue;
		}
		else if (i % 5 == 0)
		{
			result_string += "Buzz ";
		}
		else if (i % 3 == 0)
		{
			result_string += "Fizz ";
		}
		else
		{
			result_string += to_string(i) + " ";
		}
	}
	return result_string;
}

char* FizzBuzzEnjoyer::FizzBuzzCharFunc() 
{
	char* result_string = new char[1000];
	const char f_ = 'F';
	const char i_ = 'i';
	const char z_ = 'z';
	const char b_ = 'B';
	const char u_ = 'u';
	const char o_ = '0';
	const char space_ = ' ';

	int global_iterator = 0;
	for (int i = 1; i < 100; ++i)
	{
		if (i % 15 == 0)
		{
			result_string[global_iterator++] = f_;
			result_string[global_iterator++] = i_;
			result_string[global_iterator++] = z_;
			result_string[global_iterator++] = z_;
			result_string[global_iterator++] = b_;
			result_string[global_iterator++] = u_;
			result_string[global_iterator++] = z_;
			result_string[global_iterator++] = z_;
			result_string[global_iterator++] = space_;
			continue;
		}
		else if (i % 5 == 0)
		{
			result_string[global_iterator++] = b_;
			result_string[global_iterator++] = u_;
			result_string[global_iterator++] = z_;
			result_string[global_iterator++] = z_;
			result_string[global_iterator++] = space_;
		}
		else if (i % 3 == 0)
		{
			result_string[global_iterator++] = f_;
			result_string[global_iterator++] = i_;
			result_string[global_iterator++] = z_;
			result_string[global_iterator++] = z_;
			result_string[global_iterator++] = space_;
		}
		else
		{
			if (i > 9) 
			{
				result_string[global_iterator++] = (int)(i/10) + o_;
			}
			result_string[global_iterator++] = (i%10) + o_;
			result_string[global_iterator++] = space_;
			
		}
	}
	result_string[global_iterator++] = '!';

	return result_string;
}

FizzBuzzEnjoyer::FizzBuzzEnjoyer(){}