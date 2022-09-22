#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int count=0;
    for (char i:s) {
        if (i == '1')
            count ++;
    }
    cout << count << endl;

    return 0;
}