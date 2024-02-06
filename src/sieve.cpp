#include "../headers/sieve.h"

Sieve::Sieve(size_t upper_bound) {
  nums = std::vector<Entry>(upper_bound);
}
