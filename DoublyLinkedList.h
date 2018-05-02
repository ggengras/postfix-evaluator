/*
 * Graeme Gengras
 * ENGS65 Project 5
 * DoublyLinkedList.h
 *
 * Implementation of a DoublyLinkedList, 0 indexed,
 *
 *
 * Definition in header file to eliminate possiblity of linking issues
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
        DoublyLinkedList();

        DoublyLinkedList(DoublyLinkedList &old_list); // Copy Constructor NEED TO IMPLEMENT

        ~DoublyLinkedList();

        DoublyLinkedList& operator=(DoublyLinkedList &rhs);

        void insertFront(int new_data);

        void insertBack(int new_data);

        // Removes data at front of list
        void removeFront();

        void removeBack();

        void display();


        bool isEmpty();

        int getData(int index);

        int size();
};

#endif // __DOUBLYLINKEDLIST_H
