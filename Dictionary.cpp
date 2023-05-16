#include "Dictionary.h"
#include <cmath>

Dictionary::Dictionary() {
  for (auto &i: table) {
    delete i;
  }
}

int Dictionary::sfold(std::string s) {
  long sum = 0, mul = 1;
  for (int i = 0; i < s.length(); i++) {
    mul = (i % 4 == 0) ? 1 : mul * 256;
    sum += s[i] * mul;
  }
  return (int) (std::abs(sum) % tableSize);
}

int Dictionary::insert(Person *person) {
  auto hash = sfold(person->get_name());
  if (table[hash] == nullptr) {
    table[hash] = new List();
  }
  table[hash]->insert(person);

  return hash;
}
