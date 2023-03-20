#pragma once
#include <iostream>
#include <queue>
#include "BSTInterface.h"

using namespace std;

//template<class T>
class BST : public BSTInterface {
private:
    //typedef Node<T> Node;
    int size;
    Node* root;

    bool _contains(Node*& node, int item) {
        if (node == nullptr) {
            return false;
        }
        if (node->data == item) {
            return true;
        }
        if (node->data > item) {
            return _contains(node->left, item);
        }
        else {
            return _contains(node->right, item);
        }
    }

    bool _insert(Node*& node, int item){
        if (node == nullptr) {
            node = new Node(item);
            return true;
        }
        if (item == node->data) {
            return false;
        }
        if (item < node->data) {
            return _insert(node->left, item);
        }
        else {
            return _insert(node->right, item);
        }
    }

    Node* getInorderPredecessor(Node*& node) {
        Node* iop = node->left;
        while (iop->right != nullptr) {
            iop = iop->right;
        }
        return iop;
    }

    bool _remove(Node*& node, int item) {
        if (node == nullptr) {
            return false;
        }
        if (item == node->data) {
            if (node->left == nullptr && node->right == nullptr) {
                delete node;
                node = nullptr;
            }
            else if (node->left == nullptr && node->right != nullptr) {
                Node* tmp = node->right;
                delete node;
                node = tmp;
            }
            else if (node->right == nullptr && node->left != nullptr) {
                Node* tmp = node->left;
                delete node;
                node = tmp;
            }
            else {
                Node* iop = getInorderPredecessor(node);
                node->data = iop->data;
                _remove(node->left, iop->data);
            }
            return true;
        }
        else if (item < node->data) {
            return _remove(node->left, item);
        }
        else {
            return _remove(node->right, item);
        }
    }

    void _clear(Node*& node) {
        if (node == nullptr) {
            return;
        }
        _clear(node->left);
        _clear(node->right);
        delete node;
        node = nullptr;
    }

public:
    BST() {
        root = nullptr;
        size = 0;
    }
    ~BST() {
        clear();
    }

    Node* getRootNode() const {
        return root;
    }

    bool insert(int item) {
        if (_insert(root, item)) {
            size++;
            return true;
        }
        return false;
    }

    bool contains(int item) {
        if (_contains(root, item)) {
            return true;
        }
        return false;
    }

    bool remove(int item) {
        if (_remove(root, item)) {
            size--;
            return true;
        }
        return false;
    }

    void clear() {
        _clear(root);
    }

};
