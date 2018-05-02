/*
Graeme Gengras
ENGS65 Project 5
Stack.cpp

Implementation of stack using DoublyLinkedList
*/

#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack() {} // Nothing to do here

Stack::Stack(Stack &old_stack) { // Copy constructor
  list = old_stack.list;
}

Stack& Stack::operator=(Stack &rhs) { // Assignment operator
  if (this == &rhs) {
    return *this;
  }

  list = rhs.list;
  return *this;
}

Stack::~Stack() {} // Nothing to do here

void Stack::push(char new_char) {
  list.insertFront(new_char);
}

char Stack::pop() {
  char value = list.getData(0);
  list.removeFront();
  return value;
}

char Stack::top() {
  if(isEmpty()) {
    return 0; // Return null if no char
  }

  return list.getData(0);
}

int Stack::size() {
  return list.size();
}

bool Stack::isEmpty() {
  return list.isEmpty();
}

void Stack::display() {
  list.display();
}
