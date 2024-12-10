#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {
private:
	const std::string		_name;
	int						_grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &toCopy);
	~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &toCopy);

	int			getGrade() const;
	std::string getName() const;
	void 		setGrade(int grade);

	void		incrementGrade();
	void		decrementGrade();

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &toPrint);

#endif