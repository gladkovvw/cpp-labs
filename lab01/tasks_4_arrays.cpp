#include "tasks.h"

#include <iostream>

#include "io_utils.h"

const int kSize = 5;

// ==================== 4.1 Поиск первого значения ====================
int findFirst(int arr[], int x) {
  for (int i = 0; i < kSize; ++i) {
    if (arr[i] == x) {
      return i;
    }
  }
  return -1;
}

// ==================== 4.3 Максимум по модулю ====================
int maxAbs(int arr[]) {
  int best = arr[0];
  int best_abs;
  if (best < 0) {
    best_abs = -best;
  } else {
    best_abs = best;
  }

  for (int i = 1; i < kSize; ++i) {
    int cur_abs;
    if (arr[i] < 0) {
      cur_abs = -arr[i];
    } else {
      cur_abs = arr[i];
    }

    if (cur_abs > best_abs) {
      best_abs = cur_abs;
      best = arr[i];
    }
  }
  return best;
}

// ==================== 4.5 Добавление массива в массив ====================
int* add(int arr[], int ins[], int pos) {
  static int result[kSize * 2];
  int k = 0;

  for (int i = 0; i < pos; ++i) {
    result[k++] = arr[i];
  }
  for (int i = 0; i < kSize; ++i) {
    result[k++] = ins[i];
  }
  for (int i = pos; i < kSize; ++i) {
    result[k++] = arr[i];
  }
  return result;
}

// ==================== 4.7 Возвратный реверс ====================
int* reverseBack(int arr[]) {
  static int result[kSize];
  for (int i = 0; i < kSize; ++i) {
    result[i] = arr[kSize - 1 - i];
  }
  return result;
}

// ==================== 4.9 Все вхождения ====================
int* findAll(int arr[], int x) {
  static int result[kSize];
  for (int i = 0; i < kSize; ++i) {
    result[i] = -1;
  }
  int k = 0;
  for (int i = 0; i < kSize; ++i) {
    if (arr[i] == x) {
      result[k++] = i;
    }
  }
  return result;
}

// ==================== Вспомогательное ====================

void ReadArray(int arr[], const std::string& name) {
  std::cout << "Заполни массив " << name << " (" << kSize << " элементов):\n";
  for (int i = 0; i < kSize; ++i) {
    arr[i] = ReadInt(name + "[" + std::to_string(i) + "] = ");
  }
}

// ==================== Обертки для меню ====================

void runFindFirst() {
  int arr[kSize];
  ReadArray(arr, "arr");
  int x = ReadInt("Что искать: ");
  std::cout << "Результат: " << findFirst(arr, x) << "\n";
}

void runMaxAbs() {
  int arr[kSize];
  ReadArray(arr, "arr");
  std::cout << "Результат: " << maxAbs(arr) << "\n";
}

void runAdd() {
  int arr[kSize];
  int ins[kSize];
  ReadArray(arr, "arr");
  ReadArray(ins, "ins");
  int pos = ReadIntInRange("Позиция pos (0..5): ", 0, kSize);

  int* result = add(arr, ins, pos);
  std::cout << "Результат: [";
  for (int i = 0; i < kSize * 2; ++i) {
    std::cout << result[i];
    if (i < kSize * 2 - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "]\n";
}

void runReverseBack() {
  int arr[kSize];
  ReadArray(arr, "arr");
  int* result = reverseBack(arr);
  std::cout << "Результат: [";
  for (int i = 0; i < kSize; ++i) {
    std::cout << result[i];
    if (i < kSize - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "]\n";
}

void runFindAll() {
  int arr[kSize];
  ReadArray(arr, "arr");
  int x = ReadInt("Что искать: ");

  int* result = findAll(arr, x);
  int count = 0;
  while (count < kSize && result[count] != -1) {
    ++count;
  }
  std::cout << "Индексы (" << count << " шт.): [";
  for (int i = 0; i < count; ++i) {
    std::cout << result[i];
    if (i < count - 1) {
      std::cout << ", ";
    }
  }
  std::cout << "]\n";
}
