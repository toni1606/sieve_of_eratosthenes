#include "../headers/sieve.h"

Entry::Entry(size_t num) : num(num), marked(false){};
bool Entry::is_marked() { return marked; }
void Entry::mark() { marked = true; }
size_t Entry::get_num() { return num; }

Sieve::Sieve(size_t upper_bound) : nums() {
  nums.reserve(upper_bound);
  for (size_t i = 2; i <= upper_bound; i++) {
    nums.push_back(Entry(i));
  }
}

std::vector<size_t> Sieve::find_primes() {

  auto primes = std::vector<size_t>();
  for (size_t i = 0; i < nums.size(); i++) {
    if (nums[i].is_marked())
      continue;

    size_t item = i + 2;
    for (size_t j = i; j + 2 <= nums.back().get_num(); j += item) {
      nums[j].mark();
    }

    primes.push_back(nums[i].get_num());
  }

  return primes;
}
