#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    double x[n], y[n];
    for (int i = 0;i<n;i++) cin >> x[i];
    for (int i = 0;i<n;i++) cin >> y[i];
    double a,b,c,d;
    for(int i=0;i<n;i++) {
        a += abs(x[i]-y[i]);
        b += pow(abs(x[i]-y[i]), 2.0);
        c += pow(abs(x[i]-y[i]), 3.0);
        d = max(d, abs(x[i]-y[i]));
    }

    cout << fixed << setprecision(8) << a << endl << sqrt(b) << endl << pow(c, 1.0/3.0) << endl << d << endl;

    return 0;
}
