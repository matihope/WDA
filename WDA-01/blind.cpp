#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int tests;
    cin >> tests;
    for(; tests > 0; --tests)
    {
        int seat;
        cin >> seat;

        // special case
        if(seat == 1)
        {
           cout << "poor conductor" << endl;
           continue;
        }
        else
        {
           int row_no = ((seat-2) / 5) + 1;
	   
           string dir;
           int help = (seat % 10);
           if(0 <= help && help <= 3) dir = 'L';
           else dir = 'R';
           
           string pos;
           switch(help)
           {
                   case 1:
                   case 2:
                   case 6:
                   case 7:
                           pos = 'W';
                           break;
                   case 0:
                   case 3:
                   case 4:
                   case 9:
                           pos = 'A';
                           break;
                   case 5:
                   case 8:
                           pos = 'M';
                           break;
           }

           cout << row_no << " " << pos << " " << dir << endl;
        }
    }
    return 0;
}
