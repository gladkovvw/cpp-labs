#include "tasks.h"

#include <iostream>
#include <iterator>
#include <list>
#include <string>

#include "io_utils.h"

void Task3SpliceLists() {
  int n1 = ReadIntInRange("Размер L1: ", 1, 20);
  std::list<int> l1;
  for (int i = 0; i < n1; ++i) {
    l1.push_back(ReadInt("L1: "));
  }

  int n2 = ReadIntInRange("Размер L2 (четный): ", 2, 20);
  if (n2 % 2 != 0) {
    std::cout << "N2 должно быть четным!\n";
    return;
  }
  
  std::list<int> l2;
  for (int i = 0; i < n2; ++i) {
    l2.push_back(ReadInt("L2: "));
  }

  auto mid = l2.begin();
  std::advance(mid, n2 / 2);

  l1.splice(l1.begin(), l2, l2.begin(), mid);

  std::cout << "L1: ";
  for (int x : l1) {
    std::cout << x << " ";
  }
  std::cout << "\nL2: ";
  for (int x : l2) {
    std::cout << x << " ";
  }
  std::cout << "\n";
}
