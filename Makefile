# Graeme Gengras, April 2018
#
# Makefile for the 'crawler' program
#   Builds, compiles and tests the program

# Compiler and flags
CC=g++
CFLAGS=-Wall -pedantic -ggdb

all: postfix Stack.o DoublyLinkedList.o DoublyLinkedNode.o

postfix: postfix.cpp Stack.o DoublyLinkedList.o DoublyLinkedNode.o
	$(CC) $(CFLAGS) -o $@ $< Stack.o DoublyLinkedList.o DoublyLinkedNode.o

Stack.o: Stack.cpp Stack.h DoublyLinkedList.o
	$(CC) $(CFLAGS) -c Stack.cpp

DoublyLinkedList.o: DoublyLinkedList.cpp DoublyLinkedList.h DoublyLinkedNode.o
	$(CC) $(CFLAGS) -c DoublyLinkedList.cpp

DoublyLinkedNode.o: DoublyLinkedNode.cpp DoublyLinkedNode.h
	$(CC) $(CFLAGS) -c DoublyLinkedNode.cpp

.PHONY: clean

clean:
	rm -f *~ *.o
	rm -rf *.dSYM
	rm -f postfix
	rm -rf
