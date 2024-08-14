#include <iostream>

int main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 0;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				argv[i][j] = (char)std::toupper(argv[i][j]);
				j++;
			}
			i++;
		}
		i = 1;
		while (argv[i])
		{
			std::cout << argv[i];
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}