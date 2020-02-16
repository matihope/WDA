#include <iostream>

using namespace std;


int main() {
    int t;
    cin >> t;
    for(; t > 0; --t)
    {
        unsigned int n;
        cin >> n;
        
        unsigned long long n_f = n;
        for(int i = 1; i < n; ++i)
        {
            n_f *= n-i;
            while(n_f%10 == 0)
                n_f /= 10;
            n_f %= 10000;
        }
        
        cout << n_f%10 << endl;
        
    }
    return 0;
}