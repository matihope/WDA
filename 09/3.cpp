#include <bits/stdc++.h>


using namespace std;


struct test{
    int days_away;
    int days_to_prep;
};


bool key_days_away_ascending(const test& x1, const test& x2)
{
    return (x1.days_away < x2.days_away);
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        // read input
        int sets;
        cin >> sets;

        vector<test> tests;

        for(int i=0; i<sets; i++){
            int a, b;
            cin >> a >> b;
            tests.push_back(test{a, b});
        }

        sort(tests.begin(), tests.end(), key_days_away_ascending);

        // remove useless tests
        for (int i = sets-1; i > 0; i--){
            if((tests[i].days_away - (tests[i].days_to_prep-1)) >= tests[i-1].days_away){
                tests.erase(tests.begin() + i);
                sets -= 1;
            }
        }

        int days_to_learn = -1;
        for (int i = 1; i < sets; i++){
            days_to_learn -= (tests[i].days_away - tests[i-1].days_away);
        }

        for (auto test : tests)
        {
            days_to_learn += test.days_to_prep;
        }

        cout << days_to_learn << endl;
    }
    return 0;
}