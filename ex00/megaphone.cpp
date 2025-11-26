#include <iostream>
#include <cstring>

int main(int argc, char* argv[])
{
	if (argc < 2)
    	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else 
	{
		for (int i = 1; i < argc; i++)
		{
			std::string arg = argv[i];
			for (size_t i = 0; i < arg.length(); i++)
			{
				arg[i] = std::toupper(arg[i]);
			}
			std::cout << arg;
		}
		std::cout << std::endl;
	}
    return (0);
}