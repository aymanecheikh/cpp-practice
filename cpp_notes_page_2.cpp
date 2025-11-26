#include <exception>
#include <iostream>
#include <string>


int age_verification()
{
	int age;
	std::cout << "How old are you? ";
	std::cin >> age;
	if (age < 13)
	{
		std::cout << "You're not old enough" << std::endl;
		throw std::exception();
	}
	else if (age < 19)
	{
		std::cout << "Welcome to bootcamp" << std::endl;
		return age;
	}
	else
	{
		std::cout << "Welcome to the club" << std::endl;
		return age;
	}
}

int main()
{
	int age;
	int age_guess;
	int bomb_id = 25;
	int bomb_id_guess;
	std::string name_guess;
	std::string name = "Aymane";
	
	age = age_verification();
	std::cout << "Guess my name: ";
	std::cin >> name_guess;
	std::cout << "Guess my age: ";
	std::cin >> age_guess;
	
	if (name_guess == name && age_guess == age)
	{
		std::cout << "You got it right" << std::endl;
	}
	else if (name_guess == name || age_guess == age)
	{
		std::cout << "You got one of them right, but I won't tell "
			<< "you which..." << std::endl;
	}
	
	std::cout << "Now please do not find out the ID of the bomb. "
		<< "Try your luck: ";
	std::cin >> bomb_id_guess;

	if (!(bomb_id == bomb_id_guess))
	{
		std::cout << "Phew, you're in luck!" << std::endl;
	}
	return 0;
}
