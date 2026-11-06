#ifndef LAB3_HUMAN_H_
#define LAB3_HUMAN_H_

#include <string>

#include "name.h"

class Human {
 public:
  Human(const Name& name, int height, const Human* father = nullptr);
  Human(const std::string& name, int height, const Human* father = nullptr);
  void SetFather(const Human* father);
  std::string ToString() const;
  void Print() const;

 private:
  void ApplyFather();
  Name name_;
  int height_;
  const Human* father_;
};

#endif  // LAB3_HUMAN_H_
