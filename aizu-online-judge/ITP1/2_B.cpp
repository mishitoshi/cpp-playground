#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    string result = (a < b && b < c) ? "Yes" : "No";
    printf("%s\n", result.c_str());

    return 0;
}
