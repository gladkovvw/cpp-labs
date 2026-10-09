#ifndef LAB01_IO_UTILS_H_
#define LAB01_IO_UTILS_H_

#include <iostream>
#include <string>

// Читает целое число с клавиатуры. При ошибке повторяет ввод.
inline int ReadInt(const std::string& prompt) {
  int value;
  while (true) {
    std::cout << prompt;
    if (std::cin >> value) {
      return value;
    }
    std::cout << "Ошибка ввода! Введи целое число.\n";
    std::cin.clear();
    std::cin.ignore(10000, '\n');
  }
}

// Читает целое число в диапазоне [min_val, max_val].
inline int ReadIntInRange(const std::string& prompt, int min_val, int max_val) {
  while (true) {
    int value = ReadInt(prompt);
    if (value >= min_val && value <= max_val) {
      return value;
    }
    std::cout << "Число должно быть от " << min_val
              << " до " << max_val << ".\n";
  }
}

// Читает вещественное число. При ошибке повторяет ввод.
inline double ReadDouble(const std::string& prompt) {
  double value;
  while (true) {
    std::cout << prompt;
    if (std::cin >> value) {
      return value;
    }
    std::cout << "Ошибка ввода! Введи число.\n";
    std::cin.clear();
    std::cin.ignore(10000, '\n');
  }
}

// Читает символ-цифру '0'..'9'.
inline char ReadDigit(const std::string& prompt) {
  while (true) {
    char value;
    std::cout << prompt;
    if (std::cin >> value && value >= '0' && value <= '9') {
      return value;
    }
    std::cout << "Ошибка! Введи одну цифру 0-9.\n";
    std::cin.clear();
    std::cin.ignore(10000, '\n');
  }
}

#endif  // LAB01_IO_UTILS_H_
