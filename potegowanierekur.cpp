#include <iostream>

using namespace std;

long long fastPower(long long base, long long exponent) {
    if (exponent == 0) {
        return 1;
    }

    if (exponent % 2 == 0) {
        long long half = fastPower(base, exponent / 2);
        return half * half;
    }

    else {
        return base * fastPower(base, exponent - 1);
    }
}

int main() {
    long long base, exponent;
    
    cout << "Podaj podstawe: ";
    cin >> base;
    
    cout << "Podaj wykladnik: ";
    cin >> exponent;
    
    long long result = fastPower(base, exponent);
    
    cout << base << " do potegi " << exponent << " to: " << result << endl;
    
    return 0;
}
