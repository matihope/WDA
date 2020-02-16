#include <iostream>

using namespace std;

int main()
{
	int ilosc_powtorzen;
	cin >> ilosc_powtorzen;
	while(ilosc_powtorzen--)
	{
		int a, b;
		cin >> a >> b;
		if((a%4 == 1 || a%4 == 2) &&  (b%4 == 1 || b%4 == 2))
			cout << "Second" << endl;
		else
			cout << "First" << endl;
	}

	return 0;

}