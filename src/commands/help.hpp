#pragma once
#include <iostream>
#include <string>

#include "../commandMaker.hpp"

void initCommands();

void help() {
	std::cout
	<< "List of commands: \n\n"
	<< "'help'\n"
	<< "  Shows list of commands to use\n\n"
	<< "'bal'\n"
	<< "  Displays current balance in wallet."
	<< std::endl;

  initCommands();
}