#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int tests;
    cin >> tests;
    for(; tests > 0; tests--)
    {
        int inputs;
        
        cin >> inputs;
        string words[inputs];
        
        for(int i = 0; i < inputs; i++)
        {
            cin >> words[i];
        }
        
        for(int i = 0; i < inputs; i++) sort(words[i].begin(), words[i].end());
        sort(words, words+inputs);
        
        //for(int i = 0; i < inputs; i++) cout << words[i] << endl;
        
        bool prev = false;
        int mini_count = 1;
        int count_max_repetitions = 0;
        for(int i = 1; i < inputs; i++)
        {
            if(words[i-1] == words[i]) 
                mini_count++;
            else
            {
                prev = false;
                count_max_repetitions = max(count_max_repetitions, mini_count);
                mini_count = 1;
            }
            /*
            if(!prev && words[i-1] == words[i])
            {
                mini_count++;
                prev = true;
            }
            */
        }
        cout << count_max_repetitions << endl;
        
    }
}