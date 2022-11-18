#include <iostream>
using namespace std;
int main()
{
	char a;
	cout << "Program wyswietlajacy na ekranie znaki podane z klawiatury do momentu, az zostanie podany znak t"<< endl;
	cout << "Podaj znak:" <<endl;
	cin >> a;
	while (a != 't')
	{
		cout << "Podaj kolejny znak:"<<endl;
		cin >> a;
	}
	cout << "Podales " << a << " wiec koncze program";
	return 0;
}