#include <iostream>
#include <memory>
#include <string>

template <typename T, typename... Args>
auto make_shared(Args&&... args) -> std::shared_ptr<T> {
  return std::shared_ptr<T>(new T(std::forward<Args>(args)...));
}

int main() {
  auto s = make_shared<std::string>(10, 'c');
  printf("%s\n", s->c_str());
  return 0;
}
