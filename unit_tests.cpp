#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "binary_tree.hpp"

#include <iostream>
#include <string>
#include <functional>

typedef std::string ItemType;

typedef std::function<void(ItemType&)> FunctionType;

TEST_CASE("Test binary tree", "[binary_tree]") {
    BinaryTree<ItemType, FunctionType> T1;
    REQUIRE(T1.isEmpty());


}