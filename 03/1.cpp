#include <algorithm>
#include <iostream>
#include <vector>
 
using namespace std;
struct xyz {
    xyz(int xx, int yy, int zz) {
        x = xx;
        y = yy;
        z = zz;
    }
    int x, y, z;
};
 
bool compare(xyz left, xyz right) {
    if (left.x == right.x) {
        if (left.y == right.y) {
            if (left.z == right.z) {
                return false;
            } else {
                return left.z < right.z;
            }
        } else {
            return left.y < right.y;
        }
    } else {
        return left.x < right.x;
    }
}
 
int main() {
    int t;
    cin >> t;
    vector<xyz> v;
    for (; t > 0; --t) {
        int x, y, z;
        cin >> x >> y >> z;
        v.push_back(xyz(x, y, z));
    }
    sort(v.begin(), v.end(), compare);
    for(xyz element : v){
        cout << element.x << ' ' << element.y << ' ' << element.z << endl;
    }
    return 0;
}