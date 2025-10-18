#include<iostream>
#include<string>

using namespace std;

int main()
{

    double a, b, c, srednia;

    cout << "podaj a:" <<endl;
    cin >> a;
    cout << "podaj b:" <<endl;
    cin >> b;
    cout << "podaj c:" <<endl;
    cin >> c;
    srednia= (a + b + c) / 3;

    cout << "srednia:" << srednia;
    return 0;
}
