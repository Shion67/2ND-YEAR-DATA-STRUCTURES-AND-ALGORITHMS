#include <iostream>
#include "doubly_ll.h"

int main() {
    DoubleList<char>* head = CreateNewNode('C');
    DoubleList<char>* second = CreateNewNode('P');
    DoubleList<char>* third = CreateNewNode('E');

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    std::cout << "Testing the DLL traversal" << std::endl;
    dllTraverse(head);

    std::cout << "Testing the insertion at the head node" << std::endl;
    dllInsertHead('X', &head);
    dllTraverse(head);

    std::cout << "Testing insertion at the end node" << std::endl;
    dllInsertEnd('0', head);
    dllTraverse(head);

    std::cout << "Testing general insertion at position 2" << std::endl;
    dllInsertGen('Z', head, 2);
    dllTraverse(head);

    return 0;
}