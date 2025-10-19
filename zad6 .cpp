#include<iostream>
#include<string>


             using namespace std;

         int main() {

             int liczba4;
             cout << "podaj liczbe" << endl;
             cin >> liczba4;
             if (liczba4 == 0) {
                 cout << "liczba jest zerem" << endl;
             }
             else if (liczba4 < 0) {
                 cout << "liczba jest ujemna" << endl;
             }
             else if (liczba4 > 0) {
                 cout << "liczba jest dododatnia" << endl;
             }if (liczba4 % 2 == 0) {
                 cout << "liczba jest przysta" << endl;
             }
             else {
                 cout << "liczba jest nie parzysta" << endl;
             }



             return 0;

         }



#include<iostream>
#include<string>


         using namespace std;

         int main() {
             int a, b, c,
                 cout << "podaj pierwsza liczbe"
                 cin >> a;
             cout << "podaj druga liczbe";
             cin >> b;
             cout << "podaj trzecia liczbe";
             cin >> c;
             if (a < b && c > b) {
                 cout << "kokolejnosc liczb: " << a << "," << b << "," << c;
             }
             else if (a < c && b > c) {
                 cout << "kolejnosc liczb:" << a << "," << c << "," << b;
             }
             else if (b<a && c>a) {
                 cout << "kolejnosc licz:" << b << "," << a << "," << c;
             }
             else id(b < c&& a < c){
                 cout << "kolejnosc liczb;" << b << "," << c << "," << a;
         }
             else if (c<a && b>a) {
                 cout << "kolejnosc liczb:" << c << "," << a << "," << b;
             }
             else if (c < b && a < c) {
             cout << "kolejnosc liczb;" << c << "," << b << "," << a;
             }
                return 0
