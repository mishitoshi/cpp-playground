#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main() {
    double r;
    cin >> r;
    double pi = 3.141592653589;
    double area = r*r*pi;
    double cir = 2*pi*r;
    printf("%lf %lf\n",area, cir);

    return 0;
}
