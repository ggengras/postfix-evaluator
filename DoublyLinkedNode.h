// Node for DoublyLinkedList

#ifndef __DOUBLYLINKEDNODE_H
#define __DOUBLYLINKEDNODE_H

class DoublyLinkedNode {
    friend class DoublyLinkedList;
    private:
        int data;
        DoublyLinkedNode* next;
        DoublyLinkedNode* prev;

    public:
        DoublyLinkedNode(); // Creates an empty node
        DoublyLinkedNode(DoublyLinkedNode &old_node);
        ~DoublyLinkedNode();
        DoublyLinkedNode& operator=(DoublyLinkedNode &rhs);

        int getData(); // Returns data contained by the node
        void setData(int new_data); // Sets the data in the node
};

#endif // __DOUBLYLINKEDNODE_H
