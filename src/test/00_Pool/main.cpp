//
// Created by Admin on 4/03/2025.
//

#include <MyContainer/Pool.h>

#include <iostream>

using namespace std;
using namespace My;

class alignas(16) C {
 public:
  C(size_t n) : n{n} {}

  ~C() { cout << this << ": " << n << endl; }

 private:
  size_t n;
};

int main() {
  Pool<C> pool;
  sizeof(C);
  for (size_t i = 0; i < 100; i++)
    pool.Request(i);
  cout << "move" << endl;
  Pool<C> d(move(pool));
  cout << "pool Clear" << endl;
  pool.Clear();
  cout << "d Clear" << endl;
  d.Clear();

  return 0;
}
