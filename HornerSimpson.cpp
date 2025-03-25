#include <iostream>

using namespace std;

float horner(int* wspolczynnik, int stopien, float x) {
    float wynik = wspolczynnik[0];
    for (int i = 1; i <= stopien; ++i) {
        wynik = wynik * x + wspolczynnik[i];
    }
    return wynik;
}

int main() {
    int stopien;
    float argument;

    cout << "Podaj stopien wielomianu: ";
    cin >> stopien;

    int* wspolczynnik = new int[stopien + 1];

    for (int i = 0; i <= stopien; ++i) {
        cout << "Podaj wspolczynnik dla x^" << stopien - i << ": ";
        cin >> wspolczynnik[i];
    }

    cout << "Podaj argument x: ";
    cin >> argument;

    float wynik = horner(wspolczynnik, stopien, argument);

    cout << "Wartosc wielomianu w punkcie x = " << argument << " wynosi: " << wynik << endl;

    delete[] wspolczynnik;

    return 0;
}

