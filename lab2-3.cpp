#include <bits/stdc++.h>
#include <string.h>
#include <ctype.h>

using namespace std;

int main(){
    char str[] = "Compiler Design Lab";
    char c;
    char word[50][50];
    int wordIndex = 0;
    int charIndex = 0;
    int strSize = sizeof(str);


    for(int i = 0; i < strSize-1; i++){
        c = str[i];

        if(isalpha(c)){
            word[wordIndex][charIndex] = c;
            charIndex++;
        }
        else if(isspace(c)){
            word[wordIndex][charIndex++] = '\0';
            wordIndex++;
            charIndex = 0;
        }
    }

    for(int j = 0; j <= wordIndex; j++){
        cout << word[j] << endl;
    }


    return 0;
}
