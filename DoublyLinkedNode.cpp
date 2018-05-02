/*
 * Graeme Gengras
 * ENGS65 Project 5
 * DoublyLinkedNode.cpp
 *
 * Linked List Node for use with DoublyLinkedList
 * See header file for more information
 */

#include "DoublyLinkedNode.h"

DoublyLinkedNode::DoublyLinkedNode() {
  data = 0; // Set data to null if none is passed during constructions
}

DoublyLinkedNode::DoublyLinkedNode(DoublyLinkedNode &old_node) {
  data = old_node.data;
  next = old_node.next;
  prev = old_node.prev;
}
DoublyLinkedNode::~DoublyLinkedNode() {}

// DoublyLinkedNode& DoublyLinkedNode::operator=(DoublyLinkedNode &rhs) {}

void DoublyLinkedNode::setData(int new_data) {
  data = new_data;
}

int DoublyLinkedNode::getData() {
  return data;
}
