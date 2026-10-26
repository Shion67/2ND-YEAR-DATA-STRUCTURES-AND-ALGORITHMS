#include <iostream>
#include <string>
#include "stackList.h"

bool isMatch(char open, char close){
    if(open == '(' && close == ')') return true;
    if(open == '{' && close == '}') return true;
    if(open == '[' && close == ']') return true;
    return false;
}

bool checkBalance(std::string expr){
    while(!isEmpty<char>()){
        pop<char>();
    }

    for(int i = 0; i < expr.length(); i++){
        char ch = expr[i];
        if(ch == '(' || ch == '{' || ch == '['){
            push(ch);
        }
        else if(ch == ')' || ch == '}' || ch == ']'){
            if(isEmpty<char>()){
                return false;
            }
            char topChar = pop<char>();
            if(!isMatch(topChar, ch)){
                return false;
            }
        }
    }
    return isEmpty<char>();
}

int main(){
    std::string tests[] = {
        "(A+B)+(C-D)",
        "((A+B)+(C-D)",
        "((A+B)+[C-D])",
        "((A+B]+[C-D]}"
    };

    for(int i = 0; i < 4; i++){
        std::cout << tests[i] << std::endl;
        if(checkBalance(tests[i])){
            std::cout << "Y" << std::endl;
        }else{
            std::cout << "N" << std::endl;
        }
    }

    return 0;
}