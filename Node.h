#pragma once

//template<class T>
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int item) : data(item), left(nullptr), right(nullptr) {}
};


//    Node(int data) : data(data), left(nullptr), right(nullptr) {}
//    int data;
//    Node *left;
//    Node *right;