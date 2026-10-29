#include "tasks.h"

#include <deque>
#include <iostream>
#include <string>

#include "io_utils.h"

void Task2InsertDeque() {
  int n = ReadIntInRange("Введи четный размер дека: ", 2, 100);
  if (n % 2 != 0) {
    std::cout << "Размер должен быть четным!\n";
    return;
  }

  std::deque<int> d;
  for (int i = 0; i < n; ++i) {
    d.push_back(ReadInt("d[" + std::to_string(i) + "] = "));
  }

  // Ставим итератор на начало второй половины (на '3' в примере 1 2 3 4)
  auto it = d.begin();
  std::advance(it, n / 2);

  for (int i = 0; i < n / 2; ++i) {
    // Отходим на один шаг назад (сначала на '2', потом на '1')
    --it; 
    // Вставляем -1 перед текущим элементом
    it = d.insert(it, -1); 
  }

  std::cout << "Результат: ";
  for (int x : d) {
    std::cout << x << " ";
  }
  std::cout << "\n";
}
