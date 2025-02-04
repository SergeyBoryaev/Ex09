// Copyright 2021 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
  MyStack<int> st(5);
  st.push(5);
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test3) {
  MyStack<int> st(1);
  st.push(1);
  EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test4) {
  MyStack<int> st(5);
  st.push(5);
  EXPECT_EQ(false, st.isFull());
}

TEST(MyStackTest, test5) {
  MyStack<int> st(5);
  st.push(5);
  EXPECT_EQ(5, st.pop());
}

TEST(MyStackTest, test6) {
  MyStack<int> st(5);
  st.push(5);
  st.pop();
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test7) {
  MyStack<int> st(5);
  st.push(5);
  st.get();
  EXPECT_EQ(false, st.isEmpty());
}

TEST(MyStackTest, test8) {
  MyStack<int> st(5);
  st.push(5);
  st.push(6);
  EXPECT_EQ(6, st.get());
}

TEST(MyStackTest, test9) {
  MyStack<int> st(5);
  EXPECT_EQ(0, st.get());
}

TEST(MyStackTest, test10) {
  MyStack<int> st(0);
  st.push(5);
  EXPECT_EQ(true, st.isFull());
}
