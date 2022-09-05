#include <iostream>
// std::cinのように書かなくて良くなるおまじない
using namespace std;

int main() {
    int a, b;
    // 二つの引数を標準入力から受け取る
    cin >> a >> b;
    // 複数のデータを出力
    cout << a*b << " " << a*2+b*2 << endl;
    return 0;
}

// https://judge.u-aizu.ac.jp/onlinejudge/commentary.jsp?id=ITP1_1_C&pattern=pre&type=language&filter=C%2B%2B