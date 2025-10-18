#include<iostream>
#include<string>


     using namespace std;

     int main()
     {

         int liczba;

         cout << "podaj liczbe calkowita" << endl;
         cin >> liczba;
         if (liczba > 0) {
             cout << "liczba jest dodatnia" << endl;

         }
     
         int liczba1; 
         cout << "podaj liczbe calkowita " << endl;
         cin >> liczba1;
         if (liczba%2==0)
         {
             cout << "liczba jest parzysta" << endl;
         }else {
             cout << "liczba jest nie parzysta" << endl;
         
             return 0;
         }

         if (50 > liczba > 10) {
             cout << "jesli jest w przedziale 10-50 " endl;
         }
         else {
             "jesli liczba ma wiecej niz 10 i mniej niz 50"endl;

         }
