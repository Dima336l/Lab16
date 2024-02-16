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

int main() {
  testStack();
  
}
