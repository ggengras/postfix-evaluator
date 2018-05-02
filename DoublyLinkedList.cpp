/*
 * Graeme Gengras
 * ENGS65 Project 5
 * DoublyLinkedList.cpp
 *
 * Implementation of a DoublyLinkedList, 0 indexed
 * only takes ints but could be easily templated
 * See header file for more information
 */

#include <iostream>
#include "DoublyLinkedList.h"
#include "DoublyLinkedNode.h"
using namespace std;

DoublyLinkedList::DoublyLinkedList() {
    head = nullptr; // Initialize to NULL
    tail = nullptr;
}

DoublyLinkedList::DoublyLinkedList(DoublyLinkedList &old_list) {}

DoublyLinkedList::~DoublyLinkedList() {
    DoublyLinkedNode* iterator = head;
    while(iterator != nullptr) {
        DoublyLinkedNode* next = iterator->next;
        delete iterator;
        iterator = next;
    }
}

// NEEDS TO BE FINISHED
DoublyLinkedList& DoublyLinkedList::operator=(DoublyLinkedList &rhs) {
    if (this == &rhs) { // Check for self­-assignment
        return *this;
    }
}

void DoublyLinkedList::insertFront(int new_data) {
    DoublyLinkedNode* iterator = new DoublyLinkedNode;
    iterator->data = new_data;
    iterator->prev = nullptr;

    if (head == nullptr) { // Case where list is empty
        head = iterator;
        tail = iterator;
        iterator = nullptr;
    }

    else {
        head->prev = iterator;
        iterator->next = head;
        head = iterator;
    }
}

void DoublyLinkedList::insertBack(int new_data) {
    DoublyLinkedNode* iterator = new DoublyLinkedNode;
    iterator->data = new_data;
    iterator->next = nullptr; // Next is null because we are adding at the end

    if (head == nullptr) { // Case where list is empty
        head = iterator;
        tail = iterator;
        iterator = nullptr;
    }

    else {
        tail->next = iterator;
        iterator->prev = tail;
        tail = iterator;
    }
}

void DoublyLinkedList::removeFront() {
    if (size() == 0) {
        return; // Can't remove if there aren't any nodes
    }

    if (size() == 1) { // Need special case for one node left
        DoublyLinkedNode* iterator = head;
        delete iterator;
        head = nullptr;
        tail = nullptr;
    }

    else { // Normal deletion case
        DoublyLinkedNode* iterator = head;
        head = head->next;
        head->prev = nullptr;
        delete iterator;
    }
}

void DoublyLinkedList::removeBack() {
    if (size() == 0) {
        return; // Can't remove if there aren't any nodes
    }
    if (size() == 1) { // Need special case for one node left
        DoublyLinkedNode* iterator = head;
        delete iterator;
        head = nullptr;
        tail = nullptr;
    }

    else {
        DoublyLinkedNode*iterator = tail;
        tail = tail->prev;
        tail->next = nullptr;
        delete iterator;
    }

    DoublyLinkedNode* iterator = head;
    while(iterator != nullptr) {
        cout << iterator->data << ' ' << endl;
        iterator = iterator->next;
    }
}

bool DoublyLinkedList::isEmpty() {
    if (head == 0) {
        return true; // list is empty if head and tail are NULL
    }

    return false;
}

void DoublyLinkedList::display() { // Prints data
    DoublyLinkedNode* iterator = head;
    while(iterator != nullptr) {
        cout << iterator->data << ' ' << endl;
        iterator = iterator->next;
    }
}

int DoublyLinkedList::getData(int index) {
    if (index > size() - 1) {
        cerr << "List index out of range" << endl; // Case of incorrect index
        exit(-1);
    }

    DoublyLinkedNode* iterator = head;
    for(int i = 0; i < index; i++) {
        iterator = iterator->next;
    }
    return iterator->data;
}

int DoublyLinkedList::size() {
    DoublyLinkedNode* iterator = this->head;
    int size = 0;

    while(iterator != nullptr) {
        size += 1;
        iterator = iterator->next;
    }
    return size;
}
