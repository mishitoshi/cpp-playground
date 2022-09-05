#include <iostream>

using namespace std;

int main() {
    int n,m,l,x;
    cin >> n >> m >> l;

    int A[n][m], B[m][l];
    long long C[n][l];

    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            C[i][j] = 0;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> x;
            A[i][j] = x;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            cin >> x;
            B[i][j] = x;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            for(int k=0;j<m;k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<l-1;j++){
            cout << C[i][j];
        }
        cout << C[i][l-1] << endl;
    }

    return 0;
}
