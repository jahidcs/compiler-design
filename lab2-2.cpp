#include <bits/stdc++.h>
#include <string.h>
#include <ctype.h>

using namespace std;

int main(){
    string str;
    getline(cin, str); // get an input(String)

    int strSize = str.size(); // measure the length of the string which we get as input
    char c;
    char word[50][50]; // define a 2-D array
    int wordIndex = 0; // It will work as a Row index of word[50][50]
    int charIndex = 0; // It will work as a Row index of word[50][50]


    for(int i = 0; i < strSize; i++){
        c = str[i];

        if(isalpha(c)){
            word[wordIndex][charIndex] = c; // ex: word[0][0] = str[0], word[0][1] = str[1]
            charIndex++;
        }
        else if(isspace(c)){
            word[wordIndex][charIndex++] = '\0'; // we have ensure that current row has closed before jump to the next row index
            wordIndex++;
            charIndex = 0; // When we jump to the next Row, the column index will again start from 0, that means word[1][0]
        }
    }

    for(int j = 0; j <= wordIndex; j++){
        cout << word[j] << endl;
    }

    return 0;
}
