#pragma once
#include <iostream>
#include <string>

#include "commands/help.hpp"

void help();

void initCommands() {
	std::string userInput;
	std::cout << "\n>> ";

	std::getline(std::cin, userInput);
  std::cout << "\n";

  if (userInput == "help") {
    help();
  } else {
    std::cout << "Invalid Command. Please try again." << std::endl;
    initCommands();
  }
}