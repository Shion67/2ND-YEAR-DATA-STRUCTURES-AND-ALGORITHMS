#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Triangle {
private:
    double totalAngle, angleA, angleB, angleC;
    double sideA, sideB, sideC;

public:
    Triangle(double A, double B, double C, double sA, double sB, double sC);
    void setAngles(double A, double B, double C);
    void setSides(double sA, double sB, double sC);
    const bool validateTriangle();
    double computeArea();
    double computePerimeter();
    string classifyTriangle();
};

int main() {
    Triangle myTriangle(40, 30, 110, 7, 5, 10);
    
    if (myTriangle.validateTriangle()) {
        cout << "The shape is a valid triangle.\n";
        cout << "Perimeter: " << myTriangle.computePerimeter() << "\n";
        cout << "Area: " << myTriangle.computeArea() << "\n";
        cout << "Classification by angle: " << myTriangle.classifyTriangle() << "\n";
    } else {
        cout << "The shape is NOT a valid triangle.\n";
    }
    
    return 0;
}

Triangle::Triangle(double A, double B, double C, double sA, double sB, double sC) {
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A + B + C;
    sideA = sA;
    sideB = sB;
    sideC = sC;
}

void Triangle::setAngles(double A, double B, double C) {
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A + B + C;
}

void Triangle::setSides(double sA, double sB, double sC) {
    sideA = sA;
    sideB = sB;
    sideC = sC;
}

const bool Triangle::validateTriangle() {
    return (totalAngle <= 180);
}

double Triangle::computeArea() {
    double s = (sideA + sideB + sideC) / 2.0;
    return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
}

double Triangle::computePerimeter() {
    return sideA + sideB + sideC;
}

string Triangle::classifyTriangle() {
    if (angleA < 90 && angleB < 90 && angleC < 90) {
        return "Acute-angled";
    } else if (angleA > 90 || angleB > 90 || angleC > 90) {
        return "Obtuse-angled";
    } else {
        return "Others";
    }
}
#include<iostream>
using namespace std;

int count = 0;

class rectangle {
private:
    double recLength, recWidth;

public:
    rectangle(double L, double W);
    void setLength(double L);
    void setWidth(double W);
    double getPerimeter();
};

int main() {
    rectangle shape1(2, 5);
    std::cout << "The perimeter of the rectangle is " << shape1.getPerimeter() << ".\n";
    std::cout << count << " number of objects created.\n";
    return 0;
}

rectangle::rectangle(double L, double W) {
    recLength = L;
    recWidth = W;
    count++;
}

void rectangle::setLength(double L) {
    recLength = L;
}

void rectangle::setWidth(double W) {
    recWidth = W;
}

double rectangle::getPerimeter() {
    return (2 * recLength) + (2 * recWidth);
}
#include <iostream>
#include <cmath>
using namespace std;

double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;
    
    cout << "Enter coordinates for Point 1 (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates for Point 2 (x2 y2): ";
    cin >> x2 >> y2;
    
    cout << "The distance between the points is: " << calculateDistance(x1, y1, x2, y2) << "\n";
    
    return 0;
}1
#include <iostream>
using namespace std;

double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}

int main() {
    double kelvin;
    cout << "Enter temperature in Kelvin: ";
    cin >> kelvin;
    
    cout << "Temperature in Fahrenheit: " << kelvinToFahrenheit(kelvin) << "\n";
    
    return 0;
}
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
#include <iostream>
using namespace std;


class Triangle {
private:
    double totalAngle, angleA, angleB, angleC;

public:
    Triangle(double A, double B, double C);
    void setAngles(double A, double B, double C);
    const bool validateTriangle();
};


int main() {
    Triangle set1(40, 30, 110);
    
    if(set1.validateTriangle()) {
        cout << "The shape is a valid triangle.\n";
    } else {
        cout << "The shape is NOT a valid triangle.\n";
    }
    
    return 0;
}


Triangle::Triangle(double A, double B, double C) {
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A + B + C;
}

void Triangle::setAngles(double A, double B, double C) {
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A + B + C;
}

const bool Triangle::validateTriangle() {
    return (totalAngle <= 180);
}
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
