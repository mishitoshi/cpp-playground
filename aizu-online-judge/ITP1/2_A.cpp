#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string s;
    if (a < b) {
        s = "<";
    } else if (a > b) {
        s = ">";
    } else {
        s = "==";
    }
    printf("a %s b\n", s.c_str());
}
