// YOU MAY NOT MODIFY THIS DOCUMENT

#pragma once

#include "Node.h"

template<class T>
class BSTInterface {
public:
    virtual ~BSTInterface() = default;

    virtual Node<T>* *getRootNode() const = 0;

    virtual bool insert(T data) = 0;

    virtual bool remove(T data) = 0;

    virtual bool contains(T data) = 0;

    virtual void clear(Node<T>*) = 0;
};
