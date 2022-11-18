#include <iostream>
#include <iomanip>

using namespace std;

int C(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    else
        return C(n - 1, k - 1) + C(n - 1, k);
}

int main()
{
    int a;
    cout << "Trojkat Pascala\nPodaj liczbe wierszy od 0 do 19 (w innym wypadku zaburzy sie trojkatny uklad wydruku): ";
    cin >> a;
    cout << "\n";
    for (int n = 0; n <= a; n++)
    {
        cout << setw(2) << n << setw(3 * (a - n)) << "";
        for (int k = 0; k <= n; k++)
            cout << setw(6) << C(n, k);
        cout << endl;
    }
    return 0;
}