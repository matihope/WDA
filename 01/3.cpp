#include <iostream>

using namespace std;

int main()
{
    string input;
    while(getline(cin, input))
    {
        for(int i = 0; i < input.size(); ++i)
        {
            if ('A' <= input[i] && input[i] <= 'Z')
                cout << (char)(((input[i] + 3) - 65) % 26 + 65);
            else
                cout << input[i];
        }
        cout << endl;
    }
    return 0;
}

