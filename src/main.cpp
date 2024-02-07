#include "../headers/sieve.h"
#include <iostream>
#include <string>

int main(void) {
  Sieve s = Sieve(100'000'000);

  std::cout << s.find_primes().size() << std::endl;

  return 0;
}
