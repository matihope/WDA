#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    int lines;
    cin >> lines;
    for (int j = 0; j < lines; j++)
    {
        cin >> size;
        int input[size];

        for(int i = size-1; i >= 0; i--)
        {
            cin >> input[i];
        }
        for (int i = 0; i < size; i++) cout << input[i] << " ";
        cout << endl;
    }
    return 0;
}