#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

/*1. Napisz funkcję roznica, która zwraca różnicę dwóch liczb całkowitych.*/



int roznica(int a, int b) {
	return a - b;
}
int main() {
	cout << roznica(6, 5);
	
}
return 0;

/*2. Napisz funkcję iloczyn, która zwraca iloczyn dwóch liczb całkowitych.*/

int iloczyn(int a, int b) {
	int iloczyn = a * b;
	return iloczyn;
}

int main() {
	cout << iloczyn(12, 7);
	return 0;
}
/*3. Napisz funkcję srednia, która zwraca średnią dwóch liczb zmiennoprzecinkowych.*/

float srednia(float a, float b) {
	float srednia = (a + b) / 2;
	return srednia;
}
int main() {
	cout << srednia(12, 7);
	return 0;
}


//4. Napisz funkcję czy_parzysta, która zwraca true, jeśli liczba jest parzysta, a false w przeciwnym wypadku.*/
bool czy_parzysta(int n) {
	if (n % 2 == 0)
		return true;
	else
		return false;
}
int main() {
	cout << czy_parzysta(18);
	return 0;

}

//5. Napisz wartosc_bezwzgledna, która zwraca wartość bezwzględną liczby całkowitej.//

int wartosc_bezwgledna(int n) {
	if (n > 0) {
		int wart = n * 1;
		return wart;
	}
	else {
		int wart = n * -1;
		return wart;
	}

}


int main() {
	cout << wartosc_bezwgledna(-18);
	return 0;
}

//6. Napisz funkcję pole_prostokata, która zwraca pole prostokąta.

	int pole_prostokata(int a, int b) {
		int pole_prostokata = a * b;
		return pole_prostokata;
	}
	int main() {
		cout << pole_prostokata(18, 7);
		return 0;
	}
//7. Napisz funkcję double pole_kola, która zwraca pole koła.

	double pole_kola(double r) {
		return = 3, 14 * (r * r);
	}
		int main() {
			cout << "pole kola wynosi" << pole_kola(5) << endl;
		
		return 0
	}
//8. Napisz funkcję double obwod_kwadratu, która zwraca obwód kwadratu.//

		double obwod_kwadratu(double a) {
			double obwod_kwadratu = 4 * a;
			return obwod_kwadratu;
		}
		int main() {
			cout << obwod_kwadratu(8);
			return 0;
		}

//9. Napisz funkcję minimum, która zwraca mniejszą z dwóch liczb.//
		int minimum(int a, int b) {
			if (a > b) {
				return b;
			}
			else {
				return a;
			}

		}
		int main() {
			cout << minimum(55, 7);
			return 0;
		}

//10. Napisz funkcję maximum, która zwraca wiekszosc z dwóch liczb.*/
		int max(int a, int b) {
			if (a < b) {
				return b;
			}
			else {
				return a;
			}

		}
		int main() {
			cout << max (55, 7);
			return 0;
		}
