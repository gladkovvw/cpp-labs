#include "tasks.h"

#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>

#include "io_utils.h"

void Task4GenerateLetters() {
  std::string file_name = "output_letters.txt";
  int n = ReadIntInRange("Введи N (1..26): ", 1, 26);

  std::ofstream out(file_name);
  char start = 'A';
  
  std::generate_n(std::ostream_iterator<char>(out, " "), n,
                  [&start]() { return start++; });
  out.close();

  std::ifstream in(file_name);
  std::string line;
  std::cout << "Содержимое файла: ";
  while (std::getline(in, line)) {
    std::cout << line;
  }
  std::cout << "\n";
}
