//enter a numnber
#include <string>
#include "capitalizationChange.cxx"

//Request input and returns input using toLowercase().
std::string stringInput()
{
	std::string inputString;
	std::cout << "Enter Rock, Paper, or Scissor" << std::endl;
	std::cin >> inputString;
	inputString = toLowercase(inputString);
	
return inputString;

}

