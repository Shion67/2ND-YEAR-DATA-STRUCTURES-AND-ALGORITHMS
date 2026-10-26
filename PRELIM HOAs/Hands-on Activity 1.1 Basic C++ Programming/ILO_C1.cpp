#include <iostream>
using namespace std;

int main() {
    double num1, num2, temp;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    cout << "After swapping:\n";
    cout << "First number: " << num1 << "\n";
    cout << "Second number: " << num2 << "\n";
    
    return 0;
}