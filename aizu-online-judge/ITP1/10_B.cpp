#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, C, S, L, h, rad, PI = acos(-1);
    cin >> a>>b>>C;
    rad = C * PI / 180;
    S = a*b*sin(rad)/2;
    L = sqrt(a*a+b*b-2*a*b*cos(rad)) + a + b;
    h = b * sin(rad);

    cout << std::fixed << setprecision(8) << S << endl << L << endl << h << endl;

    return 0;
}
