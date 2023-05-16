#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "Dictionary.h"

TEST_CASE("insert") {
  auto d1 = new Dictionary();
  auto p1 = new Person("Bryant", "Zheng", 0);
  auto p2 = new Person("Mike", "Zamansky", 1);
  d1->insert(p1);
  CHECK_EQ(d1->get(p1->get_name()), p1);
  d1->insert(p2);
  CHECK_EQ(d1->get(p2->get_name()), p2);
}