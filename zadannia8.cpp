/*1. Sprawdzenie wieku i prawo do głosowania.
Wczytaj wiek użytkownika.
Jeśli >= 18 - "Masz prawo do głosowania".
Jeśli < 18 "Nie masz prawa do głosowania”.*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int wiek;
        cout << "podaj wiek" << endl;
    cin >> wiek;
    if (wiek >= 18) {
        cout << "masz prawo do glosowania" << endl;
    }
    else {
        cout << "nie masz prawa do glosowania" << endl;
    }





            /*2. Ocena szkolna na podstawie wyniku procentowego
            Wczytaj wynik procentowy z testu(0–100).
            90–100 - „Ocena: celujący”,
            75–89 - „Ocena : bardzo dobry”,
            50–74 - „Ocena : dobry”,
            < 50 - „Ocena : niedostateczny”.*/

 
    
        int wynik;

        cout << "podaj wynik z testu" << endl;
        cin >> wynik;
        if (wynik >= 90 && wynik <= 100)
        {
            cout << "ocena celujaca" << endl;
        }
        else if (wynik >= 75 && wynik <= 89)
        {
            cout << "ocena bardzo dobra" << endl;
        }
        else if (wynik >= 50 && wynik <= 74)
        {
            cout << "ocena dobra" << endl;
        }
        else 
        cout << "niedostateczny";
}

        
            /*3. Sprawdzenie liczby dodatniej lub ujemnej
             Wczytaj liczbę całkowitą.
             Jeśli dodatnia - „Liczba dodatnia”,
             jeśli ujemna - „Liczba ujemna”,
             jeśli 0 - „Liczba równa zero”.*/
             
             int liczba;
        cout << "podaj liczbe" << endl;
        cin >> liczba;
        if (liczba > 0) {
            cout << "liczba jest dodatnia"
        }
        else if(liczba < 0) {
            cout << "liczba jest ujemna" << endl;
        }
        else if (liczba  == 0) {
            cout << "liczba jest rowna zero"
        }
        
             /*4. Sprawdzenie czy liczba mieści się w zakresie 100–200 lub poza nim
             Wczytaj liczbę.
             Jeśli >= 100 i <= 200 - "Liczba w przedziale 100–200"
             w przeciwnym razie - "Liczba poza przedziałem"*/

        int liczba1;
        cout << "podaj liczbe" << endl;
        cin >> liczba1;   
            if (liczba1 >= 100 && liczba1 <= 200) {
                cout << "liczba w przedziale";
            }
            else {
                cout << "liczba poza przedzialem";
            }






             /*5. Sprawdzenie największej liczby z trzech wprowadzonych
             Wczytaj trzy liczby.
             Program wypisze, która jest największa.*/


            return 0;
        }
