#include "name.h"

#include <iostream>

Name::Name(const std::string& first, const std::string& last,
           const std::string& patronymic)
    : first_(first), last_(last), patronymic_(patronymic) {}

std::string Name::ToString() const {
  std::string result = "";
  if (!last_.empty()) {
    result += last_ + " ";
  }
  result += first_;
  if (!patronymic_.empty()) {
    result += " " + patronymic_;
  }
  return result;
}

void Name::Print() const { std::cout << ToString() << std::endl; }
