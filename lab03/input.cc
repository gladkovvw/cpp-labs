#include "input.h"

#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>

int ReadInt(const std::string& prompt, int low, int high) {
  while (true) {
    std::cout << prompt;
    int value;
    if (std::cin >> value && value >= low && value <= high) {
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      return value;
    }
    if (std::cin.eof()) {
      std::exit(0);
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "  Ошибка: введите число от " << low << " до " << high
              << ".\n";
  }
}
