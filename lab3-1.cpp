#include <bits/stdc++.h>
#include <ctype.h>
#include <string.h>

using namespace std;

int main(){
     char str[] = "CSE_#332-LAB ok";
     int n = strlen(str);
     int i, row, col, line_count;
     char ch, word[25][25];

     row = col = line_count = 0;

     for(i = 0; i < n;){
        ch = str[i];
        if(isalnum(ch)){
            while(isalnum(ch)){
                word[row][col] = ch;
                col++;
                i++;
                ch = str[i];
            }
            word[row][col] = '\0';
            row++;
            col = 0;
        }
        else{
            i++;
        }
     }

    cout <<"List of tokens"<< endl;

     for(i = 0; i < row; i++){
        cout << word[i] <<endl;

     }

    return 0;
}
