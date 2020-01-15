#include <iostream>
using namespace std;

int nwd(int a, int b) { return  (b==0) ? a : nwd(b, a%b); }

int main() {
    int t; cin >> t;
    while(t--){
        int c, d; cin >> c >> d;
        cout << nwd(c, d) << endl;
    }
    return 0;
}