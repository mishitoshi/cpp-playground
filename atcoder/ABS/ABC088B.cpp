#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> vec(N);
    for(int i=0;i<N;i++) {
        cin >> vec[i];
    }
    int count = 0, alice_score = 0, bob_score = 0;
    sort(vec.begin(), vec.end(), greater<int>());
    for(int i=0;i<N;i++) {
        if (i % 2 == 0) {
            alice_score += vec[i];
        } else {
            bob_score += vec[i];
        }
    }

    cout << alice_score - bob_score << endl;

    return 0;
}