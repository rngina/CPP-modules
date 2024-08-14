#include <string>
#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{

public:
	PhoneBook(void);
	~PhoneBook(void);
	void	add(void);
	void	search(void);
	void	exit(void);

private:
	Contact contacts[8];
	int		contact_count;

};

#endif