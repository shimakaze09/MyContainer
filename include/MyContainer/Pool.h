//
// Created by Admin on 4/03/2025.
//

#pragma once

#include <array>
#include <cstdlib>
#include <vector>

namespace My {
template <typename T>
class Pool {
 public:
  Pool() = default;
  Pool(Pool&& pool) noexcept;
  Pool& operator=(Pool&& pool) noexcept;
  ~Pool();

  template <typename... Args>
  T* Request(Args&&... args);
  void Recycle(T* object);
  void Reserve(size_t n);
  // no ~T()
  void FastClear();
  void Clear();

 private:
  void NewBlock();

 private:
  static const size_t BLOCK_SIZE = 1024;
  std::vector<T*> blocks;
  std::vector<T*> freeAdresses;
};
}  // namespace My

#include "detail/Pool.inl"
