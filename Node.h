#pragma once

template<class T>
struct Node {
    T value;
    Node* left;
    Node* right;
    Node(T item) : value(item), left(nullptr), right(nullptr) {}
};


//    Node(int data) : data(data), left(nullptr), right(nullptr) {}
//    int data;
//    Node *left;
//    Node *right;