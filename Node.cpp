#ifndef NODE_H
#define NODE_H

#include <bits/stdc++.h>

template <typename T>

struct Node {
  T data;
  Node* link;
  Node(T n) {
    data = n;
    link = NULL;
  }
};

#endif
