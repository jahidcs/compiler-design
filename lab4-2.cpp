#include<bits/stdc++.h>

using namespace std;

int main(){
    char str[] = "sum = 3 + 2;";
    int n = strlen(str);
    int i, row, col, line_count;
    char ch, word[25][25];
    char spcl[100];
    int spcl_index = 0;

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
            else if(ch == ' '){

            }
            else{
                spcl[spcl_index] = ch;
                spcl_index++;
            }
            i++;
        }
     }


    cout <<"List of tokens"<< endl;

    for(i = 0; i < row; i++){
        int lenWord = strlen(word[i]);
        int marker = 1;
        for(int j = 0; j < lenWord; j++){
            if(word[i][j] >= '0' && word[i][j] <= '9'){

            }
            else{
                marker = 0;
            }
        }
        if(marker == 1){
            cout << word[i] << " : Integer"<< endl;
        }
        else{
            cout << word[i] << endl;
        }
     }

    cout << "List of Special characters" << endl;
    for(i = 0; i < spcl_index; i++){
        char s = spcl[i];
        if(s == ';'){
            cout << s << " End of the statement" << endl;
        }
        else if(s == '+'){
            cout << s << " Additional Operator" << endl;
        }
        else if(s == '-'){
            cout << s << " Subtruction Operator" << endl;
        }
        else if(s == '='){
            cout << s << " Assignment Operator" << endl;
        }
    }
    cout << "Line count: " << line_count << endl;
    return 0;
}
