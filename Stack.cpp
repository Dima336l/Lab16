#ifndef STACK_H
#define STACK_H

#include "Node.cpp"

template <typename T>

class Stack {
private:
  Node<T>* top;
public:
  isEmpty() {
    return top == NULL;
  }
  Stack () { top = NULL; }
  void push( T item) {
    Node <T>* node = new Node (item);
    node->data = item;
    node->link = top;
    top = node;
  }
  void pop () {
    Node<T>* temp;
    if (isEmpty()) {
      std::cout << "Stack Underflow" << std::endl;
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
  T returnTop() {
    return top->data;
  }
};



#endif
