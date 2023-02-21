#include <iostream>

int main(void)
{
	const std::string red("\033[0;31m");
	const std::string reset("\033[0m");
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	std::cout << "The memory address of the string variable is " << red << &string << reset << std::endl;
	std::cout << "The memory address held by stringPTR " << red << stringPTR << reset << std::endl;
	std::cout << "The memory address held by stringREF " << red << &stringREF << reset << std::endl;
	std::cout << "The value of the string variable is " << red << string << reset << std::endl;
	std::cout << "The value pointed to by stringPTR is " << red << *stringPTR <<reset << std::endl;
	std::cout << "The value pointed to by stringREF is " << red << stringREF << reset << std::endl;
}
