#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    long long n, min, max, sum = 0;
    cin >> n;

    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        sum+=a;
        if (i == 0) {
            min = a;
            max = a;
        }
        if (a < min) {
            min = a;
        }
        if (a > max) {
            max = a;
        }
    }
    printf("%d %d %ld\n", min, max, sum);

    return 0;
}
