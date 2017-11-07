/**
*	@Vivek
*	@11/6/2017
*	@file Test.h
*/

#ifndef TEST_H
#define TEST_H

#include "LinkedListOfInts.h"
#include <iostream>
#include <vector>

class Test

{
public:

  void runAllTests();
  Test();
  void testIsEmpty();
  void test1AddFront();
  void test1AddBack();
  void testMultAddBack();
  void testMultAddFront();
  void testSearchInList();
  void testSearchNotInList();
  void testRemoveBackOnEmptyList();
  void testRemoveFrontOnEmptyList();
  void testremoveBackonOneNode();
  void testremoveFrontonOndeNode();
  void testremoveFrontOnMultNodeList();
  void testremoveBackOnMultNodeList();
  void testAddBack();
  void testAddFront();
  void testSizeisZero();
  void testSizeAfterOneRemoveBack();
  void testSizeAfterOneRemoveFront();
  void testIsEmptyOnNonEmptyList();
  void testIfAddBackAddsToEmptyList();

};

#endif
