#include <iostream>

using namespace std;

int main() {
    int n, x;

    while (1) {
        cin >> n >> x;
        if (n==0 && x==0) break;

        int result = 0;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                for (int k=1;k<=n;k++){
                    if (i==j || j==k || i==k) continue;

                    if (i+j+k == x) {
                        result+=1;
                    }
                }
            }
        }
        cout << result/6 << endl;
    }
    return 0;
}
