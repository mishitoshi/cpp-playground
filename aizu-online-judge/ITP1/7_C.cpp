#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int r, c, x, sum, total_sum = 0;
    cin >> r >> c;
    int table[r+1][c+1];
    for(int i = 0; i < r+1; i++){
        for(int j = 0; j < c+1; j++){
            table[i][j] = 0;
        }
    }
    for(int i=0;i<r;i++) {
        sum = 0;
        for(int j=0;j<c;j++) {
            cin >> x;
            table[i][j] = x;
            sum += x;
            table[r][j] += x;
        }
        table[i][c] = sum;
        total_sum += sum;
    }

    table[r][c] = total_sum;

    for(int i=0;i<=r;i++) {
        for(int j=0;j<c;j++) {
            printf("%d ", table[i][j]);
        }
        printf("%d\n", table[i][c]);
    }

    return 0;
}
