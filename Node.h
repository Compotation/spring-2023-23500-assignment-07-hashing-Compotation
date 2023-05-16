#pragma once
#include "Person.h"

class Node {
private:
  Person *data;
  Node *next;
public:
  Node();

  explicit Node(Person *data);

  Node(Person *data, Node *next);

  void setData(Person *person);

  void setNext(Node *node);

  Person *getData();

  Node *getNext();
};
