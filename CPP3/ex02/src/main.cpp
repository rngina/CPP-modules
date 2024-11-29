#include <iostream>
#include "../includes/FragTrap.hpp"

int main()
{
    std::cout << "-----------------------------------"  << std::endl;
    std::cout << BOLD_GREEN << "CONSTRUCTORS" << RESET << std::endl;
    std::cout << "-----------------------------------"  << std::endl;

    FragTrap foo("Foo");
    FragTrap bar("Bar");
    FragTrap buz(foo); // buz will have name "Foo"
    FragTrap qux;
    qux = bar; // qux will have name "Bar"

    std::cout << "-----------------------------------"  << std::endl;
    std::cout << BOLD_YELLOW << "MAIN" << RESET << std::endl;
    std::cout << "-----------------------------------"  << std::endl;

    foo.attack("Bar");
    bar.takeDamage(30);
    foo.attack("Bar");
    bar.takeDamage(30);
    bar.takeDamage(30);
    bar.takeDamage(30);
    bar.takeDamage(30);
    buz.attack("Bar");
    qux.takeDamage(200);
    qux.attack("Foo");

    qux.highFivesGuys();

    std::cout << "-----------------------------------"  << std::endl;
    std::cout << BOLD_RED << "DESTRUCTORS" << RESET << std::endl;
    std::cout << "-----------------------------------"  << std::endl;
}