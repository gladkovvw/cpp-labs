#include "tasks.h"

#include <deque>
#include <iostream>
#include <iterator>
#include <list>
#include <numeric>
#include <string>

#include "io_utils.h"

void Task8AdjacentDifference() {
  int n = ReadIntInRange("Сколько слов: ", 2, 20);
  std::list<std::string> l;
  std::cout << "Введи слова:\n";
  for (int i = 0; i < n; ++i) {
    std::string s;
    std::cin >> s;
    l.push_back(s);
  }

  std::deque<std::string> d;
  std::adjacent_difference(l.begin(), l.end(), std::back_inserter(d), 
                           [](const std::string& curr, 
                              const std::string& prev) {
                             return std::string(1, prev[0]) + curr.back();
                           });
  
  d.erase(d.begin());

  std::cout << "Результат: ";
  for (const auto& s : d) {
    std::cout << s << " ";
  }
  std::cout << "\n";
}
