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