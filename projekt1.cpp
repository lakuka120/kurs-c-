/* 1. Oblicz średnią prędkość pojazdu

Wczytaj od użytkownika dystans(w kilometrach) i czas podróży(w godzinach).
Oblicz średnią prędkość i wypisz wynik w km / h.*/ 




#include<iostream>
#include<string>

using namespace std;

int main()
{
	double dystansKm, czasH, srPre;

	cout << "podaj dystnas w kilomrtrach" << endl;
	cin >> dystansKm;
	cout << "podaj czas w godzinach" << endl;
	cin >> czasH;
	srPre = dystansKm / czasH;
	cout << "srednia predkosc wynosi" << srPre << "kilometry na godzine" << endl;



	double pole, a, b, przek;
	/* 2. Oblicz pole prostokąta i przekątną

Program wczytuje długość i szerokość prostokąta, a następnie oblicza jego pole i długość przekątnej.*/


	cout << "oblicz dlugosc (a) ";
	cin >> a;
	cout << "olbicz dlugosc (b)";
	cin >> b;
	pole = a * b;
	przek = sqrt(a * a + b * b);
	cout << "pole " << pole << "przek " << przek;


	/*3. Przeliczanie sekund na godziny, minuty i sekundy

Wczytaj liczbę sekund i oblicz, ile to godzin, minut i sekund*/

	int
		godz, min, sekundy, ilosekund;
	cout << "podaj ilosc sekund" << endl;
	cin >> ilosekund;
	godz = ilosekund / 3600;
	min = ilosekund / 60;
	sekundy = ilosekund - min * 60 - godz * 3600;
	cout << "sekund przelicza sie na " << godz << " godz " << min << "minut oraz," << sekundy << "sekund" << endl;




	/*4. Oblicz miesięczne zużycie energii

Program wczytuje moc urządzenia(w watach) oraz liczbę godzin pracy dziennie.
Oblicz koszt miesięcznego zużycia energii, przyjmując cenę 1 kWh od użytkownika.*/



	double moc, czas_p, koszt, cena;
	koszt = 3;

	cout << "podaj moc urzaedzenia: " << endl;
	cin >> moc;
	cout << "podaj liczbe godzin: " << endl;
	cin >> czas_p;
	cena = moc * czas_p * 30 * koszt;
	cout << "koszt miesiecznego zuzycia prądu " << cena << "1zl" << endl;



	/*5. Oblicz należny podatek dochodowy

Wczytaj kwotę dochodu użytkownika i oblicz podatek wg uproszczonego wzoru :

jeśli dochód ≤ 30 000 zł → podatek 12 %,

jeśli dochód > 30 000 zł → podatek 12 % od 30 000 zł + 32 % od nadwyżki.*/


	double dochod, podatek;
	podatek = 0.12;
	cout << "podatek" << endl;
	cin >> dochod;
	if (podatek <= 30000) {
		cout << dochod * podatek << "podatek wynosi" << endl;
	}
	else {
		cout << dochod - 30000 * 0.32 + (30000 * podatek);
	}



	/*6. Oblicz ilość farby potrzebnej do pomalowania pokoju

	Program wczytuje długość, szerokość i wysokość pokoju(w metrach), oraz informację, ile metrów kwadratowych można pomalować 1 litrem farby.
	Oblicz, ile litrów farby trzeba kupić.*/


	double szerokosc, dlugosc, wysokosc, ilosc_f;

	cout << "podaj wysokosc(m)" << endl;
	cin >> wysokosc;
	cout << "podaj szerokosc(m)" << endl;
	cin >> szerokosc;
	cout << "podaj dlugosc(m)" << endl;
	cin >> dlugosc;
	ilosc_f = ((wysokosc * szerokosc) / dlugosc) * 4;
	cout << "aby pomalowac pokoj potrzbea" << ilosc_f << "litrow farby" << endl;












	return 0;
