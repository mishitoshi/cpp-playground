#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool cards[4][13] = {{}};
    char ch;
    int x;
    for (int i=0;i<n;i++) {
        scanf("%c", &ch);
        scanf("%c %d", &ch, &x);
        if (ch == 'S') {
            cards[0][x-1] = true;
        } else if (ch == 'H'){
            cards[1][x-1] = true;
        } else if (ch == 'C') {
            cards[2][x-1] = true;
        } else if (ch == 'D') {
            cards[3][x-1] = true;
        }
    }

    for (int i=0;i<4;i++) {
        for (int j=0;j<13;j++) {
            if (cards[i][j] == true) continue;

            if (i == 0) printf("S %d\n", j+1);
            if (i == 1) printf("H %d\n", j+1);
            if (i == 2) printf("C %d\n", j+1);
            if (i == 3) printf("D %d\n", j+1);
        }
    }

    return 0;
}
