#include <iostream>

using namespace std;

int main() {
    int n, t_score = 0, h_score = 0;
    string t, h;
    cin >> n;

    for (int i=0;i<n;i++) {
        cin >> t >> h;
        if (t == h) {
            t_score++;
            h_score++;
        } else if (t > h) {
            t_score+=3;
        } else {
            h_score+=3;
        }
    }
    cout << t_score << " " << h_score << endl;

    return 0;
}
