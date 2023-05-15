#include <cstdint>

void g();

// f1 is our base case for comparison
void f1() {
  // We loop 200 times to avoid loop unrolling on clang.
  for( std::uint8_t i = 0; i < 200; ++i )
    g();
};

void f2() {
  for( std::uint8_t i = 255-200; i != 0; ++i )
    g();
};
