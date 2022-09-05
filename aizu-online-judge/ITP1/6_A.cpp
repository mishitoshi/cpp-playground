#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int ary[n];
    for (int i = 1; i <= n; i++) {
        cin >> ary[i];
    }

    for (int i = 0;i<n;i++) {
        if (i) printf(" ");

        printf("%d", ary[n-i]);
    }

    return 0;
}