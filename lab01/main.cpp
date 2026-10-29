#include <iostream>

#include "io_utils.h"
#include "tasks.h"

void MenuTask1() {
  int choice;
  do {
    std::cout << "\n===== Задание 1. Методы =====\n";
    std::cout << "1 - Дробная часть\n";
    std::cout << "2 - Букву в число\n";
    std::cout << "3 - Двузначное\n";
    std::cout << "4 - Диапазон\n";
    std::cout << "5 - Равенство\n";
    std::cout << "0 - Назад\n";
    choice = ReadIntInRange("Твой выбор: ", 0, 5);

    switch (choice) {
      case 1: runFraction(); break;
      case 2: runCharToNum(); break;
      case 3: runIs2Digits(); break;
      case 4: runIsInRange(); break;
      case 5: runIsEqual(); break;
      case 0: break;
    }
  } while (choice != 0);
}

void MenuTask2() {
  int choice;
  do {
    std::cout << "\n===== Задание 2. Условия =====\n";
    std::cout << "1 - Модуль числа\n";
    std::cout << "2 - Тридцать пять\n";
    std::cout << "3 - Тройной максимум\n";
    std::cout << "4 - Двойная сумма\n";
    std::cout << "5 - День недели\n";
    std::cout << "0 - Назад\n";
    choice = ReadIntInRange("Твой выбор: ", 0, 5);

    switch (choice) {
      case 1: runMyAbs(); break;
      case 2: runIs35(); break;
      case 3: runMax3(); break;
      case 4: runSum2(); break;
      case 5: runDay(); break;
      case 0: break;
    }
  } while (choice != 0);
}

void MenuTask3() {
  int choice;
  do {
    std::cout << "\n===== Задание 3. Циклы =====\n";
    std::cout << "1 - Числа подряд\n";
    std::cout << "2 - Чётные числа\n";
    std::cout << "3 - Длина числа\n";
    std::cout << "4 - Квадрат\n";
    std::cout << "5 - Правый треугольник\n";
    std::cout << "0 - Назад\n";
    choice = ReadIntInRange("Твой выбор: ", 0, 5);

    switch (choice) {
      case 1: runListNums(); break;
      case 2: runChet(); break;
      case 3: runNumLen(); break;
      case 4: runSquare(); break;
      case 5: runRightTriangle(); break;
      case 0: break;
    }
  } while (choice != 0);
}

void MenuTask4() {
  int choice;
  do {
    std::cout << "\n===== Задание 4. Массивы =====\n";
    std::cout << "1 - Поиск первого значения\n";
    std::cout << "2 - Максимум по модулю\n";
    std::cout << "3 - Добавление массива\n";
    std::cout << "4 - Возвратный реверс\n";
    std::cout << "5 - Все вхождения\n";
    std::cout << "0 - Назад\n";
    choice = ReadIntInRange("Твой выбор: ", 0, 5);

    switch (choice) {
      case 1: runFindFirst(); break;
      case 2: runMaxAbs(); break;
      case 3: runAdd(); break;
      case 4: runReverseBack(); break;
      case 5: runFindAll(); break;
      case 0: break;
    }
  } while (choice != 0);
}

int main() {
  int choice;
  do {
    std::cout << "\n========== ЛАБА 1 ==========\n";
    std::cout << "1 - Задание 1. Методы\n";
    std::cout << "2 - Задание 2. Условия\n";
    std::cout << "3 - Задание 3. Циклы\n";
    std::cout << "4 - Задание 4. Массивы\n";
    std::cout << "0 - Выход\n";
    choice = ReadIntInRange("Твой выбор: ", 0, 4);

    switch (choice) {
      case 1: MenuTask1(); break;
      case 2: MenuTask2(); break;
      case 3: MenuTask3(); break;
      case 4: MenuTask4(); break;
      case 0: std::cout << "Пока!\n"; break;
    }
  } while (choice != 0);

  return 0;
}
