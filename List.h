#pragma once

#include <iostream>
#include "Node.h"

class List {
private:
  Node *head;
public:
  List();

  ~List();

  void insert(Person *data);

  void insert(int loc, Person *data); //0 indexed
  int length();

  std::string toString(); // for testing purposes

  bool contains(Person *data); // compares memory address not contents

  void remove(int loc);

  Person *get(int loc);

};
