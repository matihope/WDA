#include <bits/stdc++.h>

using namespace std;


vector<int> substract(vector<int> c, vector<int> sx)
{
    vector<int> result;

    reverse(c.begin(), c.end());
    reverse(sx.begin(), sx.end());

    int carry = 0;

    vector<int> max = c;
    vector<int> min = sx;

    for(int i = 0; i < min.size(); i++)
    {
        carry += max[i] - min[i];
        if(carry < 0) result.push_back(10+carry);
        else result.push_back(carry);
        carry /= 10; 
    }

    reverse(result.begin(), result.end());
    while(result[0] == 0){
        result.erase(result.begin());
    }
    return result;
}


vector<int> add(vector<int> s1, vector<int> s2)
{
    // This function works perfectly
    vector<int> result;

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    int carry = 0;

    vector<int> max = s1;
    vector<int> min = s2;
    if (s1.size() < s2.size())
    {
        max = s2;
        min = s1;
    }

    for(int i = 0; i < min.size(); i++)
    {
        carry += max[i] + min[i];
        if(carry >= 10) result.push_back((int)carry%10);
        else result.push_back((int)carry); 
        carry /= 10;
    }
    if(carry > 0) result.push_back(carry);  

    reverse(result.begin(), result.end());

    return result;
}

vector<int> stoi_mine(string &s){
    vector<int> num;

    for(char n:s){
        num.push_back((int)n - '0');
    }

    return num; 
}


int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        // read
        vector<int> nums[3];
        for(int i = 0; i < 3; i++)
        {
            string num;
            cin >> num;
            nums[i] = stoi_mine(num);
        }

        // calculate
        vector<int> answer;
        answer = add(nums[1], nums[1]);
        answer = substract(answer, nums[0]);
        answer = substract(answer, nums[2]);
        
        // output
        for(int n: answer){
            cout << n;
        }
        cout << endl;
    }
    return 0;
}
