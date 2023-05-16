#pragma once

#include "List.h"

const int tableSize = 101;

class Dictionary {
private:
  List *table[tableSize];

public:
  Dictionary();

  // Use folding on a string, summed 4 bytes at a time
  int sfold(std::string s);

  // returns hash of inserted object
  int insert(Person *person);
};