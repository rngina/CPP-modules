#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain();
		Brain(Brain &toCopy);
		~Brain();
		Brain &operator=(Brain &toCopy);
		std::string getIdea(int num);
		void setIdea(int num, std::string idea);
};

#endif
