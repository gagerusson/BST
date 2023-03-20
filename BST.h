#pragma once
#include <iostream>
#include <queue>
#include "BSTInterface.h"

using namespace std;

template<class T>
class BST {
private:
    typedef Node<T> Node;
    int tree_size;
    Node* root;

    bool _contains(Node*& node, T item) {
        if (node == nullptr) {
            return false;
        }
        if (node->value == item) {
            return true;
        }
        if (node->value > item) {
            return _contains(node->left, item);
        }
        else {
            return _contains(node->right, item);
        }
    }

    bool _insert(Node*& node, T item){
        if (node == nullptr) {
            node = new Node(item);
            return true;
        }
        if (item == node->value) {
            return false;
        }
        if (item < node->value) {
            return _insert(node->left, item);
        }
        else {
            return _insert(node->right, item);
        }
    }

    Node getInorderPredecessor(Node*& node) {
        Node iop = node->left;
        while (iop->right != nullptr) {
            iop = iop->right;
        }
        return iop;
    }

    bool _remove(Node*& node, T item) {
        if (node == nullptr) {
            return false;
        }
        if (item == node->value) {
            if (node->left == nullptr && node->right != nullptr) {
                node = node->right;
            }
            else if (node->right == nullptr && node->left != nullptr) {
                node = node->left;
            }
            else {
                Node iop = getInorderPredecessor(node);
                node->value = iop->value;
                _remove(node->left, iop->value);
            }
            return true;
        }
        else if (item < node->value) {
            return _remove(node->left, item);
        }
        else {
            return _remove(node->right, item);
        }
    }
public:
    Node getRootNode() {
        return root;
    }

    bool insert(T item) {
        if (_insert(this->getRootNode(), item)) {
            tree_size++;
            return true;
        }
        return false;
    }

    bool contains(T item) {
        if (_contains(this->getRootNode(), item)) {
            return true;
        }
        return false;
    }

    bool remove(T item) {
        if (_remove(root, item)) {
            tree_size--;
            return true;
        }
        return false;
    }


};
