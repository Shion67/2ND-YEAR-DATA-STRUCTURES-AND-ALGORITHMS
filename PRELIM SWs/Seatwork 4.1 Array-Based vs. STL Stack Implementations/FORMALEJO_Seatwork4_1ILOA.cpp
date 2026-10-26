#include<iostream>
#include <stack>

int main(){
    // create an object:
    std::stack<char> stack1;

    std::cout<<"Is the stack empty? "<<stack1.empty() <<std::endl;
    stack1.push('w');
    std::cout<<"current top of the stack: "<<stack1.top()<<std::endl;
    stack1.push('o');
    std::cout<<"current top of the stack: "<<stack1.top()<<std::endl;
    stack1.push('a');
    std::cout<<"current top of the stack: "<<stack1.top()<<std::endl;
    stack1.push('h');
    std::cout<<"current top of the stack: "<<stack1.top()<<std::endl;
    stack1.push('!');
    std::cout<<"current top of the stack: "<<stack1.top()<<std::endl;
    std::cout<<"Is the stack empty? "<<stack1.empty() <<std::endl;
    std::cout<<"What is the size of the stack? "<<stack1.size() <<std::endl;

    //swap

    //emplace
    
    return 0;
}