#include <iostream>
#include "../includes/Colours.hpp"
#include "../includes/ClapTrap.hpp"

int main()
{
    std::cout << BOLD_GREEN << "CONSTRUCTOR" << RESET << std::endl;

    ClapTrap    foo("Foo");
    ClapTrap    bar("Bar");
    ClapTrap    buz(foo); // buz will have name "Foo"
    ClapTrap    qux;      
    qux = bar;            // qux will have name "Bar"

    std::cout << BOLD_WHITE << "MAIN" << RESET << std::endl;

    foo.attack("Bar");
    bar.takeDamage(1);
    foo.attack("Bar");
    bar.takeDamage(1);
    foo.attack("Bar");
    bar.takeDamage(1);
    foo.attack("Bar");
    bar.takeDamage(1);
    foo.attack("Bar");
    bar.takeDamage(1);
    foo.attack("Bar");
    bar.takeDamage(1);
    foo.attack("Bar");
    bar.takeDamage(1);
   foo.attack("Bar");
    bar.takeDamage(1);
    foo.attack("Bar");
    bar.takeDamage(1);
    foo.attack("Bar");
    bar.takeDamage(1);
    foo.attack("Bar");
    bar.takeDamage(1);

    std::cout << "-----------------------------------"  << std::endl;

    buz.attack("Bar");
    qux.takeDamage(50);
    qux.attack("Foo");

    std::cout << BOLD_RED << "DESTRUCTOR" << RESET << std::endl;
}