#ifndef QUEUELL_H
#define QUEUELL_H

#include <iostream>

template <typename T>
class qNode {
public:
    T data;
    qNode<T> *next;
};

// creating the new node
template <typename T>
qNode<T>* new_node(T newData) {
    qNode<T>* newNode = new qNode<T>;
    newNode->data = newData;
    newNode->next = nullptr;
    return newNode;
}

template <typename T>
void enqueue(T newData, qNode<T>** frontPtr, qNode<T>** backPtr) {
    qNode<T>* newNode = new_node(newData);

    // inserting into an empty queue
    if ((*frontPtr) == nullptr) {
        (*frontPtr) = newNode;
        (*backPtr) = newNode;
        return;
    }

    // point the back next to the newNode
    (*backPtr)->next = newNode;
    // the newNode will be the new backPtr
    (*backPtr) = newNode;
}

template <typename T>
void dequeue(qNode<T>** frontPtr, qNode<T>** backPtr) {
    // check if queue is empty
    if ((*frontPtr) == nullptr) {
        std::cout << "The queue is empty. Nothing to dequeue.\n";
        return;
    }

    qNode<T>* tempPtr = (*frontPtr);

    // check if queue has only 1 node left
    if ((*frontPtr) == (*backPtr)) {
        (*frontPtr) = nullptr;
        (*backPtr) = nullptr;
        delete tempPtr;
        return;
    }

    // update frontPtr
    (*frontPtr) = (*frontPtr)->next;
    tempPtr->next = nullptr;
    delete tempPtr;
}

// display all items in the queue
template <typename T>
void display(qNode<T>* frontPtr) {
    if (frontPtr == nullptr) {
        std::cout << "The queue is empty.\n";
        return;
    }

    qNode<T>* current = frontPtr;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

#endif // QUEUELL_H