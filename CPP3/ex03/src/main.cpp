#include <iostream>
#include "../includes/Colours.hpp"
#include "../includes/FragTrap.hpp"

int main()
{
    std::cout << BOLD_GREEN << "CONSTRUCTOR" << RESET << std::endl;

    FragTrap foo("Foo");
    FragTrap bar("Bar");
    FragTrap buz(foo); // buz will have name "Foo"
    FragTrap qux;
    qux = bar; // qux will have name "Bar"

    std::cout << BOLD_WHITE << "MAIN" << RESET << std::endl;

    foo.attack("Bar");
    bar.takeDamage(20);
    foo.attack("Bar");
    bar.takeDamage(20);
    foo.attack("Bar");
    bar.takeDamage(20);
    foo.attack("Bar");
    bar.takeDamage(20);
    foo.attack("Bar");
    bar.takeDamage(20);
    foo.attack("Bar");
    bar.takeDamage(20);
    foo.attack("Bar");
    bar.takeDamage(20);
    foo.attack("Bar");
    bar.takeDamage(20);
    foo.attack("Bar");
    bar.takeDamage(20);
    foo.attack("Bar");
    bar.takeDamage(20);
    foo.attack("Bar");
    bar.takeDamage(20);

    std::cout << "-----------------------------------" << std::endl;

    buz.attack("Bar");
    qux.takeDamage(20);
    qux.attack("Foo");
    qux.beRepaired(20);

    qux.highFivesGuys();

    std::cout << BOLD_RED << "DESTRUCTOR" << RESET << std::endl;
}