/*
Graeme Gengras
ENGS65 Project 5
Stack.h

Outline of a stack using DoublyLinkedList
This happens to be an int implementation,
but it is trivial to change the type and
could also easily be templated
*/

#include "DoublyLinkedList.h"

class Stack {
  private:
    DoublyLinkedList list; // char list for postfix evaluation

  public:
    Stack();
    Stack(Stack &old_stack);
    Stack& operator=(Stack &rhs);
    ~Stack();

    void push(char new_char); // Adds to top of stack
    char pop(); // Removes from top of stack and returns value
    char top(); // Returns top value of stack
    int size(); // Returns size of stack
    bool isEmpty(); // Returns whether stack is empty
    void display(); // Displays values in the stack
};
