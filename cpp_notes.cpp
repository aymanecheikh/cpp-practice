#include <iostream>
#include <cmath>
#include <climits>


using std::cin;
using std::cout;
using std::endl;


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

int main()
{
	power_function();
	cout << endl;
	integral_limit_constants();
	cout << "I also covered chars but haven't yet addressed it explicitly"
	<< " here." << endl << "I also need to cover bools and maybe escape "
	<< "sequences if I have time." << endl << "But this is secondary to "
	<< "my focus. I will continue on and cover all other data types."
	<< endl;
}
