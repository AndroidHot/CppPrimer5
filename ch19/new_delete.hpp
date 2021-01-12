#pragma once

#include <iostream>

void *operator new(size_t size) {
  if (void *mem = malloc(size)) {
    printf("operator new, size: %zu\n", size);
    return mem;
  }
  throw std::bad_alloc();
}

void operator delete(void *mem) noexcept {
  printf("operator delete\n");
  free(mem);
}
