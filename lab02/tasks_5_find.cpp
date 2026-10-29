#include "tasks.h"

#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <string>

#include "io_utils.h"

void Task5RemoveZeros() {
  int n = ReadIntInRange("Размер списка: ", 1, 20);
  std::list<int> l;
  for (int i = 0; i < n; ++i) {
    l.push_back(ReadInt("L: "));
  }

  auto first = std::find(l.begin(), l.end(), 0);
  
  if (first == l.end()) {
    std::cout << "Нулей нет. Список не изменен.\n";
  } else {
    auto last_r = std::find(l.rbegin(), l.rend(), 0);
    auto last = std::prev(last_r.base());

    if (last == first) {
      l.erase(first);
    } else {
      l.erase(last);
      l.erase(first);
    }
  }

  std::cout << "Результат: ";
  for (int x : l) {
    std::cout << x << " ";
  }
  std::cout << "\n";
}
