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
