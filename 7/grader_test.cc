#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write some test cases for each function.
//-----------------------------------------------------------------------------
TEST(CheckValidExpression, Empty) {
  EXPECT_TRUE(CheckValidExpression(""));
}

TEST(CheckValidExpression, Test1) {
  EXPECT_TRUE(CheckValidExpression("()"));
  EXPECT_TRUE(CheckValidExpression("()[]"));
  EXPECT_TRUE(CheckValidExpression("([])"));
  EXPECT_TRUE(CheckValidExpression("({})"));
  EXPECT_TRUE(CheckValidExpression("({(asdf)}).(123).[asdf]+{(asdfasdf)}"));
  EXPECT_TRUE(CheckValidExpression("{2k++[5--*j]}"));

  EXPECT_FALSE(CheckValidExpression("("));
  EXPECT_FALSE(CheckValidExpression("(]"));
  EXPECT_FALSE(CheckValidExpression("({)}"));
}

TEST(CheckValidExpression, SingleOpen) {
  EXPECT_FALSE(CheckValidExpression("("));
  EXPECT_FALSE(CheckValidExpression("{"));
  EXPECT_FALSE(CheckValidExpression("["));
  EXPECT_FALSE(CheckValidExpression("a(a"));
  EXPECT_FALSE(CheckValidExpression("a{a"));
  EXPECT_FALSE(CheckValidExpression("a[a"));
}

TEST(CheckValidExpression, SingleClosing) {
  EXPECT_FALSE(CheckValidExpression("}"));
  EXPECT_FALSE(CheckValidExpression("]"));
  EXPECT_FALSE(CheckValidExpression(")"));

  EXPECT_FALSE(CheckValidExpression("a}b"));
  EXPECT_FALSE(CheckValidExpression("1]123"));
  EXPECT_FALSE(CheckValidExpression("1)2"));
}

TEST(CheckValidExpression, MultipleClosing) {
  EXPECT_FALSE(CheckValidExpression("}}}}"));
  EXPECT_FALSE(CheckValidExpression("]]"));
  EXPECT_FALSE(CheckValidExpression("))"));
}