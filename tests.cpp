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

TEST_CASE("retrieve") {
  auto d1 = new Dictionary();
  CHECK_EQ(d1->get(", Ko"), nullptr);
  auto p3 = new Person("Ko", "", 2);
  d1->insert(p3);
  CHECK_EQ(d1->get(", Ko"), p3);
  auto p1 = new Person("Bryant", "Zheng", 0);
  auto p2 = new Person("Mike", "Zamansky", 1);
  d1->insert(p1);
  CHECK_EQ(d1->get(p1->get_name()), p1);
  d1->insert(p2);
  CHECK_EQ(d1->get(p2->get_name()), p2);
}

TEST_CASE("get all keys") {
  auto d1 = new Dictionary();
  CHECK_EQ(d1->allKeys(), "");
  auto p1 = new Person("Bryant", "Zheng", 0);
  auto p2 = new Person("Mike", "Zamansky", 1);
  auto p3 = new Person("Ko", "", 2);
  d1->insert(p1);
  d1->insert(p2);
  d1->insert(p3);
  CHECK_EQ(d1->allKeys(), "Zamansky, Mike;, Ko;Zheng, Bryant;");
}