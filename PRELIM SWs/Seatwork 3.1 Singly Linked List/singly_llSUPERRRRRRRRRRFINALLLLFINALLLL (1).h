#ifndef SINGLY_LL_H
#define SINGLY_LL_H


template <typename T>
class SingleList{
    public: 
        T data;
        SingleList<T>* next = nullptr;
};
template <typename T>
void ListTraversal(SingleList<T>* head){
    if(head == nullptr){
        std::cout<<"The list is empty.";
        return; 
    }
    while (head != nullptr){

        std::cout << head->data;

        if(head->next != nullptr){
            std::cout << " -> ";
        }

        head = head->next;
    }
    
    std::cout << std::endl;
}

template <typename T>
void sll_insert_head(T newData, SingleList<T>** currentHead){

    SingleList<T>* newNode = new SingleList<T>;

    newNode->data = newData;

    newNode->next = *currentHead;

    *currentHead = newNode;
}
template <typename T>

void sll_general_insert(T newData, SingleList<T>* prevNode){

    if(prevNode == nullptr){
        std::cout <<"Previous node cannot be nullptr" << std::endl;
        return;
    }

    SingleList<T>* newNode = new SingleList<T>;

   newNode->data = newData;

   newNode->next = prevNode->next;

    prevNode-> next = newNode;
}

template <typename T>
void sll_insert_end(T newData, SingleList<T>** head){

    SingleList<T>* newNode = new SingleList<T>;

    SingleList<T>* currentNode = *head;

    newNode->data = newData;

    newNode-> next = nullptr;

    while(currentNode->next != nullptr){
        currentNode = currentNode->next;
    }

    currentNode->next = newNode;
}
template <typename T>
void sll_Delete_Node(T findData, SingleList<T>** head )

    if(*head == nullptr) return;

    SingleList<T>* currNode = *head;
    SingleList<T>* prevNode = nullptr;


    while(currNode != nullptr && currNode->data != findData){
        prevNode =currNode;
        currNode = prevNode->next;
    }

    if(currNode == nullptr){
        std::cout<<"The data is not found \n"<<std::endl;
    }
    if(prevNode == nullptr){
        *head = currNode->next;
    }else{
        prevNode->next = currNode->next;
    }
    delete currNode;
}
template <typename T>
void sll_Deleting_List(SingleList<T> **head){
    SingleList<T>* current = *head;

    while(current != nullptr){

        SingleList<T>* temp = current;
        current = current->next;
        delete temp;
    }

    *head = nullptr;
}
#endif