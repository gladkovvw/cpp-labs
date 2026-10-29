#include "tasks.h"

#include <algorithm>
#include <deque>
#include <iostream>
#include <string>

#include "io_utils.h"

namespace {
// Функциональный объект (счетчик)
struct Counter {
  int value = 0;
  int operator()() { return ++value; }
};
}  // namespace

void Task6GenerateDeque() {
  int n = ReadIntInRange("Введи N: ", 1, 50);
  int size = ReadIntInRange("Размер дека (>= 2N): ", 2 * n, 100);

  std::deque<int> d(size, 0);

  // Первый вызов: заполняем начало (1, 2, 3)
  std::generate(d.begin(), d.begin() + n, Counter());

  // Второй вызов: заполняем конец с помощью обратных итераторов.
  // Так как итераторы идут с конца, числа 1, 2, 3 запишутся 
  // в обратном порядке, и визуально в конце дека будет 3, 2, 1.
  std::generate(d.rbegin(), d.rbegin() + n, Counter());

  std::cout << "Результат: ";
  for (int x : d) {
    std::cout << x << " ";
  }
  std::cout << "\n";
}
