#include<iostream>
#include "stackList.h"

int main(){

    std::cout<< "--- PUSHING 'Y' 'E' 'S' ONTO THE STACK ---- \n";
    //push
    push('S');
    push('E');
    push('Y');

    //display the current top
    Top<char>(); // Top should be 'e'
    displayALL<char>();
    std::cout<<"\n ------ Popping all the elements ----- \n";

    while(!isEmpty<char>()){
        std::cout<<" Popped: "<< pop<char>() <<std::endl;
    }

    std::cout<<"\n ------ Testing the Underflow ----- \n";
    pop<char>();

    return 0;
}