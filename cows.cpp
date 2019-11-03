#include <iostream>
#include <algorithm>

using namespace std;

int find_min_distance(int s[], int c){
	// s = position of stalls
	// c = amount of cows
	// s ex. 1 2 4 8 9
	int s_size = sizeof(s)/sizeof(s[0]);

	int distance = 0;
	int cow_positions[c];

	// init first and last cow
	cow_positions[0] = s[0];
	cow_positions[c-1] = s[s_size-1];

	int difference = max_element(s, s+s_size);
	cout << difference << endl;
	/*

	// s_size-2 because 2 cows've gotten initalized already
	for(int i = 0; i < s_size-2; i++)
	{
		int d = 0; // distance for this case
		// cow is on s[i+2] spot


		if(distance != 0)
			if(d < distance)
				distance = d;
		else 
			distance = d;
	}
	*/


	return distance;
}

int main()
{
    int test_num;
    cin >> test_num;

    // Run test_num times
    for(; test_num > 0; test_num--)
    {
        int stalls, cows;
        cin >> stalls;
        cin >> cows;

        int stall_pos[stalls];
        for(int i = 0; i < stalls; i++)
        {
            cin >> stall_pos[i];
        }
    
        sort(stall_pos, stall_pos+stalls); // sorted stalls

        cout << find_min_distance(stall_pos, cows);
    }

    return 0;
}