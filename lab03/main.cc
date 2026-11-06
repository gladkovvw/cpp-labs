#include <iostream>

#include "cat.h"
#include "city.h"
#include "human.h"
#include "input.h"
#include "name.h"

namespace {

void RunTask1() {
  std::cout << "\n=== Задание 1.3: Имена ===\n";
  Name("Клеопатра").Print();
  Name("Александр", "Пушкин", "Сергеевич").Print();
  Name("Владимир", "Маяковский").Print();
}

void RunTask2() {
  std::cout << "\n=== Задание 2.2: Человек с именем ===\n";
  Human(Name("Клеопатра"), 152).Print();
  Human(Name("Александр", "Пушкин", "Сергеевич"), 167).Print();
  Human(Name("Владимир", "Маяковский"), 189).Print();

  std::cout << "\n=== Задание 2.3: Человек с родителем ===\n";
  Human ivan(Name("Иван", "Чудов"), 180);
  Human petr(Name("Петр", "Чудов"), 178);
  Human boris(Name("Борис"), 175);
  petr.SetFather(&ivan);
  boris.SetFather(&petr);
  ivan.Print();
  petr.Print();
  boris.Print();
}

void RunTask3() {
  std::cout << "\n=== Задание 3.3: Города ===\n";
  City a("A"), b("B"), c("C"), d("D"), e("E"), f("F");
  a.AddRoute(f, 1);
  a.AddRoute(b, 5);
  b.AddRoute(a, 5);
  b.AddRoute(c, 3);
  f.AddRoute(b, 1);
  f.AddRoute(e, 2);
  e.AddRoute(f, 2);
  e.AddRoute(d, 2);
  d.AddRoute(c, 4);
  d.AddRoute(e, 2);
  d.AddRoute(a, 6);
  c.AddRoute(b, 3);
  c.AddRoute(d, 4);

  for (const City* city : {&a, &b, &c, &d, &e, &f}) {
    city->Print();
  }
}

void RunTask4() {
  std::cout << "\n=== Задание 4.5: Создаем Имена ===\n";
  Name("Клеопатра").Print();
  Name("Александр", "Пушкин", "Сергеевич").Print();
  Name("Владимир", "Маяковский").Print();
  Name("Христофор", "Бонифатьевич").Print();

  std::cout << "\n=== Задание 4.6: Создаем Человека ===\n";
  Human lev("Лев", 170);
  Human sergey(Name("Сергей", "Пушкин"), 168, &lev);
  Human alexander("Александр", 167, &sergey);
  lev.Print();
  sergey.Print();
  alexander.Print();
}

void RunTask5() {
  std::cout << "\n=== Задание 5.2: Кот мяукает ===\n";
  Cat barsik("Барсик");
  barsik.Print();
  barsik.Meow();
  barsik.Meow(3);
  int times = ReadInt("Сколько раз мяукнуть ещё (1-20): ", 1, 20);
  barsik.Meow(times);
}

}  // namespace

int main() {
  while (true) {
    std::cout << "\n====== Лабораторная работа №3 ======\n"
              << "1 - Задание 1 (1.3 Имена)\n"
              << "2 - Задание 2 (2.2, 2.3 Человек)\n"
              << "3 - Задание 3 (3.3 Города)\n"
              << "4 - Задание 4 (4.5 Имена, 4.6 Человек)\n"
              << "5 - Задание 5 (5.2 Кот)\n"
              << "6 - Все задания подряд\n"
              << "0 - Выход\n";
    switch (ReadInt("Выбор: ", 0, 6)) {
      case 1:
        RunTask1();
        break;
      case 2:
        RunTask2();
        break;
      case 3:
        RunTask3();
        break;
      case 4:
        RunTask4();
        break;
      case 5:
        RunTask5();
        break;
      case 6:
        RunTask1();
        RunTask2();
        RunTask3();
        RunTask4();
        RunTask5();
        break;
      case 0:
        return 0;
    }
  }
}
