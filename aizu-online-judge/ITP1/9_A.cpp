#include <iostream>
using namespace std;

int main() {
    string s;
    int m, h;
    while (1) {
        cin >> s;
        if (s == "-") break;

        cin >> m;
        for(int i=0;i<m;i++) {
            cin >> h;
            s = s.substr(h, s.size()) + s.substr(0, h);
        }
        cout << s << endl;
    }

    return 0;
}
