#include <iostream>

using namespace std;

int main() {
    char ch;
    int counter[26];
    for (int i=0;i<26;i++) {
        counter[i] = 0;
    }

    while ( cin >> ch ){
        if (isupper(ch)) ch = (char) tolower(ch);
        int num = ch - 'a';
        counter[num]++;
    }

    for (int i = 0; i < 26; i++) {
        char c = i + 'a';
        cout << c << " " << ":" << " " << counter[i] << endl;
    }

    return 0;
}
