#include "../headers/sieve.h"

Entry::Entry(size_t num) : num(num), marked(false){};
bool Entry::is_marked() { return marked; }
void Entry::mark() { marked = true; };

Sieve::Sieve(size_t upper_bound) : nums(upper_bound) {
  for (size_t i = 0; i < upper_bound; i++) {
    nums.push_back(Entry(i));
  }
}

std::ostream &operator<<(std::ostream &strm, const Sieve &a) {
  strm << std::string("S");

  return strm;
}
