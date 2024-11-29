#include <iostream>
#include "../includes/ScavTrap.hpp"

int main()
{
    std::cout << "-----------------------------------"  << std::endl;
    std::cout << BOLD_GREEN << "CONSTRUCTORS" << RESET << std::endl;
    std::cout << "-----------------------------------"  << std::endl;

    ScavTrap foo;
    ScavTrap bar("Bar");
    ScavTrap buz(foo); // buz will have name "Foo"
    ScavTrap qux;
    qux = bar; // qux will have name "Bar"

    std::cout << "-----------------------------------"  << std::endl;
    std::cout << BOLD_YELLOW << "MAIN" << RESET << std::endl;
    std::cout << "-----------------------------------"  << std::endl;

    foo.attack("Bar");
    bar.takeDamage(20);
    foo.attack("Bar");
    bar.takeDamage(20);
    bar.takeDamage(20);
    bar.takeDamage(20);
    bar.takeDamage(20);
    buz.attack("Bar");
    qux.takeDamage(200);
    qux.attack("Foo");

    qux.guardGate();

    std::cout << "-----------------------------------"  << std::endl;
    std::cout << BOLD_RED << "DESTRUCTORS" << RESET << std::endl;
    std::cout << "-----------------------------------"  << std::endl;
}