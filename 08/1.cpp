#include <bits/stdc++.h>

using namespace std;


struct a_hash{
    a_hash(int v, string k){
        value = v;
        key = k;
    }
    int value;
    string key;

    void print(){ cout << value << ":" << key << endl; }

};

int hash_it(string key) {
    long long h = 0;
    for (int i = 1; i <= key.length(); i++){
        h += key[i-1] * i;
    }
    return int((h*19) % 101);
}


int find_hash(string key, vector<a_hash> hashes)
{
    // return index position of a_hash in hashes
    for(int i = 0; i < hashes.size(); i++)
    {
        if (i >= 20) break;
        if (hashes[i].key == key){
            return i;
        }
    }
    return -1;
}


bool sort_by_value(const a_hash& x1, const a_hash& x2){
    return (x1.value < x2.value);
}


int main()
{
    ios_base::sync_with_stdio(0);

    // input 1st line
    int t; cin >> t;
    while (t--)
    {
        // input 2nd line
        int n; cin >> n;

        vector<a_hash> hashes;
        while (n--)
        {
            // input 2+n line
            string s; cin >> s;

            string key = s.substr(4);
            int hash = hash_it(key);

            switch (s[0])
            {
                case 'A':
                    if (find_hash(key, hashes) == -1){
                        int x = find_hash("", hashes);
                        if(x != -1) hashes[x] = a_hash(hash, key);
                        else        hashes.push_back(a_hash(hash, key));
                    }
                    break;

                case 'D':
                    int index = find_hash(key, hashes);
                    if (index != -1) {
                        hashes[index].key = "";
                        hashes[index].value = -1;
                    }
                    break;
            }
        }
        for(int i = 0; i < hashes.size(); i++){
            if(hashes[i].key == ""){
                hashes.erase(hashes.begin()+i);
                i--;
            }
        }

        sort(hashes.begin(), hashes.end(), sort_by_value);


        // output
        cout << hashes.size() << endl;
        for(a_hash h: hashes){

            h.print();
        }
    }
    return 0;
}