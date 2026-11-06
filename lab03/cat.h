#ifndef LAB3_CAT_H_
#define LAB3_CAT_H_

#include <string>

class Cat {
 public:
  explicit Cat(const std::string& name);
  std::string ToString() const;
  void Print() const;
  void Meow() const;
  void Meow(int times) const;

 private:
  std::string name_;
};

#endif  // LAB3_CAT_H_
