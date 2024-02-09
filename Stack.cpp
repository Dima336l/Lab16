#ifndef STACK_H
#define STACK_H

#include "Node.cpp"
#include <bits/stdc++.h>

template <typename T>

class Stack {
private:
  Node<T>* top;
  isEmpty() {
    return top == NULL;
  }
public:
  Stack () { top = NULL; }
  void push( T item) {
    Node <T>* node = new Node (item);
    if (!node) {
      std::cout <<"Stack Overflow" << std::endl;
      exit(1);
    }
    node->data = item;
    node->link = top;
    top = node;
  }
  void pop () {
    Node<T>* temp;
    if (isEmpty()) {
      std::cout << "Stack Underflow" << std::endl;
      exit(1);
    } else {
      temp = top;
      top = top -> link;
      free(temp);
    }
  }
  void display () {
    Node<T>* temp;
    if (isEmpty()) {
      std::cout << "Stack Underflow" << std::endl;
      exit(1);
    } else {
      temp = top;
      while (temp != NULL) {
	std::cout << temp->data;
	temp = temp->link;
	if (temp != NULL) {
	  std::cout << " -> ";
	}
	
      }
      std::cout << std::endl;
    }
  }
};



#endif
