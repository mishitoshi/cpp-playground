#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double distX = x2 - x1;
    double distY = y2 - y1;
    cout << std::fixed << setprecision(8) << sqrt(distX * distX + distY * distY) << endl;

    return 0;
}
