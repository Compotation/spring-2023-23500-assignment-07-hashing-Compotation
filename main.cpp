#include <iostream>
#include "Node.h"
#include "List.h"
#include "Dictionary.h"

int main() {
  auto p1 = new Person("Bryant", "Zheng", 0);
  auto p3 = new Person("Mike", "Zamansky", 1);
  auto p2 = new Person(*p1);
  auto d1 = new Dictionary();
  std::cout << d1->allKeys() << "\n";
  std::cout << d1->sfold("cat") << "\n";
  std::cout << d1->sfold("mad") << "\n";
  std::cout << d1->insert(p1) << "\n";
  std::cout << d1->insert(p3) << "\n";
//  std::cout << d1->insert(p2) << "\n";
  std::cout << d1->get("Zheng, Bryant")->get_id() << "\n";
  std::cout << d1->allKeys() << "\n";

  return 0;
}