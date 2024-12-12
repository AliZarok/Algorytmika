#include <iostream>
using namespace std;

int CalculatePowerRecursive(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    return base * CalculatePowerRecursive(base, exponent - 1);
}

void DisplayResult(int base, int exponent, int result) {
    cout << "Wynik: " << base << " ^ " << exponent << " = " << result << endl;
}

int main() {
    int base, exponent;

    cout << "Podaj liczbę podstawową: ";
    cin >> base;
    cout << "Podaj wykładnik: ";
    cin >> exponent;

    int result = CalculatePowerRecursive(base, exponent);

    DisplayResult(base, exponent, result);

    return 0;
}
