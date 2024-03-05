#include "Main.h"

void testStack() {
  Stack <int>* stack = new Stack<int>();
  stack->push(5);
  stack->push(6);
  stack->push(7);
  std::cout <<"Stack after pushing elements 5, 6, 7: " << std::endl;
  stack->display();
  stack->pop();
  std::cout <<"Stack after poping last element: " << std::endl;
  stack->display();
  std::cout <<"Stack after poping all elements: " << std::endl;
  stack->pop();
  stack->pop();
  stack->display();
}

void testDoubleLinkedList() {
  DoublyLinkedList<int>* list = new DoublyLinkedList<int>();
  list->insertFront(5);
  list->insertFront(4);
  list->insertFront(3);
  std::cout << "List after adding to the front 5, 4, 3 respectively :" << std::endl;
  list->print();
  list->clear();
  std::cout << "List after adding to the back 3, 4, 5 respectively :" << std::endl;
  list->insertBack(3);
  list->insertBack(4);
  list->insertBack(5);
  list->print();
  list->removeFront();
  list->removeBack();
  std::cout << "List after removing one element from the front and one from the back :" << std::endl;
  list->print();
  
}

int main() {
  testStack();
  testDoubleLinkedList(); 
}
