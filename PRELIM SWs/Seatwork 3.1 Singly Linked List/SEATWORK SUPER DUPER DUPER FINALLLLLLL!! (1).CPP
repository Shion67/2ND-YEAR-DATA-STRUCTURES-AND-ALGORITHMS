#include <iostream>
#include "singly_ll.h"


int main(){

    SingleList<char>* head = nullptr;
    SingleList<char>* second = nullptr;
    SingleList<char>* third = nullptr;
    SingleList<char>* fourth = nullptr;

    
    head = new SingleList<char>();
    second = new SingleList<char>();
    third = new SingleList<char>();
    fourth = new SingleList<char>();

    head->data = 'P';
    second->data = 'E;
    third->data = 'L';
    fourth->data = 'S';

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = nullptr;

    std::cout << "Testing of Traversal: \n";
    ListTraversal(head);

     std::cout << "Testing of sll_insert_head: \n";
    sll_insert_head('Q', &head);
    ListTraversal(head);

    std::cout << "Testing of sll_general_insert: \n";
    sll_general_insert('X', head->next->next);
    ListTraversal(head);

    std::cout<<"Testing of sll_insert_end: \n";
    sll_insert_end('U', &head);
    ListTraversal(head);

    std::cout<<"Testing of deleting the node: \n";
    sll_Delete_Node('U', &head);
    ListTraversal(head);
    sll_Delete_Node('Q', &head);
    ListTraversal(head);
    sll_Delete_Node('X', &head);
    ListTraversal(head);

    std::cout<<"Deleting all nodes: \n";
    sll_Deleting_List(&head);
    ListTraversal(head);
    
    return 0;

}