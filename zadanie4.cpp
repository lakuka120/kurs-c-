#include<iostream>
#include<string>

using namespace std;

int main()
{
	double temp_c, temp_f;

		cout << "podaj temp w c;" << endl;
	cin >> temp_c;
		temp_f = temp_c * 1.80 + 32;

	cout << "temp_c" << " " << temp_c << " " << "rowna sie" << " " << temp_f;



	

	return 0;
}
