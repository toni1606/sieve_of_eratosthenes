#include "../headers/sieve.h"
#include <iostream>
#include <string>

int main(void) {
  Sieve s = Sieve(100);

  std::cout << '\n';
  for (auto i : s.find_primes())
    std::cout << i << " ";
  std::cout << std::endl;

  return 0;
}
