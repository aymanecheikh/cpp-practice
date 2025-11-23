#include <iostream>
#include <cmath>
#include <climits>
#include <float.h>
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::boolalpha;
using std::fixed;
using std::string;


double power(double base, int exponent)
{
	double result = 1;
	for(int i = 0; i < exponent; i++)
	{
		result = result * base;
	}
	return result;
}
void print_pow(double base, int exponent)
{
	double myPower = power(base, exponent);
	cout << base << " raised to the " << exponent << " power is "
	<< myPower << ".\n";

}
void power_function()
{
	double base; int exponent;
	cout << "What is the base? ";
	cin >> base;
	cout << "What is the exponent? ";
	cin >> exponent;
	print_pow(base, exponent);

}

void integral_limit_constants()
{
	cout << "Single quotes for char... double quotes for strings."
	<< endl;
	
	char x = 'A';
	cout << x << endl;
	cout << (int) x << endl;

	cout << "Short Min: " << SHRT_MIN << endl;
	cout << "Short Max: " << SHRT_MAX << endl;
	cout << "Unsigned Short Max: " << USHRT_MAX << endl << endl;

	cout << "Int Min: " << INT_MIN << endl;
	cout << "Int Max: " << INT_MAX << endl;
	cout << "Unsigned Int Max: " << UINT_MAX << endl << endl;

	cout << "Long Min: " << LONG_MIN << endl;
	cout << "Long Max: " << LONG_MAX << endl;
	cout << "Unsigned Long Max: " << ULONG_MAX << endl << endl;

	cout << "Long Long Min: " << LLONG_MIN << endl;
	cout << "Long Long Max: " << LLONG_MAX << endl;
	cout << "Unsigned Long Long Max: " << ULLONG_MAX << endl << endl;
}

void bool_study()
{
	cout << endl;
	integral_limit_constants();
	bool found = false;
	cout << boolalpha << found << endl;
	found = true;
	cout << boolalpha << found << endl;
	
}

void float_study()
{
	float a = 10.0 / 3;
	double b = 10.0 / 3;
	long double c = 10.0 / 3;
	a = a * 10000000000000;
	b = b * 10000000000000;
	c = c * 10000000000000;

	cout << fixed << a << endl;
	cout << FLT_DIG << endl;
	cout << fixed << b << endl;
	cout << DBL_DIG << endl;
	cout << fixed << c << endl;
	cout << LDBL_DIG << endl;

}

void constants()
{
	const int SETTING = 5;
	enum { y = 100 };

}

void math_funcs()
{
	cout << sqrt(-25) << endl;
	cout << pow(9, 999) << endl;
	cout << pow(-9, 999) << endl;
	cout << NAN << endl;
	cout << INFINITY << endl;
	cout << -INFINITY << endl;
	cout << remainder(10, 3) << endl;
	cout << 10 % 3 << endl;
	cout << remainder(10, 3.25) << endl;
	cout << fmod(10, 3.25) << endl;
	cout << fmax(10, 3.25) << endl;
	cout << fmin(10, 3.25) << endl;
	cout << ceil(fmin(10, 3.25)) << endl;
	cout << floor(fmin(10, 3.25)) << endl;
	cout << trunc(fmin(10, 3.25)) << endl;

}

int main()
{
	string greeting = "hello";
	string complete_greeting = greeting + " there";
	complete_greeting += "!";
	cout << complete_greeting << endl;
	cout << complete_greeting.length() << endl;
	string greeting_getlined;
	getline(cin, greeting_getlined);
	cout << greeting_getlined << endl;
}
