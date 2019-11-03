#include <iostream>

using namespace std;

int main(){
  cout << "HEJ!: ";
  int n;
  cin >> n;
  cout << n;

  for(; 0 < n; n--)
  {
    int number, rem, num;
    cin >> number;
    rem = num %10;
    num = num /10;
    int last_digit = number % 10;

    if(last_digit != 0)
      cout << last_digit << endl;

    else
    {
      int place = 100;
      {
        int non_zero_last_digit;
      }
    }
  }
  return 0;
}
