/*
 * Graeme Gengras
 * ENGS65 Project 5
 * DoublyLinkedNode.h
 *
 * Linked List Node for use with DoublyLinkedList
 */

#ifndef __DOUBLYLINKEDNODE_H
#define __DOUBLYLINKEDNODE_H

class DoublyLinkedNode {
    friend class DoublyLinkedList;
    private:
        int data;
        DoublyLinkedNode* next;
        DoublyLinkedNode* prev;

    public:
        // Constructor (empty node)
        DoublyLinkedNode();

        // Copy constructor
        DoublyLinkedNode(DoublyLinkedNode &old_node);

        // Destructor
        ~DoublyLinkedNode();

        // Assignment operator
        DoublyLinkedNode& operator=(DoublyLinkedNode &rhs);

        // Returns data contained by the node
        int getData();

        // Sets data in the node
        void setData(int new_data);
};

#endif // __DOUBLYLINKEDNODE_H
