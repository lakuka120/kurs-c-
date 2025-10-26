#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main() {
	int tablica[10];
	int suma = 0;
	cout << "podaj 10 liczb całkowitych";
	for (int i = 0; i < 10; i++)
	{
		cout << "liczba" << i + 1 << ":";
		cin >> tablica [i];
		suma = suma + tablica [i];
	}
	cout << "suma liczb wynosi:" << suma << endl;

	return 0;
}
