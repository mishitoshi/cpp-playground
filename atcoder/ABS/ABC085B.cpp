#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> v(N);
    for(int i=0;i<N;i++) {
        cin >> v[i];
    }
    std::sort(v.begin(), v.end());
    v.erase(std::unique(v.begin(), v.end()), v.end());
    cout << v.size() << endl;

    return 0;
}