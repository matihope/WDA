#include <bits/stdc++.h>



typedef unsigned long long LL;

using namespace std;

bool is_prime(LL x)
{
    if (x < 2) 
        return false;
        
    for(LL i=2; i*i <= x; i++)
    {
        if((x % i) == 0) 
            return false;
    }
    return true;
}

vector<LL> generate_nums()
{
    //Generate all possible factors that fit in (sqrt(biggest number that can fit into LL))
    vector<LL> liczby(1, 1); // 1 is for edge case
    for(LL n = 2; n < 100000; n++) // number we do powers of
    {
        if(!is_prime(n)) continue;

        LL copy_n = n;
        while(true)
        {
            copy_n *= n;
            if(copy_n <= 3037000500) // sqrt of max num that fits into long long(9223372036854775807)
            {
                LL i = copy_n;
                liczby.push_back(i);
                liczby.push_back(i*i);
                liczby.push_back(i*i*i);
                liczby.push_back(i*i*i*i);
            }
            else break;
        }
    }
    return liczby;
}

int main(){
    int t; cin >> t;

    vector<LL> liczby = generate_nums();
    cout << liczby.size() << endl;
    for(auto num: liczby){
        if(num == 16) cout << "16!!!" << endl;
    }

    while(t--)
    {
        LL liczba; cin >> liczba;

        // Calculate
        bool passed = false;

        if(!passed){
            for(auto n: liczby){
                if (n == liczba){
                    passed = true;
                    break;
                }
            } 
        }


        if (passed) cout << "YES\n";
        else cout << "NO\n";
    }


    return 0;
}