#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		//open the file and check if I can read it
		std::fstream inputfile(argv[1], std::ios::in);
		if (!inputfile.is_open())
		{
			std::cout << "Error: could not open the input file" << std::endl;
			return (1);
		}

		std::string searchStr = argv[2];
		std::string replaceStr = argv[3];
		//check if input strings are not empty
		if (searchStr.empty())
		{
			std::cout << "Error: empty search string" << std::endl;
			return (1);
		}

		//create a new file to write the replaced content and check if I can write to it
		std::string replacefile = argv[1] + (std::string)".replace";
		std::fstream outputfile(replacefile.c_str(), std::ios::out);
		if (!outputfile.is_open())
		{
			std::cout << "Error: could not create new file" << std::endl;
			return (1);
		}

		//read the file line by line
		std::string line;
		while (std::getline(inputfile, line))
		{
			//replace the string and write to the new file
			std::string	result;
			size_t pos = 0;
			if ((pos = line.find(argv[2], pos)) != std::string::npos)
				result = line.substr(0, pos) + argv[3] + line.substr(pos + ((std::string)argv[2]).size(), line.size() - pos - ((std::string)argv[2]).size());
			outputfile << result << std::endl;
		}
		inputfile.close();
		outputfile.close();
	}
}