#include <iostream>

using namespace std;

string decimalToBinary(int decimal) {
    if (decimal == 0) return "0";
    string binary = "";
    while (decimal > 0) {
        binary = (decimal % 2 ? '1' : '0') + binary;
        decimal /= 2;
    }
    return binary;
}

int main() {
    int decimal;
    cin >> decimal;
    cout << decimalToBinary(decimal) << endl;
    return 0;
}