#include <bits/stdc++.h>
#include <ctype.h>
#include <string.h>

using namespace std;

int main(){
     //char str[] = "CSE_#332-LAB ok";
     char str[] = "int dhaka = 23;\n char str = 'A';";
     int n = strlen(str);
     int i, row, col, line_count;
     char ch, word[25][25];

     row = col = 0;
     line_count = 1;

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
            if(ch == '\n'){
                line_count++;
            }
            i++;
        }
     }

    cout <<"List of tokens"<< endl;

     for(i = 0; i < row; i++){
        cout << word[i] <<endl;
     }

    cout << "Line count: " << line_count << endl;
    return 0;
}
