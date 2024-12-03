#include <iostream>
#include "../includes/ClapTrap.hpp"

int main()
{
    std::cout << "-----------------------------------"  << std::endl;
    std::cout << BOLD_GREEN << "CONSTRUCTORS" << RESET << std::endl;
    std::cout << "-----------------------------------"  << std::endl;

    ClapTrap    foo("Foo");
    ClapTrap    bar("Bar");
    ClapTrap    buz(foo); // buz will have name "Foo"
    ClapTrap    qux;      
    qux = bar;            // qux will have name "Bar"

    std::cout << "-----------------------------------"  << std::endl;
    std::cout << BOLD_YELLOW << "MAIN" << RESET << std::endl;
    std::cout << "-----------------------------------"  << std::endl;

    foo.attack("Bar");
    foo.attack("Bar");
    foo.attack("Bar");
    foo.attack("Bar");
    foo.attack("Bar");
    foo.attack("Bar");
    foo.attack("Bar");
    foo.attack("Bar");
    foo.attack("Bar");
    foo.attack("Bar");
    foo.attack("Bar");
    foo.attack("Bar");
    bar.takeDamage(3);
    bar.takeDamage(3);
    bar.takeDamage(3);
    bar.takeDamage(3);
    bar.takeDamage(1);
    buz.attack("Bar");
    qux.takeDamage(50);
    qux.attack("Foo");

    std::cout << "-----------------------------------"  << std::endl;
    std::cout << BOLD_RED << "DESTRUCTORS" << RESET << std::endl;
    std::cout << "-----------------------------------"  << std::endl;
}