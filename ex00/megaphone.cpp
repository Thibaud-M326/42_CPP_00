#include <iostream>
#include <string.h>

int main(int argc, char* argv[])
{
	std::string arg;

	if (argc < 2)
    	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		for (int i = 1; i < argc; i++) {
			std::string arg = argv[i];
			for (unsigned long i = 0; i < arg.length(); i++) {
				arg[i] = toupper(arg[i]);
			}
		std::cout << arg;
		}
		std::cout << std::endl;
	}
    return (0);
}