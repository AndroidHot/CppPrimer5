#include "str_vec.h"

#include <utility>

StrVec::StrVec(const StrVec &strVec) {
  range_initialize(strVec.begin(), strVec.end());
}

StrVec &StrVec::operator=(const StrVec &strVec) {
  auto new_data = alloc_n_copy(strVec.begin(), strVec.end());
  free();
  elements = new_data.first;
  first_free = cap = new_data.second;
  return *this;
}

StrVec::StrVec(std::initializer_list<std::string> il) {
  range_initialize(il.begin(), il.end());
}

StrVec::~StrVec() { free(); }

void StrVec::push_back(const std::string &str) {
  chk_n_alloc();
  alloc.construct(first_free++, str);
}

void StrVec::reserve(size_t new_cap) {
  if (new_cap <= capacity()) return;
  alloc_n_move(new_cap);
}

void StrVec::resize(size_t count) { resize(count, std::string()); }

void StrVec::resize(size_t count, const std::string &str) {
  if (count < size()) {
    while (first_free != elements + count) {
      alloc.destroy(--first_free);
    }
  } else if (count > size()) {
    if (count > capacity()) {
      reserve(count * 2);
    }
    for (size_t i = size(); i != count; ++i) alloc.construct(first_free++, str);
  }
}

std::pair<std::string *, std::string *> StrVec::alloc_n_copy(
    const std::string *b, const std::string *e) {
  auto data = alloc.allocate(e - b);
  return {data, std::uninitialized_copy(b, e, data)};
}

void StrVec::free() {
  if (elements) {
    for (auto iter = first_free; iter != elements;) alloc.destroy(--iter);
    alloc.deallocate(elements, cap - elements);
  }
}

void StrVec::range_initialize(const std::string *first,
                              const std::string *last) {
  auto new_data = alloc_n_copy(first, last);
  elements = new_data.first;
  first_free = cap = new_data.second;
}

void StrVec::alloc_n_move(size_t new_cap) {
  auto new_data = alloc.allocate(new_cap);
  auto desc = new_data;
  auto elem = elements;
  for (size_t i = 0; i != size(); ++i)
    alloc.construct(desc++, std::move(*elem++));
  free();
  elements = new_data;
  first_free = desc;
  cap = elements + new_cap;
}

void StrVec::reallocate() {
  size_t new_capacity = size() ? 2 * size() : 1;
  alloc_n_move(new_capacity);
}
