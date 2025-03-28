//
// Created by Admin on 28/03/2025.
//

#include <MyContainer/Span.h>
#include <iostream>

using namespace My;

int main() {
  int arr[5] = {5, 2, 1, 3, 4};
  Span d{arr};
  for (const auto& v : d)
    std::cout << v << std::endl;
}
