#include <iostream>

using namespace std;

int main() {
    int a, b, c, i = 0;
    cin >> a >> b >> c;
    for (;a <= b;a++) {
        if (c%a == 0) i++;
    }

    cout << i << endl;
}
