#ifndef DOUBLENODE_H
#define DOUBLENODE_H

template <typename T>

struct DoubleNode {
  T data;
  DoubleNode* prev;
  DoubleNode* next;
  DoubleNode (const T& value) : data(value), prev(nullptr), next(nullptr) {}
};

#endif
