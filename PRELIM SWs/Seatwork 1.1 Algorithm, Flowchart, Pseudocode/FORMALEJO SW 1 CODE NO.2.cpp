#include <iostream>
using namespace std; 

int main()
{

    float item1, item2, item3, total, payment, change;

    cout << "Enter price of Item 1: ";
    cin >> item1; 

    cout << "Enter price of Item 2: ";
    cin >> item2;

    cout << "Enter price of Item 3: ";
    cin >> item3;

    total = item1 + item2 + item3;

    cout << "Total Price: " << total << endl;

    cout << "Enter Payment: "; 
    cin >> payment; 

    change = payment;

    cout << "Change: " << change << endl;

        return 0;

}