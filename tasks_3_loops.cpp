#include "tasks.h"

#include <iostream>
#include <string>

#include "io_utils.h"

// ==================== 3.1 Числа подряд ====================
std::string listNums(int x) {
  std::string result;
  for (int i = 0; i <= x; ++i) {
    result += std::to_string(i);
    if (i < x) {
      result += " ";
    }
  }
  return result;
}

// ==================== 3.3 Чётные числа ====================
std::string chet(int x) {
  std::string result;
  for (int i = 0; i <= x; i += 2) {
    result += std::to_string(i);
    if (i + 2 <= x) {
      result += " ";
    }
  }
  return result;
}

// ==================== 3.5 Длина числа ====================
int numLen(long x) {
  if (x < 0) {
    x = -x;
  }
  if (x == 0) {
    return 1;
  }
  int count = 0;
  while (x > 0) {
    ++count;
    x /= 10;
  }
  return count;
}

// ==================== 3.7 Квадрат ====================
void square(int x) {
  for (int i = 0; i < x; ++i) {
    for (int j = 0; j < x; ++j) {
      std::cout << "*";
    }
    std::cout << "\n";
  }
}

// ==================== 3.9 Правый треугольник ====================
void rightTriangle(int x) {
  for (int i = 1; i <= x; ++i) {
    for (int j = 0; j < x - i; ++j) {
      std::cout << " ";
    }
    for (int j = 0; j < i; ++j) {
      std::cout << "*";
    }
    std::cout << "\n";
  }
}

// ==================== Обертки для меню ====================

void runListNums() {
  int x = ReadIntInRange("Введи x (>= 0): ", 0, 1000);
  std::cout << "Результат: " << listNums(x) << "\n";
}

void runChet() {
  int x = ReadIntInRange("Введи x (>= 0): ", 0, 1000);
  std::cout << "Результат: " << chet(x) << "\n";
}

void runNumLen() {
  int x = ReadInt("Введи число: ");
  std::cout << "Результат: " << numLen(x) << "\n";
}

void runSquare() {
  int x = ReadIntInRange("Введи x (1..50): ", 1, 50);
  square(x);
}

void runRightTriangle() {
  int x = ReadIntInRange("Введи x (1..50): ", 1, 50);
  rightTriangle(x);
}
