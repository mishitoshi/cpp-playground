#include <iostream>

using namespace std;

int main() {
    int W,H,x,y,r;
    cin >> W >> H >> x >> y >> r;
    string result = (x-r>=0 && x+r<=W && y-r>=0 && y+r<=H) ? "Yes" : "No";
    cout << result.c_str() << endl;

    return 0;
}
