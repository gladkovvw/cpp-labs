#include "tasks.h"

#include <iostream>

#include "io_utils.h"

// ==================== 2.1 Модуль числа ====================
int myAbs(int x) {
  if (x < 0) {
    return -x;
  }
  return x;
}

// ==================== 2.3 Тридцать пять ====================
bool is35(int x) {
  bool div3 = (x % 3 == 0);
  bool div5 = (x % 5 == 0);
  return div3 != div5;
}

// ==================== 2.5 Тройной максимум ====================
int max3(int x, int y, int z) {
  int max_val = x;
  if (y > max_val) {
    max_val = y;
  }
  if (z > max_val) {
    max_val = z;
  }
  return max_val;
}

// ==================== 2.7 Двойная сумма ====================
int sum2(int x, int y) {
  int s = x + y;
  if (s >= 10 && s <= 19) {
    return 20;
  }
  return s;
}

// ==================== 2.9 День недели ====================
std::string day(int x) {
  switch (x) {
    case 1: return "понедельник";
    case 2: return "вторник";
    case 3: return "среда";
    case 4: return "четверг";
    case 5: return "пятница";
    case 6: return "суббота";
    case 7: return "воскресенье";
    default: return "это не день недели";
  }
}

// ==================== Обертки для меню ====================

void runMyAbs() {
  int x = ReadInt("Введи x: ");
  std::cout << "Результат: " << myAbs(x) << "\n";
}

void runIs35() {
  int x = ReadInt("Введи x: ");
  if (is35(x)) {
    std::cout << "Результат: true\n";
  } else {
    std::cout << "Результат: false\n";
  }
}

void runMax3() {
  int x = ReadInt("Введи x: ");
  int y = ReadInt("Введи y: ");
  int z = ReadInt("Введи z: ");
  std::cout << "Результат: " << max3(x, y, z) << "\n";
}

void runSum2() {
  int x = ReadInt("Введи x: ");
  int y = ReadInt("Введи y: ");
  std::cout << "Результат: " << sum2(x, y) << "\n";
}

void runDay() {
  int x = ReadIntInRange("Введи день недели (1-7): ", 1, 7);
  std::cout << "Результат: " << day(x) << "\n";
}
