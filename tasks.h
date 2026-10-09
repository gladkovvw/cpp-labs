#ifndef LAB01_TASKS_H_
#define LAB01_TASKS_H_

#include <string>

// ==================== Задание 1 ====================
double fraction(double x);
int charToNum(char x);
bool is2Digits(int x);
bool isInRange(int a, int b, int num);
bool isEqual(int a, int b, int c);

// ==================== Задание 2 ====================
int myAbs(int x);
bool is35(int x);
int max3(int x, int y, int z);
int sum2(int x, int y);
std::string day(int x);

// ==================== Задание 3 ====================
std::string listNums(int x);
std::string chet(int x);
int numLen(long x);
void square(int x);
void rightTriangle(int x);

// ==================== Задание 4 ====================
int findFirst(int arr[], int x);
int maxAbs(int arr[]);
int* add(int arr[], int ins[], int pos);
int* reverseBack(int arr[]);
int* findAll(int arr[], int x);

// ==================== Обертки для меню ====================
void runFraction();
void runCharToNum();
void runIs2Digits();
void runIsInRange();
void runIsEqual();

void runMyAbs();
void runIs35();
void runMax3();
void runSum2();
void runDay();

void runListNums();
void runChet();
void runNumLen();
void runSquare();
void runRightTriangle();

void runFindFirst();
void runMaxAbs();
void runAdd();
void runReverseBack();
void runFindAll();

#endif  // LAB01_TASKS_H_
