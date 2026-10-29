#include "tasks.h"

#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

void Task1VectorFromFile() {
  std::string file_name = "input_task1.txt";

  std::ifstream test(file_name);
  if (!test.is_open()) {
    std::ofstream create(file_name);
    create << "10 20 30 40 50\n60 70 80 90 100\n";
    create.close();
  } else {
    test.close();
  }

  std::ifstream input(file_name);
  std::istream_iterator<int> begin(input);
  std::istream_iterator<int> end;

  // Заполнение через итератор и конструктор вектора.
  std::vector<int> v(begin, end);

  std::cout << "Вектор V: ";
  // Вывод через итератор.
  std::ostream_iterator<int> out(std::cout, " ");
  std::copy(v.begin(), v.end(), out);
  std::cout << "\n";
}
