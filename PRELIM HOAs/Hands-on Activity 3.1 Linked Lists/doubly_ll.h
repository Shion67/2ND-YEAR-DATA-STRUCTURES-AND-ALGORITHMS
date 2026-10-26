#ifndef DOUBLY_LL_H
#define DOUBLY_LL_H

#include <iostream>

template <typename T>
class DoubleList {
public:
    T data;
    DoubleList<T>* prev = nullptr;
    DoubleList<T>* next = nullptr;
};

template <typename T>
DoubleList<T>* CreateNewNode(T newData) {
    DoubleList<T>* newNode = new DoubleList<T>;
    newNode->data = newData;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    return newNode;
}

template <typename T>
void dllTraverse(DoubleList<T>* currentNode) {
    DoubleList<T>* tail = nullptr;

    if (currentNode == nullptr) {
        std::cout << "The list is empty";
        return;
    }

    std::cout << "Forwarding: ";
    while (currentNode != nullptr) {
        std::cout << currentNode->data << " ";
        tail = currentNode;
        currentNode = currentNode->next;
    }
    std::cout << std::endl;

    std::cout << "Backwarding: ";
    while (tail != nullptr) {
        std::cout << tail->data << " ";
        tail = tail->prev;
    }
    std::cout << std::endl;
}

template <typename T>
void dllInsertHead(T newData, DoubleList<T>** currentHead) {
    DoubleList<T>* newNode = CreateNewNode(newData);
    newNode->next = *currentHead;

    if (*currentHead != nullptr) {
        (*currentHead)->prev = newNode;
    }

    *currentHead = newNode;
}

template <typename T>
void dllInsertEnd(T newData, DoubleList<T>* currentHead) {
    if (currentHead == nullptr) return;

    DoubleList<T>* newNode = CreateNewNode(newData);

    while (currentHead->next != nullptr) {
        currentHead = currentHead->next;
    }

    currentHead->next = newNode;
    newNode->prev = currentHead;
}

template <typename T>
void dllInsertGen(T newData, DoubleList<T>* currentHead, int position) {
    if (currentHead == nullptr) return;

    DoubleList<T>* newNode = CreateNewNode(newData);

    for (int i = 1; i < position - 1; i++) {
        if (currentHead->next != nullptr) {
            currentHead = currentHead->next;
        }
    }

    newNode->next = currentHead->next;
    newNode->prev = currentHead;

    if (currentHead->next != nullptr) {
        currentHead->next->prev = newNode;
    }
    currentHead->next = newNode;
}

#endif