#include <string>
#include <iostream>
using namespace std;

class FizzBuzzEnjoyer 
{
public:
	static string FizzBuzzFunc();
	static void FizzBuzzParamFunc(string&);
	static const string& FizzBuzzConstFunc();
	static char* FizzBuzzCharFunc();
private:
	FizzBuzzEnjoyer();
};