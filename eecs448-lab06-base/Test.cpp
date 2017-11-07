/**
*	@Vivek
*	@11/6/2017
*	@file Test.cpp
*/
#include "Test.h"

Test::Test()
{


}
void Test::runAllTests()
{
  testIsEmpty();
  test1AddFront();
  test1AddBack();
  testMultAddBack();
  testMultAddFront();
  testSearchInList();
  testSearchNotInList();
  testRemoveBackOnEmptyList();
  testRemoveFrontOnEmptyList();
  testremoveBackonOneNode();
  testremoveFrontonOndeNode();
  testremoveFrontOnMultNodeList();
  testremoveBackOnMultNodeList();
  testAddBack();
  testAddFront();
  testSizeisZero();
  testSizeAfterOneRemoveBack();
  testSizeAfterOneRemoveFront();
  testIsEmptyOnNonEmptyList();
  testIfAddBackAddsToEmptyList();

}

void Test::testIsEmpty()
{
  LinkedListOfInts testableList;
  std::cout<<"Test 1: isEmpty Returns true on empty List: ";
  if(testableList.isEmpty())
  {
    std::cout<<"Passed\n";
  }
  else
  {
    std::cout<<"Failed\n";
  }
}

void Test::test1AddFront()
{
  LinkedListOfInts testableList;
  std::cout<<"Test 2: size returns correct value after 1 addFront: ";
  testableList.addFront(4);
  if(testableList.size() == 1)
  {
    std::cout<<"Passed\n";
  }
  else
  {
    std::cout<<"Failed\n";
  }
}

void Test::test1AddBack()
{
  LinkedListOfInts testableList;
  std::cout<<"Test 3: size returns correct value after 1 addBack: ";
  testableList.addBack(4);
  if(testableList.size() == 1)
  {
    std::cout<<"Passed\n";
  }
  else
  {
    std::cout<<"Failed\n";
  }
}

void Test::testMultAddBack()
{
  LinkedListOfInts testableList;
  std::cout<<"Test 4: size returns correct value after Multiple addBack: ";
  testableList.addBack(4);
  testableList.addBack(3);
  testableList.addBack(5);
  if(testableList.size() == 3)
  {
    std::cout<<"Passed\n";
  }
  else
  {
    std::cout<<"Failed\n";
  }

}

void Test::testMultAddFront()
{
  LinkedListOfInts testableList;
  std::cout<<"Test 5: size returns correct value after Multiple addFront: ";
  testableList.addFront(4);
  testableList.addFront(3);
  testableList.addFront(5);
  if(testableList.size() == 3)
  {
    std::cout<<"Passed\n";
  }
  else
  {
    std::cout<<"Failed\n";
  }
}

void Test::testSearchInList()
{
  LinkedListOfInts testableList;
  std::cout<<"Test 6: List returns true when searching for int in list: ";
  testableList.addFront(4);
  testableList.addFront(5);
  testableList.addFront(6);
  if(testableList.search(4))
  {
    std::cout<<"Passed\n";
  }
  else
  {
    std::cout<<"Failed\n";
  }
}

void Test::testSearchNotInList()
{
  LinkedListOfInts testableList;
  std::cout<<"Test 7: List returns false when searching for int not in list: ";
  testableList.addFront(4);
  testableList.addFront(5);
  testableList.addFront(6);
  if(testableList.search(7))
  {
    std::cout<<"Failed\n";
  }
  else
  {
    std::cout<<"Passed\n";
  }
}

void Test::testRemoveBackOnEmptyList()
{
  LinkedListOfInts testableList;
  std::cout<<"Test 8: List returns false for removeBack on empty List: ";
  if(!(testableList.removeBack()))
  {
    std::cout<<"Passed\n";
  }
  else
  {
    std::cout<<"Failed\n";
  }
}

void Test::testRemoveFrontOnEmptyList()
{
  LinkedListOfInts testableList;
  std::cout<<"Test 9: List returns false for removeFront on empty List: ";
  if(!(testableList.removeFront()))
  {
    std::cout<<"Passed\n";
  }
  else
  {
    std::cout<<"Failed\n";
  }
}

