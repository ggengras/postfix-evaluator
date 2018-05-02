/*
 * Graeme Gengras
 * ENGS65 Project 5
 * Stack.h
 *
 * Outline of a stack using DoublyLinkedList
 * This happens to be an int implementation,
 * but could be easily templated
 */

#include "DoublyLinkedList.h"

class Stack {
  private:
    DoublyLinkedList list;

  public:
    // Constructor
    Stack();

    // Copy Constructor
    Stack(Stack &old_stack);

    // Assignment operator
    Stack& operator=(Stack &rhs);

    // Destructor
    ~Stack();

    // Adds to top of stack
    void push(char new_char);

    // Removes from top of stack and returns value
    char pop();

    // Returns top value of stack
    char top();

    // Returns size of stack
    int size();

    // Returns whether stack is empty
    bool isEmpty();

    // Prints values in the stack to stdout
    void display();
};
