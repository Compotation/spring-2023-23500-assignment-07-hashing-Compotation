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

Person *Dictionary::get(std::string name) {
  auto hash = sfold(name);
  if (table[hash] != nullptr) {
    for (int i = 0; i < table[hash]->length(); i++) {
      if (table[hash]->get(i)->get_name() == name) {
        return table[hash]->get(i);
      }
    }
  }
  return nullptr;
}

std::string Dictionary::allKeys() {
  std::string res;
  for (auto &listI: table) {
    if (listI != nullptr) {
      for (int j = 0; j < listI->length(); j++) {
        res += listI->get(j)->get_name() + ";";
      }
    }
  }
  return res;
}
