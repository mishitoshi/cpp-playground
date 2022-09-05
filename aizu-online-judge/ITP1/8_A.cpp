#include <iostream>
#include <stdio.h>
#include<cctype>

using namespace std;

int main() {
    char ch;
    while(1){
        scanf("%c", &ch);
        if ( ch == '\n' ) {
            cout << endl;
            break;
        }

        if ( isalpha(ch) ) {
            if (islower(ch)) cout << (char) toupper(ch);
            if (isupper(ch)) cout << (char) tolower(ch);
        } else {
            cout << ch;
        }
    }

    return 0;
}
