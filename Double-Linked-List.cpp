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
  void addFront(Node<T>* node) {
    if (head == nullptr) {
      head = node;
      head->prev = nullptr;
      head->next = nullptr;
    } else {
      node->next = head;
      head = node;
      head->prev = nullptr;
    }
  }

  void addBack (Node<T>* node) {
    if (head == nullptr) {
      head = node;
      head->prev = nullptr;
      return;
    }
    node.next = nullptr;
  }

  void display () {
    std::cout << "Display function called" << std::endl;
    if (head == nullptr) {
      std::cout << "The list is empty." << std::endl;
    } else {
      Node<T>* temp = head;
      while (temp != nullptr) {
	std::cout << temp->data;
	if (temp->next != nullptr) {
	  std::cout << " -> ";
	}
	temp = temp->next;
      }
      std::cout << std::endl;
    }
  }
};


#endif


