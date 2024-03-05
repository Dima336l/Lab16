#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

#include "DoubleNode.cpp"

template <typename T>

class DoublyLinkedList {
private :
  DoubleNode<T>* head;
  DoubleNode<T>* tail;
  size_t size;
public :
  DoublyLinkedList() : head(nullptr), tail(nullptr), size(0){}
  ~DoublyLinkedList() {
    clear();
  }
  void insertFront (const T& val) {
    DoubleNode<T>* newNode = new DoubleNode<T>(val);
    if (head == nullptr) {
      head = tail = newNode;
    } else {
      newNode->next = head;
      head->prev = newNode;
      head = newNode;
    }
    size++;
  }

  void insertBack (const T& val) {
    DoubleNode<T>* newNode = new DoubleNode<T>(val);
    if (tail == nullptr) {
      head = tail = newNode;
    } else {
      newNode->prev = tail;
      tail->next = newNode;
      tail = newNode;
    }
    size++;
  }

  void removeFront() {
    if (head == nullptr) {
      return;
    }
    DoubleNode<T>* temp = head;
    head = head->next;
    if (head != nullptr) {
      head->prev = nullptr;
    } else {
      tail = nullptr;
    }
    delete temp;
    size--;
  }

  void removeBack() {
    if (tail == nullptr) {
      return;
    }
    DoubleNode<T>* temp = tail;
    tail = tail->prev;
    if (tail != nullptr) {
      tail->next = nullptr;
    } else {
      head = nullptr;
    }
    delete temp;
    size--;
  }

  void clear() {
    while (head != nullptr) {
      DoubleNode<T>* temp = head;
      head = head->next;
      delete temp;
    }
    tail = nullptr;
    size = 0;
  }

  void print() const {
    DoubleNode<T>* currentNode = head;
    for (size_t i = 0; i < size; i++) {
      std::string delimeter = (i != (size - 1)) ? " -> " : "";
      std::cout << currentNode->data << delimeter;
      currentNode = currentNode->next;
    }
    std::cout << std::endl;
  }

  size_t getSize() const {
    return size;
  }
};
  

#endif


