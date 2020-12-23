#include <iostream>
#include <string>
#include <fstream>

void writeFile(std::string file, std::string data) {
  std::ofstream File(file);

  File << data;
}

std::string readFile(std::string file) {
  std::string fileContent, line;
  std::ifstream File(file);

  while (std::getline(File, line)) {
    fileContent += line;
  }

  return fileContent;
}

void appendFile(std::string file, std::string data) {
  std::string content = readFile(file);

  content += data;

  writeFile(file, content);
}