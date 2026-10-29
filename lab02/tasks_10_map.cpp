#include "tasks.h"

#include <cstdlib>
#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "io_utils.h"

void Task10GroupByLastDigit() {
  int n = ReadIntInRange("Размер вектора: ", 1, 20);
  std::vector<int> v;
  for (int i = 0; i < n; ++i) {
    v.push_back(ReadInt("V: "));
  }

  std::multimap<int, int> m;
  for (auto it = v.begin(); it != v.end(); ++it) {
    int last = std::abs(*it) % 10;
    m.insert(std::make_pair(last, *it));
  }

  std::cout << "Результат (Ключ -> Значение):\n";
  for (auto it = m.begin(); it != m.end(); ++it) {
    std::cout << it->first << " -> " << it->second << "\n";
  }
}
