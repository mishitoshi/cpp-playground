#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int matrix[n][m];
    int vector[m];
    int x;
    for (int i =0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> x;
            matrix[i][j] = x;
        }
    }

    for (int i = 0; i<m; i++) {
        cin >> x;
        vector[i] = x;
    }

    for (int i =0;i<n;i++) {
        int result = 0;
        for (int j=0;j<m;j++) {
            result += matrix[i][j] * vector[j];
        }
        cout << result << endl;
    }

    return 0;
}
