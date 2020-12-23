#pragma once
#include <iostream>
#include <string>

void help() {
	std::cout
	<< "List of commands: \n\n"
	<< "'help'\n"
	<< "  Shows list of commands to use\n\n"
	<< "'bal'\n"
	<< "  Displays current balance in wallet."
	<< std::endl;
}

void initCommands() {
	std::string userInput;
	std::cout << ">> ";

	std::getline(std::cin, userInput);
}
