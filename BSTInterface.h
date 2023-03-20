// YOU MAY NOT MODIFY THIS DOCUMENT

#pragma once

#include "Node.h"

//template<class T>
class BSTInterface {
public:
    virtual ~BSTInterface() = default;

    virtual Node* getRootNode() const = 0;

    virtual bool insert(int data) = 0;

    virtual bool remove(int data) = 0;

    virtual bool contains(int data) = 0;

    virtual void clear() = 0;
};
