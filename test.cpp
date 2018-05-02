/*
Graeme Gengras
ENGS65 Project 5
test.cpp

Program for testing backend functionality
(Nodes, List, Stack)
*/

#include <cassert>
#include <iostream>
#include "Stack.h" // Also pulls in DoublyLinkedList, DoublyLinkedNode

using namespace std;

int main() {
  // Linked node tests (only really need one)
  cout << "* * * Linked Node Test * * *" << endl;
  cout << "Node Test 1: Setting and getting data"
  int i = 5;
  DoublyLinkedNode<int> node(i);
  assert(node.data == 5);
  cout << "Node Test 1 Passed!"

  // Linked list tests
  cout << "* * * Linked List Test * * *" << endl;
  

  // Stack tests


  return 0;
}
