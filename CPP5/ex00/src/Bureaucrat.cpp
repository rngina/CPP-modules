#include "../includes/Bureaucrat.hpp"
#include "../includes/Colours.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150)
{
	std::cout << "Default Bureaucrat constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat constructor for " << name << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &toCopy) : _name(toCopy._name), _grade(toCopy._grade)
{
	std::cout << "Bureaucrat copy constructor for " << this->_name << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor for " << this->_name << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &toCopy)
{
	if (this == &toCopy)
		return *this;
	Bureaucrat copy(toCopy);
	return copy;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

void Bureaucrat::setGrade(int grade)
{
	if (grade >= 0 && grade <= 150)
		this->_grade = grade;
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 >= 0 )
		this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 <= 150)
		this->_grade++;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &toPrint)
{
  o << toPrint.getName();
  o << ", bureaucrat grade ";
  o << toPrint.getGrade();
  o << std::endl;
  return o;
}