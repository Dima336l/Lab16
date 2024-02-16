#ifndef NODE_H
#define NODE_H

#include <bits/stdc++.h>

template <typename T>

class Node {
public:
  T data;
  Node* link;
  Node* prev;
  Node* next;
  Node(T n) {
    data = n;
    link = NULL;
  }

  Node(T n, Node* p, Node* n) {
    data = n;
    prev = p;
    next = n;
  }

  Node() {
    
  }

  void setData(T item) {
    this.data = item;
  }

  void setLink(Node* node) {
    this.link = node;
  }
};

#endif
