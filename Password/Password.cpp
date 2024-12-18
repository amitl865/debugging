#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value; // any password with length of 16

	if (!strcmp(pwd.value, "********")) // will let you through because there was no space to add the /0 so it results in an error in strcmp and passes the if
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}
