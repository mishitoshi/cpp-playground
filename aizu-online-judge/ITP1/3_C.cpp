#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main() {
    int a, b;
    while (1) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;

        if (a < b) {
            printf("%d %d\n", a, b);
        } else {
            printf("%d %d\n", b, a);
        }
    }

    return 0;
}
