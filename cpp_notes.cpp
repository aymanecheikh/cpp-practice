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

void string_basics()
{
	string greeting = "hello";
	string complete_greeting = greeting + " there";
	cout << complete_greeting << endl;
	cout << "appending '!' to string" << endl;
	complete_greeting += "!";
	cout << complete_greeting << endl << endl;
	string greeting_getlined;
	getline(cin, greeting_getlined);
	
	cout << endl << "length of string: " << greeting_getlined.length()
		<< endl;
	cout << "size of string: " << greeting_getlined.size() << endl
		<< endl;
	
	cout << "appending '!' to greeting_getlined: "
		<< greeting_getlined.append("!") << endl << endl;
	
	cout << "breaking up greeting_getlined: "
		<< greeting_getlined.insert(3, "\t\t") << endl << endl;
	
	cout << "putting greeting_getlined back together again: "
		<< greeting_getlined.erase(3, 2) << endl << endl;
	
	cout << "removing '!' from the greeting_getlined to return it to its "
		<< "original form: "
		<< greeting_getlined.erase(greeting_getlined.length() -1)
		<< endl << endl;

	greeting_getlined.pop_back();
	cout << "oops... we went too far with an alternative final index "
		<< "eraser..." << greeting_getlined << endl
		<< endl;
	
	cout << "killing the integrity of greeting_getlined: "
		<< greeting_getlined.erase(3) << endl << endl;

	cout << "unfortunately, my world is corrupt, so I will override our "
		<< "little string here with a string of my own choice... "
		<< endl << greeting_getlined.replace(0, 4, "c++ is my future")
		<< endl << endl;

	cout << "my cutting edge deep tech algo has incorrectly identified a "
		<< "bad word: " << greeting_getlined.replace(9, 4, "****")
		<< endl << endl;

	cout << "searching for a programming language and censoring it for "
		<< "copyright purposes... XD: "
		<< greeting_getlined.replace(
			greeting_getlined.find("c++"), 3, "***"
		) << endl << endl;

	cout << "extracting a specific subsctring: "
		<< greeting_getlined.substr(5, 2) << endl << endl;

	cout << "We need to reset our string as we've manipulated it to "
		<< "obseletion: "
		<< greeting_getlined.replace(
			0,
			4,
			"Hi my name is Barthomelow Matthews "
		) << endl << endl;

	cout << "We will now find the first vowel in this new string: "
		<< greeting_getlined.find_first_of("aeiou") << endl << endl;
}


int main()
{
	cout << "'c'" << "\"c\"" << "<<< These are ways to set up constants"
		<< endl << endl;

	auto x = 5ULL;
	cout << x << endl << endl;
}
