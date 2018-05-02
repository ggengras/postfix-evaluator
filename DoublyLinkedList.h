/*
 * Graeme Gengras
 * ENGS65 Project 5
 * DoublyLinkedList.h
 *
 * Implementation of a DoublyLinkedList, 0 indexed
 * only takes ints but could be easily templated
 */

 #ifndef __DOUBLYLINKEDLIST_H
 #define __DOUBLYLINKEDLIST_H

#include <iostream>
#include "DoublyLinkedNode.h"

using namespace std;

class DoublyLinkedList {
    private:
        DoublyLinkedNode* head;
        DoublyLinkedNode* tail;

    public:
        // Constructor (empty node)
        DoublyLinkedList();

        // Copy Constructor
        DoublyLinkedList(DoublyLinkedList &old_list);

        // Destructor
        ~DoublyLinkedList();

        // Assignment operator
        DoublyLinkedList& operator=(DoublyLinkedList &rhs);

        // Insert a node at the front of the list
        void insertFront(int new_data);

        // Insert a node at the back of the list
        void insertBack(int new_data);

        // Removes node at front of list
        void removeFront();

        // Removes node at back of list
        void removeBack();

        // Prints the data in the list to stdout
        void display();

        // Returns true if the list contains no nodes, else false
        bool isEmpty();

        // Returns the int stored at a given list index
        int getData(int index);

        // Returns the length of the list
        int size();
};

#endif // __DOUBLYLINKEDLIST_H
