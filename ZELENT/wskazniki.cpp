#include <iostream>

using namespace std;

int main()
{
	int ile;
	cout << "Ile liczb w tablicy: ";
	cin >> ile;

	int *tablica;
	tablica = new int [ile];
	
	for(int i = 0; i < ile; i++)
	{
		cout << tablica<<endl;
		tablica++;
	}

	delete [] tablica;

	return 0;
}
