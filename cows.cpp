#include <iostream>

using namespace std;

int main()
{
    int test_num;
    cout << "Test count:";
    cin >> test_num;

    // Run test_num times
    for(; test_num > 0; test_num--)
    {
        int stalls, cows;
        cin >> stalls;
        cin >> cows;

        int cow_pos[cows];
        for(int i = 0; i < cows; i++)
        {
            cin >> cow_pos[i];
        }

        sort(cow_pos, sizeof(cows_pos)/sizeof(cows_pos[0]));
        for(int i = 0; i < cows; i++)
            cout << cow_pos[i];
    }

    return 0;
}