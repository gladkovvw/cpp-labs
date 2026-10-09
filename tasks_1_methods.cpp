#include "tasks.h"

#include <iostream>

#include "io_utils.h"

// ==================== 1.1 Дробная часть ====================
double fraction(double x) {
  if (x < 0) {
    x = -x;
  }
  return x - static_cast<int>(x);
}

// ==================== 1.3 Букву в число ====================
int charToNum(char x) {
  return x - '0';
}

// ==================== 1.5 Двузначное ====================
bool is2Digits(int x) {
  if (x < 0) {
    x = -x;
  }
  return x >= 10 && x <= 99;
}

// ==================== 1.7 Диапазон ====================
bool isInRange(int a, int b, int num) {
  if (a > b) {
    int temp = a;
    a = b;
    b = temp;
  }
  return num >= a && num <= b;
}

// ==================== 1.9 Равенство ====================
bool isEqual(int a, int b, int c) {
  return a == b && b == c;
}

// ==================== Обертки для меню ====================

void runFraction() {
  double x = ReadDouble("Введи x: ");
  std::cout << "Результат: " << fraction(x) << "\n";
}

void runCharToNum() {
  char x = ReadDigit("Введи цифру: ");
  std::cout << "Результат: " << charToNum(x) << "\n";
}

void runIs2Digits() {
  int x = ReadInt("Введи число: ");
  if (is2Digits(x)) {
    std::cout << "Результат: true\n";
  } else {
    std::cout << "Результат: false\n";
  }
}

void runIsInRange() {
  int a = ReadInt("Введи a: ");
  int b = ReadInt("Введи b: ");
  int num = ReadInt("Введи num: ");
  if (isInRange(a, b, num)) {
    std::cout << "Результат: true\n";
  } else {
    std::cout << "Результат: false\n";
  }
}

void runIsEqual() {
  int a = ReadInt("Введи a: ");
  int b = ReadInt("Введи b: ");
  int c = ReadInt("Введи c: ");
  if (isEqual(a, b, c)) {
    std::cout << "Результат: true\n";
  } else {
    std::cout << "Результат: false\n";
  }
}
