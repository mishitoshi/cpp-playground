#include <bits/stdc++.h>
using namespace std;
int main() {
    int N,A,B,sum=0;
    cin >> N >> A >> B;
    for(int i=1;i<=N;i++){
        int tmp=0;
        int n = i;
        while(n > 0){
            tmp += n % 10;
            n /= 10;
        }
        if (tmp >= A && tmp <= B)  {
            sum+=i;
        }
    }
    cout << sum << endl;

    return 0;
}