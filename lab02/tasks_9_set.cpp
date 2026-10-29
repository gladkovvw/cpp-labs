#include "tasks.h"

#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>

#include "io_utils.h"

void Task9Includes() {
  int m0 = ReadIntInRange("Размер V0: ", 1, 10);
  std::vector<int> v0;
  for (int i = 0; i < m0; ++i) {
    v0.push_back(ReadInt("V0: "));
  }

  int n = ReadIntInRange("Сколько векторов Vi: ", 1, 10);
  std::vector<std::vector<int>> vs(n);
  
  for (int i = 0; i < n; ++i) {
    int mi = ReadIntInRange(
        "Размер V" + std::to_string(i + 1) + ": ", m0, 20);
    for (int j = 0; j < mi; ++j) {
      vs[i].push_back(ReadInt("V: "));
    }
  }

  std::multiset<int> ms0(v0.begin(), v0.end());
  int count = 0;
  
  for (const auto& vi : vs) {
    std::multiset<int> msi(vi.begin(), vi.end());
    if (std::includes(msi.begin(), msi.end(), ms0.begin(), ms0.end())) {
      ++count;
    }
  }

  std::cout << "Количество подходящих векторов: " << count << "\n";
}
