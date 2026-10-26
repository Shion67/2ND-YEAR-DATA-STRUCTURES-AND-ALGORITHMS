#include <iostream>
#include "queueLL.h"

int main() {

    qNode<int>* front = nullptr;
    qNode<int>* back = nullptr;

    enqueue(1, &front, &back);
    std::cout << "front: " << front->data << " back: " << back->data << "\n";
    enqueue(2, &front, &back);
    enqueue(3, &front, &back);
    std::cout << "front: " << front->data << " back: " << back->data << "\n";

    display(front);
    dequeue(&front, &back);
    std::cout << "front: " << front->data << " back: " << back->data << "\n";
    dequeue(&front, &back);
    std::cout << "front: " << front->data << " back: " << back->data << "\n";
    dequeue(&front, &back);
    dequeue(&front, &back);

    return 0;
}