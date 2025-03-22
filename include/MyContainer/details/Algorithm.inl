//
// Created by Admin on 5/03/2025.
//

#pragma once

namespace My {
template <typename Container>
Container SetUnion(const Container& x, const Container& y) {
  Container rst;
  std::set_union(x.begin(), x.end(), y.begin(), y.end(),
                 std::insert_iterator<Container>(rst, rst.begin()));
  return rst;
}

template <typename Container>
Container SetDifference(const Container& x, const Container& y) {
  Container rst;
  std::set_difference(x.begin(), x.end(), y.begin(), y.end(),
                      std::insert_iterator<Container>(rst, rst.begin()));
  return rst;
}

template <typename Container>
Container SetIntersection(const Container& x, const Container& y) {
  Container rst;
  std::set_intersection(x.begin(), x.end(), y.begin(), y.end(),
                        std::insert_iterator<Container>(rst, rst.begin()));
  return rst;
}

template <typename Container>
Container SetSymmetricDifference(const Container& x, const Container& y) {
  Container rst;
  std::set_symmetric_difference(
      x.begin(), x.end(), y.begin(), y.end(),
      std::insert_iterator<Container>(rst, rst.begin()));
  return rst;
}
}  // namespace My
