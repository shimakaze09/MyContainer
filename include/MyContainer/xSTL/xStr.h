//
// Created by Admin on 4/03/2025.
//

// ref: https://github.com/star-e/StarEngine/blob/master/Star/SString.h

#pragma once

#include <string>

namespace My {
inline std::string str(std::string_view sv) {
  return std::string(sv);
}

inline std::string_view sv(const std::string& str) noexcept {
  return std::string_view(str);
}

inline std::string_view sv(const std::pmr::string& str) noexcept {
  return std::string_view(str);
}
}  // namespace My
