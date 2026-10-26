#include <iostream>
using namespace std; 

int main()
{
    float quiz1, quiz2, quiz3;
    float total, average;

    cout << "Quiz 1 score: "; cin >> quiz1; 
    cout << "Quiz 2 score: "; cin >> quiz2;
    cout << "Quiz 3 score: "; cin >> quiz3;

    total = quiz1 + quiz2+ quiz3;
    average = total / 3;

    cout << "\nTotal: " << total << endl;
    cout << "Average: " << average << endl;











    return 0;

}