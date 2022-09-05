#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string str, rule;
    int n, a, b;
    cin >> str;
    cin >> n;
    string p;

    for (int i = 0; i<n; i++) {
        cin >> rule;
        cin >> a >> b;
        if (rule == "replace") {
            cin >> p;
            str.replace(a, b - a + 1, p);
        } else if (rule == "reverse") {
            std::reverse(str.begin() + a, str.begin() + b + 1);
        } else if (rule == "print") {
            cout << str.substr(a, b - a + 1) << endl;
        }
    }

    return 0;
}
