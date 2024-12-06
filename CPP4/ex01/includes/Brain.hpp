#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
	public:
		Brain();
		Brain(Brain &toCopy);
		~Brain();
		Brain &operator=(Brain &toCopy);
		std::string ideas[100];
};

#endif
