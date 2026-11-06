#ifndef LAB3_NAME_H_
#define LAB3_NAME_H_

#include <string>

class Name {
 public:
  explicit Name(const std::string& first, const std::string& last = "",
                const std::string& patronymic = "");

  const std::string& first() const { return first_; }
  const std::string& last() const { return last_; }
  bool has_last() const { return !last_.empty(); }
  bool has_patronymic() const { return !patronymic_.empty(); }
  void set_last(const std::string& last) { last_ = last; }
  void set_patronymic(const std::string& patronymic) {
    patronymic_ = patronymic;
  }

  std::string ToString() const;
  void Print() const;

 private:
  std::string first_;
  std::string last_;
  std::string patronymic_;
};

#endif  // LAB3_NAME_H_
