#include <iostream>
#include <time.h>
#include <cstdlib>
#include <math.h>
#include <string>
#include <fstream>

using namespace std;

int get_nums_changed(string a, string b)
{
	int count = 0;

	for(int i = 0; i < a.length(); i++)
		if(a[i] != b[i])
			count += 1;

	return count;
}

string find_c_2(string a, string b, int k)
{
	long long c = stoi(a);
	while((c >= stoi(b)) || get_nums_changed(to_string(c), a) != k){
		--c;
	}

	return to_string(c);
}

string find_c(string a, string b, int k)
{
	const string a_original = a;
	int len = a.length();

	if (len == 1) // special case
		a[0] = b[0] - 1;
	else if (k==1) // special case
	{
		;
	}
	else
	{
		if(a[0] == b[0] && k==len) // special case
		{
			a[0] = b[0] - 1;
			for(int i = 1; i < len; ++i)
				a[i] = '9';
		}
		else
		{
			;
		}
	}
	return a;
}

int main()
{
	int tests;
	cin >> tests;
	
	for(; tests > 0; --tests)
	{
		string a, b;
		int k;
		cin >> a >> b >> k;

		string c = "-1"; // output

		if (a.length() >= k)
		{
			clock_t start, stop;

			start=clock();
			c = find_c(a, b, k);
			stop=clock();
			//cout << "Time1: " << stop-start << endl;

			start=clock();
			cout << "C_real: " << find_c_2(a, b, k) << endl;
			stop=clock();
			//cout << "Time2: " << stop-start << endl;
		}

		cout << "C: " << c << endl;
	}

	return 0;
}

//g++ -O3 -static name.cpp -std=c++17 && ./a.out
