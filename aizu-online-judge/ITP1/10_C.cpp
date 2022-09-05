#include <iostream>
#include <numeric>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    while (1) {
        int n;
        cin >> n;
        if (n == 0) break;

        double s[n];

        for(int i=0;i<n;i++) {
            s[i] = 0;
        }

        for(int i=0;i<n;i++) {
            cin >> s[i];
        }
        double sum = accumulate(s, s + n, 0);
        double m = sum/n, a = 0;
        for(int i=0;i<n;i++) {
            a += pow(s[i] - m, 2.0);
        }

        cout << fixed << setprecision(8) << sqrt(a/n) << endl;
    }

    return 0;
}
