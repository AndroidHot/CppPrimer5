#ifndef STR_VEC
#define STR_VEC

#include <initializer_list>
#include <memory>
#include <string>

class StrVec {
 public:
  StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) {}
  StrVec(std::initializer_list<std::string>);
  StrVec(const StrVec &);
  StrVec &operator=(const StrVec &);
  ~StrVec();

  template <typename... Args>
  void emplace_back(Args &&... args);
  void push_back(const std::string &);
  size_t size() const { return first_free - elements; }
  size_t capacity() const { return cap - elements; }
  std::string *begin() const { return elements; }
  std::string *end() const { return first_free; }

  void reserve(size_t new_cap);
  void resize(size_t count);
  void resize(size_t count, const std::string &);

 private:
  std::pair<std::string *, std::string *> alloc_n_copy(const std::string *,
                                                       const std::string *);
  void free();
  void chk_n_alloc() {
    if (size() == capacity()) reallocate();
  }
  void reallocate();
  void alloc_n_move(size_t new_cap);
  void range_initialize(const std::string *, const std::string *);

 private:
  std::string *elements;
  std::string *first_free;
  std::string *cap;
  std::allocator<std::string> alloc;
};

template <typename... Args>
inline void StrVec::emplace_back(Args &&... args) {
  chk_n_alloc();
  alloc.construct(first_free++, std::forward<Args>(args)...);
}

#endif
