//https://www.hackerrank.com/contests/wda-03-2019/challenges/invcnt-inversion-count/
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#define ll long long

using namespace std;

void merge(int first, int middle, int last, ll arr[], ll& invcnt) {
    //vector<ll> tmp(middle - first + 2);
    ll tmp[200001];
    int left = first;
    int right = middle + 1;
    int index = 0;

    while (left <= middle && right <= last) {
        int x = middle - left + 1;
        if (arr[left] <= arr[right]) {
            tmp[index++] = arr[left++];
            --x;
        } else {
            tmp[index++] = arr[right++];
            invcnt += x;
        }
    }

    while (left <= middle) {
        tmp[index] = arr[left];
        left++;
        index++;
    }

    while (right <= last) {
        tmp[index] = arr[right];
        right++;
        index++;
    }

    for (int i = first; i <= last; i++)
        arr[i] = tmp[i - first];
}

void merge_sort(int first, int last, ll tab[], ll& invcnt) {
    if (first >= last)
        return;
    int middle = (first + last) / 2;
    merge_sort(first, middle, tab, invcnt);
    merge_sort(middle + 1, last, tab, invcnt);
    merge(first, middle, last, tab, invcnt);
}

int main(int argc, char const* argv[]) {
    ios_base::sync_with_stdio(0);
    unsigned int t;
    cin >> t;
    while (t--) {
        ll res = 0;
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        merge_sort(0, n - 1, &v[0], res);
        cout << res << endl;
    }
    return 0;
}
