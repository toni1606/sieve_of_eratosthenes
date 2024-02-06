#include <string>
#include <vector>

class Entry {
public:
  Entry(size_t num = 0);
  Entry(Entry &&) = default;
  Entry(const Entry &) = default;
  Entry &operator=(Entry &&) = default;
  Entry &operator=(const Entry &) = default;
  ~Entry() = default;

  bool is_marked();
  void mark();

private:
  size_t num;
  bool marked;
};

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
