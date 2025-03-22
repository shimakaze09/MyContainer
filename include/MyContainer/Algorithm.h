//
// Created by Admin on 5/03/2025.
//

#pragma once

#include <algorithm>
#include <iterator>
#include <set>

namespace My {
template <typename Container>
Container SetUnion(const Container& x, const Container& y);
template <typename Container>
Container SetDifference(const Container& x, const Container& y);
template <typename Container>
Container SetIntersection(const Container& x, const Container& y);
template <typename Container>
Container SetSymmetricDifference(const Container& x, const Container& y);
}  // namespace My

#include "details/Algorithm.inl"
