#ifndef LAB3_CITY_H_
#define LAB3_CITY_H_

#include <string>
#include <vector>

class City;

struct Route {
  const City* to;
  int cost;
};

class City {
 public:
  explicit City(const std::string& name);
  void AddRoute(const City& to, int cost);
  std::string GetName() const { return name_; }
  std::string ToString() const;
  void Print() const;

 private:
  std::string name_;
  std::vector<Route> routes_;
};

#endif  // LAB3_CITY_H_
