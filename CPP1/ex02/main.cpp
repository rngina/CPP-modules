#include <iostream>
#include <string>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout << "memory address of str: " << &str << std::endl;
	std::cout << "memory address held by ptr: " << ptr << std::endl;
	std::cout << "memory address held by ref: " << &ref << std::endl;

	std::cout << std::endl;

	std::cout << "the value of str: " << str << std::endl;
	std::cout << "the value pointed to by ptr: " << *ptr << std::endl;
	std::cout << "the value pointed to by ref: " << ref << std::endl;
}