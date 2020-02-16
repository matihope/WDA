#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int t; cin >> t;

    int pinezki[t];

    int max_count = 0;
    int count = 0;
    for(int i = 0; i < t; i++){
        int input; cin >> input;
        if(input != 1){
            max_count = max(max_count, count);
            count = 0;
        }
        else count++;
    }
    max_count = max(max_count, count);
    cout << max_count;

    return 0;
}