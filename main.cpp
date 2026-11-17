#include <iostream>
#include <iomanip>
using namespace std;

// Function to convert Fahrenheit to Celsius
double celsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

int main() {

    cout << "Fahrenheit\tCelsius" << endl;
    cout << "------------------------" << endl;

    for (int fahrenheit = 0; fahrenheit <= 100; fahrenheit += 5) {
        cout << fahrenheit << "\t\t"
             << fixed << setprecision(2)
             << celsius(fahrenheit) << endl;
    }

    return 0;
}