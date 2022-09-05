#include <iostream>
#include <vector>

using namespace std;

int main() {
    int S;
    cin >> S;
    int mm = S/60;
//    int h = mm/60;
//    int m = mm%60;
    cout << mm/60 << ":" << mm%60 << ":" << S%60 << endl;

    return 0;
}
