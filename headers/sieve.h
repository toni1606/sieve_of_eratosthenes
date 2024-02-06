#include <string>
#include <vector>

typedef struct {
  size_t num;
  bool marked;
} Entry;

class Sieve {
public:
  Sieve(size_t upper_bound = 0);
  Sieve(Sieve &&) = default;
  Sieve(const Sieve &) = default;
  Sieve &operator=(Sieve &&) = default;
  Sieve &operator=(const Sieve &) = default;
  ~Sieve() = default;

private:
  std::vector<Entry> nums;
};
