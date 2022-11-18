#include <iostream>

using namespace std;
void liniowe(float a, float b) {
    if (a == 0)
        if (b == 0)
            cout << "Rownaie tozsamosciowe" << endl;
        else
            cout << "Rownanie sprzeczne" << endl;
    else {
        float x;
        x = -b / a;
        cout << "x = " << x;
    }
}
int main(void) {
    float a, b, c;
    cout << "Rownanie kwadratowe przyjmuje postac:\nf(x)=ax^2+bx+c\nPodaj a,b i c\n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "Twoje rownanie przyjmuje postac:\nf(x)=" << a << "x^2+" << b << "x+" << c << endl;
    if (a == 0)
        liniowe(b, c);
    else {
        float delta;
        delta = b * b - 4 * a * c;
        if (delta < 0)
            cout << "Brak rozwiazan" << endl;
        else
            if (delta == 0) {
                float x;
                x = -b / (2 * a);
                cout << "Jedno podwojne rozwiazanie x = " << x << endl;
            }
            else {
                float x1, x2;
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);
                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
            }
    }
    return 0;
}