#include <iostream>
using namespace std;

bool is_prime(int n)
{
    if(n <= 3) return n > 1;
    else if(n % 2 == 0 || n % 3 == 0)
        return false;
    int i = 5;
    while(i * i <= n)
    {
        if(n % i == 0 || n % (i + 2) == 0)
            return false;
        i += 6;
    }
        return true;
}

int main() {
    int t; cin >> t;
    while(t--)
    {
        int num; cin >> num;
        cout << (is_prime(num) ? "TAK" : "NIE") << endl; 
    }
    return 0;
}