#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

#include "Node.cpp"

template <typename T>

class DoubleLinkedList {
private:
  Node<T>* head;
public: 
  DoubleLinkedList() {
    head = nullptr;
  }
  void addFront(Node* node) {
    if (head == nullptr) {
      head = node;
      head.prev = nullptr;
    }
  }
};

#endif


