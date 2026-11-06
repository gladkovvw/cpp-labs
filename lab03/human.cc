#include "human.h"

#include <iostream>
#include <string>

namespace {
// Простая функция для создания отчества.
std::string MakePatronymic(const std::string& father_name) {
  if (father_name == "Лев") {
    return "Львович";
  }
  return father_name + "ович";
}
}  // namespace

Human::Human(const Name& name, int height, const Human* father)
    : name_(name), height_(height), father_(father) {
  ApplyFather();
}

Human::Human(const std::string& name, int height, const Human* father)
    : Human(Name(name), height, father) {}

void Human::SetFather(const Human* father) {
  father_ = father;
  ApplyFather();
}

std::string Human::ToString() const {
  return name_.ToString() + ", рост: " + std::to_string(height_);
}

void Human::Print() const { std::cout << ToString() << std::endl; }

void Human::ApplyFather() {
  if (father_ == nullptr) {
    return;
  }
  if (!name_.has_last() && father_->name_.has_last()) {
    name_.set_last(father_->name_.last());
  }
  if (!name_.has_patronymic()) {
    name_.set_patronymic(MakePatronymic(father_->name_.first()));
  }
}
