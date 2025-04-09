#include <iostream>
using namespace std;

float f(float x) {
    return x * x - 2;
}

float PolowieniePrzedzialow(float a, float b, float epsilon) {
    if (f(a) == 0.0f)
        return a;

    if (f(b) == 0.0f)
        return b;

    float srodek = (a + b) / 2.0f;

    if ((b - a) <= epsilon)
        return srodek;

    if (f(a) * f(srodek) < 0)
        return PolowieniePrzedzialow(a, srodek, epsilon);

    return PolowieniePrzedzialow(srodek, b, epsilon);
}

int main() {
    float a = 0.0f;
    float b = 2.0f;
    float epsilon = 1e-4f;

    float wynik = PolowieniePrzedzialow(a, b, epsilon);

    cout << wynik << endl;
    cout << f(wynik) << endl;

    return 0;
}
