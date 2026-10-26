#ifndef QUEUEARR_H
#define QUEUEARR_H

#include <iostream>

template <typename T>
class queueArr {
private:
    T* q_array;
    size_t q_capacity;
    size_t q_size;
    int q_front;
    int q_back;

public:
    // constructor
    queueArr(size_t capacity = 10);

    bool Empty();
    size_t Size();
    void Clear();

    T Front();
    T Back();

    void Enqueue(T value);
    void Dequeue();

    // copy constructor
    queueArr(const queueArr& other);

    // copy assignment operator
    queueArr& operator=(const queueArr& other);

    // destructor
    ~queueArr();
};

// constructor
template <typename T>
queueArr<T>::queueArr(size_t capacity) {
    q_capacity = capacity;
    q_size = 0;
    q_front = 0;
    q_back = -1;
    q_array = new T[q_capacity];
}

template <typename T>
bool queueArr<T>::Empty() {
    return q_size == 0;
}

template <typename T>
size_t queueArr<T>::Size() {
    return q_size;
}

template <typename T>
void queueArr<T>::Clear() {
    q_size = 0;
    q_front = 0;
    q_back = -1;
}

template <typename T>
T queueArr<T>::Front() {
    if (Empty()) {
        std::cout << "The Queue is Empty.\n";
        return T{};
    }
    return q_array[q_front];
}

template <typename T>
T queueArr<T>::Back() {
    if (Empty()) {
        std::cout << "The Queue is Empty.\n";
        return T{};
    }
    return q_array[q_back];
}

template <typename T>
void queueArr<T>::Enqueue(T value) {
    if (q_size == q_capacity) {
        std::cout << "Queue is full\n";
        return;
    }

    q_back = (q_back + 1) % q_capacity;
    q_array[q_back] = value;
    q_size++;
}

template <typename T>
void queueArr<T>::Dequeue() {
    if (Empty()) {
        std::cout << "The queue is empty.\n";
        return;
    }

    q_front = (q_front + 1) % q_capacity;
    q_size--;

    if (Empty()) {
        Clear();
    }
}

template <typename T>
queueArr<T>::~queueArr() {
    delete[] q_array;
}

// Copy Constructor
template <typename T>
queueArr<T>::queueArr(const queueArr& other) {
    q_capacity = other.q_capacity;
    q_size = other.q_size;
    q_front = other.q_front;
    q_back = other.q_back;

    q_array = new T[q_capacity];
    for (size_t i = 0; i < q_capacity; ++i) {
        q_array[i] = other.q_array[i];
    }
}

// Copy Assignment Operator
template <typename T>
queueArr<T>& queueArr<T>::operator=(const queueArr& other) {
    if (this != &other) {
        delete[] q_array;

        q_capacity = other.q_capacity;
        q_size = other.q_size;
        q_front = other.q_front;
        q_back = other.q_back;

        q_array = new T[q_capacity];
        for (size_t i = 0; i < q_capacity; ++i) {
            q_array[i] = other.q_array[i];
        }
    }
    return *this;
}

#endif // QUEUEARR_H