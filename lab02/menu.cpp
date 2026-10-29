#include "menu.h"

#include <iostream>

#include "io_utils.h"
#include "tasks.h"

void RunMainMenu() {
  int choice;
  do {
    std::cout << "\n========== ЛАБА 2 (STL) ==========\n";
    std::cout << "1  - Задание 1. Итераторы\n";
    std::cout << "2  - Задание 2. Вставка в дек\n";
    std::cout << "3  - Задание 3. Splice списков\n";
    std::cout << "4  - Задание 4. Генерация букв\n";
    std::cout << "5  - Задание 5. Удаление нулей\n";
    std::cout << "6  - Задание 6. Generate в дек\n";
    std::cout << "7  - Задание 7. Inplace merge\n";
    std::cout << "8  - Задание 8. Adjacent difference\n";
    std::cout << "9  - Задание 9. Includes (multiset)\n";
    std::cout << "10 - Задание 10. Multimap\n";
    std::cout << "0  - Выход\n";
    choice = ReadIntInRange("Твой выбор: ", 0, 10);

    switch (choice) {
      case 1:
        Task1VectorFromFile();
        break;
      case 2:
        Task2InsertDeque();
        break;
      case 3:
        Task3SpliceLists();
        break;
      case 4:
        Task4GenerateLetters();
        break;
      case 5:
        Task5RemoveZeros();
        break;
      case 6:
        Task6GenerateDeque();
        break;
      case 7:
        Task7InplaceMerge();
        break;
      case 8:
        Task8AdjacentDifference();
        break;
      case 9:
        Task9Includes();
        break;
      case 10:
        Task10GroupByLastDigit();
        break;
      case 0:
        std::cout << "Пока!\n";
        break;
    }
  } while (choice != 0);
}
