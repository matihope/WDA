//https://www.hackerrank.com/contests/wda-02-2019/challenges/hands-clock-hands/
#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const* argv[]) {
    ios_base::sync_with_stdio(0);
    const double c = 12.0 / 11.0;
    int t;
    cin >> t;
    while (t--) {
        string start_string;
        cin >> start_string;
        double start = (start_string[0] - '0') * 10.0 + (start_string[1] - '0');
        start += (double)((start_string[3] - '0') * 10.0 + (start_string[4] - '0')) / 60.0;

        string end_string;
        cin >> end_string;
        double end = (end_string[0] - '0') * 10.0 + (end_string[1] - '0');
        end += (double)((end_string[3] - '0') * 10.0 + (end_string[4] - '0')) / 60.0;

        cout << floor(end / c) - floor(start / c) << endl;
    }
    return 0;
}
