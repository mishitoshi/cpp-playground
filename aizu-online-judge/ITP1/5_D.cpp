#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x = i;
        if (x % 3 == 0) {
            printf(" %d", i);
            continue;
        }

        while (1) {
            if (x % 10 == 3) {
                printf(" %d", i);
                break;
            } else {
                x /= 10;
                if (x) {
                    continue;
                } else {
                    break;
                }
            }
        }
    }

    return 0;
}
