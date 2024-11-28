#include <iostream>
#include <cmath>
using namespace std;

void rozkladNaCzynnikiPierwsze(int n) {
    while (n % 2 == 0) {
        cout << 2 << " ";
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 2) {
        cout << n << " ";
    }
}

int main() {
    int liczba;
    cout << "Podaj liczbe do rozkladu na czynniki pierwsze: ";
    cin >> liczba;
    cout << "Czynniki pierwsze liczby " << liczba << " to: ";
    rozkladNaCzynnikiPierwsze(liczba);
    return 0;
}
