#include "city.h"

#include <cstddef>
#include <iostream>
#include <string>

City::City(const std::string& name) : name_(name) {}

void City::AddRoute(const City& to, int cost) {
  routes_.push_back({&to, cost});
}

std::string City::ToString() const {
  std::string result = name_ + ": ";
  if (routes_.empty()) {
    return result + "нет путей";
  }
  for (std::size_t i = 0; i < routes_.size(); ++i) {
    if (i > 0) {
      result += ", ";
    }
    result += routes_[i].to->GetName() + ":" + 
              std::to_string(routes_[i].cost);
  }
  return result;
}

void City::Print() const { std::cout << ToString() << std::endl; }