void Test::testremoveBackonOneNode()
{
  LinkedListOfInts testableList;
  std::cout<<"Test 10: List is empty after removeFront in a one node list: ";
  testableList.addBack(5);
  testableList.removeBack();
  if(testableList.isEmpty())
  {
    std::cout<<"Passed\n";
  }
  else{
    std::cout<<"Failed\n";
  }

}

void Test::testremoveFrontonOndeNode()
{
  LinkedListOfInts testableList;
  std::cout<<"Test 11: List is empty after removeFront in a one node list: ";
  testableList.addFront(5);
  testableList.removeFront();
  if(testableList.isEmpty())
  {
    std::cout<<"Passed\n";
  }
  else{
    std::cout<<"Failed\n";
  }
}

void Test::testremoveFrontOnMultNodeList()
{
  LinkedListOfInts testableList;
  std::cout<<"Test 12: removeFront deletes front node in List of multiple nodes: ";
  testableList.addFront(10);
  testableList.addFront(5);
  testableList.removeFront();
  if(testableList.toVector().front() == 10)
  {
    std::cout<<"Passed\n";
  }
  else
  {
    std::cout<<"Failed\n";
  }
}

void Test::testremoveBackOnMultNodeList()
{

  LinkedListOfInts testableList;
  std::cout<<"Test 13: removeBack deletes Back node in List of multiple nodes: ";
  testableList.addFront(10);
  testableList.addBack(5);
  testableList.addBack(11);
  testableList.removeBack();
  if(testableList.toVector().front() == 5)
  {
    std::cout<<"Passed\n";
  }
  else
  {
    std::cout<<"Failed\n";
  }
}

void Test::testAddBack()
{
  LinkedListOfInts testableList;
  std::cout<<"Test 14: Addback succesfully adds node to the end of the list: ";
  testableList.addBack(5);
  testableList.addBack(4);
  testableList.addBack(3);
  if(testableList.toVector().back() == 3)
  {
    std::cout<<"Passed\n";
  }
  else
  {
    std::cout<<"Failed\n";
  }
}

void Test::testAddFront()
{
  LinkedListOfInts testableList;
  std::cout<<"Test 15: AddFront Succesfully adds node to the front of the list: ";
  testableList.addFront(10);
  testableList.addFront(11);
  testableList.addFront(15);
  if(testableList.toVector().front() == 15)
  {
    std::cout<<"Passed\n";
  }
  else
  {
    std::cout<<"Failed\n";
  }
}

void Test::testSizeisZero()
{
  LinkedListOfInts testableList;
  std::cout<<"Test 16: Test that the size is zero if the list is empty: ";
  if(testableList.size() == 0)
  {
    std::cout<<"Passed\n";
  }
  else
  {
    std::cout<<"Failed\n";
  }
}

void Test::testSizeAfterOneRemoveBack()
{
  LinkedListOfInts testableList;
  std::cout<<"Test 17: Test that the size is correct after one removeBack: ";
  testableList.addFront(3);
  testableList.addFront(4);
  testableList.addFront(2);
  testableList.removeBack();
  if(testableList.size() == 2)
  {
    std::cout<<"Passed\n";
  }
  else
  {
    std::cout<<"Failed\n";
  }

}
void Test::testSizeAfterOneRemoveFront()
{
  LinkedListOfInts testableList;
  std::cout<<"Test 18: Test that the size is correct after one removeFront: ";
  testableList.addFront(3);
  testableList.addFront(4);
  testableList.addFront(2);
  testableList.removeFront();
  if(testableList.size() == 2)
  {
    std::cout<<"Passed\n";
  }
  else
  {
    std::cout<<"Failed\n";
  }
}

void Test::testIsEmptyOnNonEmptyList()
{
LinkedListOfInts testableList;
std::cout<<"Test 19: Test that isEmpty returns false on nonEmpty List: ";
testableList.addFront(5);
if(testableList.isEmpty())
{
  std::cout<<"Failed\n";
}
else
{
  std::cout<<"Passed\n";
}
}

void Test::testIfAddBackAddsToEmptyList()
{
LinkedListOfInts testableList;
std::cout<<"Test 20: Test if AddBack adds a node to an empty List: ";
testableList.addBack(3);
if(testableList.toVector().front() == 3)
{
  std::cout<<"Passed\n";
}
else{
  std::cout<<"Failed\n";
}


}
