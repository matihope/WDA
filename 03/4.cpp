#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int num;
        cin >> num;
        if((num % 2) == 0)
            cout << "Thankyou Shaktiman" << endl;
        else
            cout << "Sorry Shaktiman" << endl;
    }
    return 0;
}
