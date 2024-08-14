#include <string>
#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook
{

public:
	PhoneBook(void);
	~PhoneBook(void);

	Contact contacts[8];
	int		contact_count;

	void	add(void);
	void	search(void);
	void	exit(void);
};

#endif