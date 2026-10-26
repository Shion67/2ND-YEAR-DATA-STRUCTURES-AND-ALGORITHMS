#include <iostream>
using namespace std;

void displaySum(double num1, double num2);
bool isGreater(double A, double B);
bool performLogicalOps(bool val1, bool val2);

int main() {
    cout << "--- Sum Function ---\n";
    displaySum(15.5, 4.5);

    cout << "\n--- Greater Than Function ---\n";
    double a = 20.0, b = 10.0;
    if (isGreater(a, b)) {
        cout << "Variable A is greater than Variable B.\n";
    } else {
        cout << "Variable A is NOT greater than Variable B.\n";
    }

    cout << "\n--- Logical Operations Function ---\n";
    bool success = performLogicalOps(true, false);
    if (success) {
        cout << "Logical operations executed successfully.\n";
    }

    return 0;
}

void displaySum(double num1, double num2) {
    cout << "The sum is: " << (num1 + num2) << "\n";
}

bool isGreater(double A, double B) {
    return A > B;
}

bool performLogicalOps(bool val1, bool val2) {
    cout << "val1 AND val2 (&&): " << (val1 && val2) << "\n";
    cout << "val1 OR val2 (||): " << (val1 || val2) << "\n";
    cout << "NOT val1 (!): " << (!val1) << "\n";
    cout << "NOT val2 (!): " << (!val2) << "\n";
    return true;
}