#include <bits/stdc++.h>
#include <ctype.h>
#include <string.h>

using namespace std;

int main(){
    char words[] = "G00GLE#";

    int i;
    int s = sizeof(words) / sizeof(char);


    for(i = 0; i < s-1; i++){
        char c = words[i];
        if(isalpha(c)){
            cout << c << " is a Alpha Character\n";
        }
        else if(isdigit(c)){
            cout << c << " is a Numeric character\n";
        }
        else{
            cout << c << " is a special character\n";
        }
    }

    return 0;
}
