#ifndef NODE_H
#define NODE_H

#include <bits/stdc++.h>

template <typename T>

class Node {
private:
  T data;
  Node* link;
public:
  Node(T n) {
    data = n;
    link = NULL;
  }

  void setData(T item) {
    this.data = item;
  }

  void setLink(Node* node) {
    this.link = node;
  }

#endif
