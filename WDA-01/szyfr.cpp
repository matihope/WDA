#include <iostream>

using namespace std;

int main()
{
    string input;
    cin >> input;

        for(int i = 0; i < input.length(); ++i)
        {
            input[i] += 3;
            if(input[i] < 65) input[i] = 90 - (65-input[i]);
            else if(input[i] > 90) input[i] = 65 + (input[i]-90);
        }
        cout << input << endl;
    }
    return 0;
}

