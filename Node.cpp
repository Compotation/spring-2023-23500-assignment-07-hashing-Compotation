#include <iostream>
#include <utility>
#include "Node.h"

Node::Node() : next(nullptr) {
}

Node::Node(Person *data, Node *next) {
  this->data = data;
  this->next = next;

}

Node::Node(Person *data) {
  this->data = data;
  this->next = nullptr;
}

void Node::setData(Person *person) {
  this->data = person;
}

void Node::setNext(Node *node) {
  this->next = node;
}

Person *Node::getData() {
  return this->data;
}

Node *Node::getNext() {
  return this->next;
}




