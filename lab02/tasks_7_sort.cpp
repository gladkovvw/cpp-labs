#include "tasks.h"

#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

#include "io_utils.h"

void Task7InplaceMerge() {
  int third = ReadIntInRange("Размер одной трети: ", 1, 20);
  int n = third * 3;

  std::vector<int> v;
  std::cout << "Введи " << n << " чисел (каждая треть упорядочена):\n";
  for (int i = 0; i < n; ++i) {
    v.push_back(ReadInt("V: "));
  }

  std::less<int> comp;
  std::inplace_merge(v.begin(), v.begin() + third, v.begin() + 2 * third, 
                     comp);
  std::inplace_merge(v.begin(), v.begin() + 2 * third, v.end(), comp);

  std::cout << "Результат: ";
  for (int x : v) {
    std::cout << x << " ";
  }
  std::cout << "\n";
}
