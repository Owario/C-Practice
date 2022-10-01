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


	int global_iterator = 0;
	for (int i = 1; i < 100; ++i)
	{
		if (i % 15 == 0)
		{
			result_string[global_iterator++] = 'F';
			result_string[global_iterator++] = 'i';
			result_string[global_iterator++] = 'z';
			result_string[global_iterator++] = 'z';
			result_string[global_iterator++] = 'B';
			result_string[global_iterator++] = 'u';
			result_string[global_iterator++] = 'z';
			result_string[global_iterator++] = 'z';
			result_string[global_iterator++] = ' ';
			continue;
		}
		else if (i % 5 == 0)
		{
			result_string[global_iterator++] = 'B';
			result_string[global_iterator++] = 'u';
			result_string[global_iterator++] = 'z';
			result_string[global_iterator++] = 'z';
			result_string[global_iterator++] = ' ';
		}
		else if (i % 3 == 0)
		{
			result_string[global_iterator++] = 'F';
			result_string[global_iterator++] = 'i';
			result_string[global_iterator++] = 'z';
			result_string[global_iterator++] = 'z';
			result_string[global_iterator++] = ' ';
		}
		else
		{
			if (i > 9) 
			{
				result_string[global_iterator++] = (int)(i/10) + '0';
			}
			result_string[global_iterator++] = (i%10) + '0';
			result_string[global_iterator++] = ' ';
			
		}
	}
	result_string[global_iterator++] = '!';

	return result_string;
}

FizzBuzzEnjoyer::FizzBuzzEnjoyer(){}