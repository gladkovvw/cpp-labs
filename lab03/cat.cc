#include "cat.h"

#include <iostream>
#include <string>

Cat::Cat(const std::string& name) : name_(name) {}

std::string Cat::ToString() const { return "кот: " + name_; }

void Cat::Print() const { std::cout << ToString() << std::endl; }

void Cat::Meow() const { std::cout << name_ << ": мяу!" << std::endl; }

void Cat::Meow(int times) const {
  std::cout << name_ << ": ";
  for (int i = 0; i < times; ++i) {
    std::cout << (i > 0 ? "-" : "") << "мяу";
  }
  std::cout << "!" << std::endl;
}
