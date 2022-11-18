#include <iostream>
#include <iomanip>
using namespace std;
int main() {

float x, y, suma, roznica, iloczyn, iloraz;
cout << "Program oblicza sume, roznice, iloczyn i iloraz dla dwoch liczb x i y wprowadzanych z klawiatury." << endl;
cout << "Podaj x." << endl;
cin >> x;
cout << "Podaj y." << endl;
cin >> y;
suma = x + y;
roznica = x - y;
iloczyn = x * y;
iloraz = x / y;
cout << fixed << setprecision(2) << endl;
cout << "Dla x = " << x << " i y = " << y << endl;
cout << endl;
cout << "suma = " << suma << "," << endl;
cout << "roznica = " << roznica << "," << endl;
cout << "iloczyn = " << iloczyn << "," << endl;
cout << "iloraz = " << iloraz << "." << endl;
return 0;
}