#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a,b,c,t;
    cin >> a >> b >> c;
    if (a > b) {
        t = a;
        a = b;
        b = t;
    }

    if (b > c) {
        t = b;
        b = c;
        c = t;
    }

    if (a > b) {
        t = a;
        a = b;
        b = t;
    }
    printf("%d %d %d\n", a,b,c);

    return 0;
}
