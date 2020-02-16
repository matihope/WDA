#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        // read input
        long long a, M, suma = 0;
        cin >> a >> M;

        int i = 0;
        do
        {
            i++;
            suma += a;
            a *= 2;
        }while(suma < M);

        cout << i << endl;
    }
    return 0;
}