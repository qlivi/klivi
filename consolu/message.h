// standard lib
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "color.h"
namespace message
{
	void printreset()
	{
		std::cout << RESET << std::endl;
	}

	void printwarning(std::string message)
	{
		std::cout << BOLDYELLOW << message;
		printreset();
	}
	void printerror(std::string message)
	{
		std::cout << BOLDRED << message;
		printreset();
	}
	void printinfo(std::string message)
	{
		std::cout << BOLDBLUE << message;
		printreset();
	}
} // namespace message
