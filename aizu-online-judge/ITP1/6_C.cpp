#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count[4][3][10]={{{}}};
    char ch;
    int b,f,r,v;
    for (int i=0;i<n;i++) {
        scanf("%c", &ch);
        scanf("%d %d %d %d",&b,&f,&r,&v);

        if (count[b-1][f-1][r-1]) {
            count[b-1][f-1][r-1] += v;
        } else {
            count[b-1][f-1][r-1] = v;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 10; k++) {
                printf(" %d", count[i][j][k]);

            }
            printf("\n");
        }
        if (i < 3) printf("####################\n");
    }

    return 0;
}
